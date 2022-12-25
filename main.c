//#resource "loader.bas"
//#resource "maketape.sh"

#include <string.h>

#include "scr_addr.h"
#include "background1.h"
#include "background2.h"
#include "sprites.h"
#include "dashboard.h"
#include "font1.h"
#include "music.h"
#include "effects.h"
#include "messages.h"

#define EMBEDDED_FONT_START 0x3c00

#define INTERRUPT_REG_VAL 0xfd
#define INTERRUPT_HALF_VECTOR 0xfe
#define INTERRUPT_TABLE_SIZE 257

#define INTERRUPT_TABLE_START (INTERRUPT_REG_VAL * 0x100)
#define INTERRUPT_JUMP_ADDR (INTERRUPT_HALF_VECTOR * 0x101 - 1)

#define POKES (INTERRUPT_TABLE_START + INTERRUPT_TABLE_SIZE)

#define SIZE_OF_INT 2

#define DASHBOARD_HEIGHT 32
#define SCROLL_STEP 4
#define LINE_HEIGHT 16
#define LINE_WIDTH 16
#define STEPS_PER_LINE (LINE_HEIGHT / SCROLL_STEP)
#define VISIBLE_MAP_ROWS ((SCR_HEIGHT - DASHBOARD_HEIGHT) / LINE_HEIGHT)
#define MAX_MAP_ROW (VISIBLE_MAP_ROWS - 1)

#define RESERVED_SPRITES 2
#define MAX_ENEMIES 6
#define MAX_SPRITES (MAX_ENEMIES + RESERVED_SPRITES)

#define SPRITE_WIDTH 2
#define SPRITE_WIDTH_PX (SPRITE_WIDTH * 8)
#define SPRITE_BUF_SIZE ((SPRITE_WIDTH + 1) * LINE_HEIGHT)

#define NUM_POSES 3
#define HERO_SCROLL_POS 120

#define LIVES_POS_X 1
#define LIVES_POS_Y 2
#define BULLETS_POS_X 1
#define BULLETS_POS_Y 1

#define HERO      (sprites + 0)
#define BULLET    (sprites + 1)
#define HERO_AI   (aidata + 0)
#define BULLET_AI (aidata + 1) 

#define BOUNDING_BOX_SAFE_SPACE 2
#define MAX_FALL_SPEED 4
#define ABYSS_DEPTH 4
#define STARS_DENSE 3 
#define SPEED_FACTOR 2
#define CHAT_REPEAT_TIME 30

/// Sinclair joystick key masks
typedef enum {
  KEY_FIRE  = 0b00010000,
  KEY_DOWN  = 0b00001000,
  KEY_UP    = 0b00000100,
  KEY_RIGHT = 0b00000010,
  KEY_LEFT  = 0b00000001
} key_t;

/// Kind of characters
typedef enum {
  CHAR_HERO = 0,
  CHAR_WORTOR,
  CHAR_RAT,
  CHAR_SPIDER,
  CHAR_FUNGUS,
  CHAR_RESPAWNER,
  CHAR_SWINX,
  CHAR_HEART,
  CHAR_BULLET,
  NUM_CHARACTERS
} character_t;

/// Type of character's behaviour
typedef enum {
  CHAR_TYPE_NONE = 0,
  CHAR_TYPE_HERO,
  CHAR_TYPE_FLOATER,
  CHAR_TYPE_ROAMER,
  CHAR_TYPE_FALLER,
  CHAR_TYPE_BULLET,
  CHAR_TYPE_STANDER,
  CHAR_TYPE_RISER,
  CHAR_TYPE_RESPAWNER,
  NUM_CHAR_TYPES
} char_type_t;

typedef enum {
  ENV_BKG = 0,
  ENV_BLOCK,
  ENV_PIPEV,
  ENV_TELEPORT,
  ENV_PIPEH,
  ENV_PIPEVR,
  ENV_PIPEHD,
  ENV_PIPEVL,
  ENV_PIPEHU,
  ENV_LADDER,
  ENV_SPIKESUP,
  ENV_SPIKESDN,
  ENV_ANSWER,
  ENV_EMPTY,
  NUM_ENV_TYPES  
} env_type_t;

/// Sprite data
typedef struct {
  unsigned char *sprite; /// pointer to sprite image
  unsigned char x; /// X coord in pixels
  unsigned char y; /// Y coord in pixels
  char *buf;       /// pointer to image restore buffer
  char **lines;    /// array of screen addreses of each line
  unsigned char rendered;
} sprite_struct_t;

/// Map data
typedef struct {
  unsigned char b; /// borders data
  unsigned int o;  /// objects data
} map_struct_t;

/// Stages of rendering
typedef enum {	
  STG_PREPARE_LINE = 0,
  STG_PREPARE_OBJ,
  STG_CHAT,
  STG_DRAW_LINE,
  NUM_PROC_STAGES
} stage_t;

/// Available moving directions for AI
typedef enum {
  DIR_LEFT = 0,
  DIR_RIGHT,
  DIR_UP,
  DIR_DOWN,
  NUM_DIRECTIONS
} dir_t;

/// Character AI data
typedef struct {
  char_type_t type;       /// type of character's behaviour
  character_t char_type;  /// kind of character
  signed char dx;         /// character's horizontal speed 
  signed char dy;         /// character's vertical speed
  unsigned char pose;     /// current pose of character
  unsigned char base_spr; /// pointer to first character's image in sprite set
  dir_t dir;              /// current character's direction
} ai_struct_t;

typedef struct {
  unsigned char top;
  unsigned char bottom;
  unsigned char right;
  unsigned char left;
} rect_t;

typedef struct {
  unsigned char x;
  unsigned char y;
} point_t;

typedef struct {
  rect_t bounding_box;
  rect_t map_coords;
  rect_t touch;	
  unsigned char stand_at;
} collision_t;

/// Character data on a map
typedef struct {
  unsigned int p;  /// character's Y pos in blocks
  unsigned char e; /// <kind of character> << 4 | <character's X pos in blocks>
} char_struct_t;

typedef struct {
  unsigned char *current_song;
  unsigned char *p_music;
} sound_struct_t;

typedef void (*funcptr)(void);

#include "map.h"

__at (SCREEN_BUFFER_START) char screen_buf[0x1800];
__at (ATTR_SCREEN_BUFFER_START) char screen_attr_buf[0x300];
__at (EMBEDDED_FONT_START) char font0[];
__at (INTERRUPT_TABLE_START) char interrupt_table[INTERRUPT_TABLE_SIZE];
__at (INTERRUPT_JUMP_ADDR) unsigned int interrupt_jump[2] = {0xc300, (unsigned int)&nmi_isr};

__sfr __at 0xfe joystick_keys_port;
__sfr __banked __at 0xbffd ay_data_port;
__sfr __banked __at 0xfffd ay_addr_port;

// Game balance constants. Poke friendly
__at (POKES +  0) signed char SHOW_INTRO;
__at (POKES +  1) signed char JUMP_FORCE;
__at (POKES +  2) signed char FALLER_SENSE;
__at (POKES +  3) signed char HERO_LIVES;
__at (POKES +  4) signed char HERO_LIVES_MAX;
__at (POKES +  5) signed char IMMORTALITY_TIME;
__at (POKES +  6) signed char BULLET_SPEED;
__at (POKES +  7) signed char HERO_BULLETS;
__at (POKES +  8) signed char HERO_BULLETS_MAX;
__at (POKES +  9) signed char HERO_SPEED;
__at (POKES + 10) signed char RESPAWN_TIME;

/******************* 
* global objects
*******************/
/// random seed
static unsigned int seed = 12345; 

/// where to store stack pointer
static unsigned int sp_holder;    

/// visible map projection buffer
static unsigned char map_lines[VISIBLE_MAP_ROWS][LINE_WIDTH]; 

/// where to store screen data to restore image after sprite
static char sprite_buffers[MAX_SPRITES][SPRITE_BUF_SIZE]; 

/// where to store precalculated addreses of each sprite line
static char line_buffers[MAX_SPRITES][LINE_HEIGHT * SIZE_OF_INT]; 

static sprite_struct_t sprites[MAX_SPRITES];
static ai_struct_t aidata[MAX_SPRITES];

static collision_t collision;
static unsigned char key;
static unsigned int step_counter = 0;
static unsigned int map_pos = 0;
static unsigned int frame_counter = 0;
static unsigned int char_pointer = 0;
static char **messages = messages_int;
static char **chat = chat_ru;
static char **notes = notes_ru;
static unsigned char imm_timer = 0;
static unsigned char respawn_timer = 0;
static unsigned char need_scroll = 0;
static unsigned int current_sprite;
static sprite_struct_t *p_current_sprite;
static ai_struct_t *p_current_ai;
static unsigned char *p_music_start = NULL;
static unsigned char *p_music = NULL;
static unsigned char music_timer = 0;
static unsigned char *p_music_store = NULL;
static unsigned char noise_store = 0;
static unsigned char mixer_store = 0;
static unsigned char second_timer = 0;
static unsigned int global_timer = 0;

static unsigned char chat_counter = 0;
static unsigned char chat_started = 0;
static unsigned char chat_timer = 0;
static unsigned char chat_update_flag = 0;

static unsigned char success_flag = 0;
static unsigned char teleport_used = 0;

unsigned int random();
void scroll();
void draw_block(unsigned char pos, unsigned char type, unsigned int y);
void draw_sprite(sprite_struct_t *p_sprite);
void restore_sprite(sprite_struct_t *p_sprite);
void draw_map_line();
void update_map();
void ai(sprite_struct_t *p_sprite, ai_struct_t *p_ai);
unsigned char find_char_cell(unsigned char c);
void setup_char(unsigned char t, unsigned char x, unsigned char y, unsigned char pref_dir);
void fire();
void draw_dashboard_frame();
void draw_stats();
void print(char *s, unsigned char x, unsigned char y);
void print_number(unsigned int val, unsigned char x, unsigned char y);
void draw_frame(unsigned char width, unsigned char height, char **items);
unsigned char *draw_bkg_line(unsigned char pos, char *line);
void scroll_bkg_image(unsigned char background[][256]);
unsigned char menu(unsigned char width, unsigned char height, char **items);
void init();
void add_stars(unsigned int count);
void intro();
void game_over();
void game_complete();
unsigned char distance(unsigned char a, unsigned char b);
void check_collision(sprite_struct_t *p_sprite);
unsigned char touch(sprite_struct_t *p_sprite1, sprite_struct_t *p_sprite2);
unsigned char safe_move(sprite_struct_t *p_sprite, dir_t direction, unsigned char move);
signed char safe_move_signed(sprite_struct_t *p_sprite, dir_t direction, signed char move);
void apply_gravity(sprite_struct_t *p_sprite, ai_struct_t *p_ai);
void waste_life();
void teleport();
void disappear(sprite_struct_t *p_sprite, ai_struct_t *p_ai);
void disappear_boss(character_t boss);
void pause();
void play_music(char *p);
void play_effect(char *p);
void print_message(unsigned char n, char **msgs);
void chat_start();
void chat_process();
void chat_stop();

/**
Entry point
**/
int main() {
  __asm
    .rept 526
    nop
    .endm
    di
    call gsinit
  __endasm;  
  memset(interrupt_table, INTERRUPT_HALF_VECTOR, INTERRUPT_TABLE_SIZE);
  __asm
    ld a, #INTERRUPT_REG_VAL
    ld i, a
    im 2
    ei
  __endasm;  
  
  while (1) {

    init();

    if (SHOW_INTRO) {
      intro();
    } else {
      messages = messages_ru;
      chat = chat_ru;
      notes = notes_ru;
    }

    draw_dashboard_frame();
    draw_stats();

    play_music(music_walk);
 
    global_timer = 999;

    /// Main loop till the bottom of abyss
    while (HERO->y < (SCR_HEIGHT - LINE_HEIGHT)) {
      current_sprite = frame_counter % MAX_SPRITES;
      p_current_sprite = sprites + current_sprite;
      p_current_ai = aidata + current_sprite;

      key = joystick_keys_port & 0x1f ^ 0x1f;

      if (HERO->sprite == NULL || HERO->y > HERO_SCROLL_POS) need_scroll = 1;
      if (need_scroll && HERO->sprite != NULL && HERO->y < HERO_SCROLL_POS && step_counter % STEPS_PER_LINE == STG_PREPARE_LINE) need_scroll = 0;

      if (need_scroll && map_pos < (MAP_MAP_SIZE + ABYSS_DEPTH)) {
        update_map();
        respawn_timer = RESPAWN_TIME;
      } else {
        if (frame_counter % SPEED_FACTOR == 0) pause();     
      }
            
      ai(p_current_sprite, p_current_ai);

      for (sprite_struct_t *p = sprites; p < p_current_sprite; p++) {
      	if (touch(p_current_sprite, p)) restore_sprite(p);
      }
      
      if (p_current_sprite->sprite) {
        restore_sprite(p_current_sprite);
        draw_sprite(p_current_sprite);  
      }

      frame_counter++;
      print_number(global_timer, 30, 1);

      chat_process();
      
    }

    disappear(HERO, HERO_AI);
    if (success_flag) {
      game_complete();
    } else {
      game_over();
    }
  }
  return 0;
}

void init(){
  if (!SHOW_INTRO)     SHOW_INTRO     = 1;
  if (!JUMP_FORCE)     JUMP_FORCE     = 7;
  if (!FALLER_SENSE)   FALLER_SENSE   = 24;
  if (!HERO_LIVES)     HERO_LIVES     = 5;
  if (!HERO_LIVES_MAX) HERO_LIVES_MAX = 7;
  if (!HERO_BULLETS)   HERO_BULLETS   = 7;
  if (!HERO_BULLETS_MAX) HERO_BULLETS_MAX = 7;
  if (!IMMORTALITY_TIME) IMMORTALITY_TIME = 100;
  if (!BULLET_SPEED)   BULLET_SPEED   = 6;
  if (!HERO_SPEED)     HERO_SPEED     = 4;
  if (!RESPAWN_TIME)   RESPAWN_TIME   = 150;
  
  success_flag = 0;
  
  imm_timer = IMMORTALITY_TIME;
  step_counter = 0;
  map_pos = 0;
  frame_counter = 0;
  char_pointer = 0;
  chat_counter = 0;
  need_scroll = 0;
  HERO->y = 0;
  messages = messages_int;
  teleport_used = 0;
  
  for (char i = 0; i < MAX_SPRITES; i++) {
     (sprites + i)->x=0;
     (sprites + i)->y=0;
     (sprites + i)->sprite=NULL;
     (sprites + i)->rendered = 0;
     (sprites + i)->buf=(char *)&(sprite_buffers[i][0]); 
     (sprites + i)->lines=(char *)&(line_buffers[i][0]);

     (aidata + i)->type=CHAR_TYPE_NONE;
     (aidata + i)->dx=0;
     (aidata + i)->dy=0; 
     (aidata + i)->base_spr=0;
     (aidata + i)->dir=DIR_RIGHT;
     (aidata + i)->pose=0;
  }
  
  memset(screen_attr_buf, 7, 704);
  memset(screen_attr_buf + 704, 0, 64);
}

void add_stars(unsigned int count) {
  char *p_scr;
  for (int i = 0; i < count; i++) {
    char xxx = 22 * 8 + (random() & 0x07);
    p_scr = (char *)screen_line_addrs[xxx];
    p_scr +=  random() & 0x1f;
  	if (!*p_scr) *p_scr = 1 << (random() & 0x07);
  }
}

void scroll_bkg_image(unsigned char background[][256]){
  for (char l = 0; l < 8; l++) {
    for (char i = 0; i < 8 / SCROLL_STEP; i++) {
      scroll();
    }
    draw_bkg_line(23, background[l]);
  }
  for (char i = 0; i < 4 / SCROLL_STEP; i++) {
    scroll();
  }
}

void game_over() {
  HERO_LIVES = 0;
  menu(12, 2, messages + MSG_GAME_OVER);
}

void game_complete() {
  menu(16, 8, messages + MSG_WELL_DONE);
}

void intro(){
  play_music(music_intro);

  // scroll whole screen to remove splash
  for (unsigned char i = 0; i < SCR_HEIGHT / STEPS_PER_LINE; i++) {
    for (unsigned char j = 0; j < DASHBOARD_HEIGHT; j++) {
    	memcpy(screen_line_addrs[j], screen_line_addrs[j + STEPS_PER_LINE], SCR_WIDTH);
    }
    scroll();
    for (unsigned char j = 0; j < STEPS_PER_LINE; j++) {
    	memset(screen_line_addrs[SCR_HEIGHT - j - 1], 0, SCR_WIDTH);
    }
  }
  
  switch (menu(8, 2, messages)) {
    case 0:
      messages = messages_en;
      chat = chat_en;
      notes = notes_en;
      break;
    case 1:
      messages = messages_ru;
      chat = chat_ru;
      notes = notes_ru;
      break;
  }
  play_effect(effect_jump);
  menu(16, 8, messages + MSG_INTRO1);
  play_effect(effect_jump);
  menu(16, 8, messages + MSG_INTRO2);
  play_effect(effect_jump);
  menu(16, 8, messages + MSG_CONTROLS);
  play_effect(effect_jump);
  
  for (unsigned char i = 0; i < STEPS_PER_LINE * VISIBLE_MAP_ROWS; i++) {
      add_stars(STARS_DENSE);
      scroll();
  }
  
  scroll_bkg_image(background1_bin);
}

unsigned char find_char_cell(unsigned char c) {
  if (c == CHAR_HERO) return 0; // hero
  for (unsigned char i = RESERVED_SPRITES; i < MAX_SPRITES; i++) {
    if ((aidata+i)->type == CHAR_TYPE_NONE) return i;
  }
  return MAX_SPRITES;
}


void setup_char(unsigned char t, unsigned char x, unsigned char y, unsigned char pref_dir){
  sprite_struct_t *p_sprite;  
  ai_struct_t *p_ai;
  unsigned char i = find_char_cell(t);

  if (i >= MAX_SPRITES) return;

  respawn_timer = RESPAWN_TIME;

  p_sprite = sprites + i;  
  p_ai = aidata + i;
  
  p_ai->base_spr = NUM_DIRECTIONS * NUM_POSES * t;
  p_ai->char_type = t;
  p_ai->pose = 0;
  p_sprite->x = x;
  p_sprite->y = y;

  switch (t) {
    case CHAR_HERO:
      p_ai->type=CHAR_TYPE_HERO;
      print_message(MSG_NOTE_HERO_SETUP, notes);
      break;
    case CHAR_WORTOR:
      p_ai->type=CHAR_TYPE_FLOATER;
      p_ai->dir=DIR_LEFT;
      p_ai->dx = 2;
      p_ai->dy = 2;
      break;
    case CHAR_RAT:
      p_ai->type=CHAR_TYPE_ROAMER;
      p_ai->dx = 1;
      p_ai->dir=DIR_RIGHT;
      break;
    case CHAR_SPIDER:
      p_ai->type=CHAR_TYPE_FALLER;
      p_ai->dir=DIR_UP;
      break;
    case CHAR_FUNGUS:
      p_ai->type=CHAR_TYPE_RISER;
      p_ai->dir=DIR_LEFT;
      break;
    case CHAR_RESPAWNER:
      p_ai->type=CHAR_TYPE_RESPAWNER;
      p_ai->dir=DIR_LEFT;
      break;
    case CHAR_SWINX:
      p_ai->type=CHAR_TYPE_STANDER;
      p_ai->dir=pref_dir;
      chat_start();
      break;
    case CHAR_HEART:
      if (global_timer > 0) {
        p_ai->type=CHAR_TYPE_STANDER;
        p_ai->dir=pref_dir;
        print_message(MSG_NOTE_HEART_SETUP, notes);
      } else {
        print_message(MSG_NOTE_LATE, notes);
        return;
      }
      break;
  }

  p_sprite->sprite = 
      (char *)char_sprite_set[p_ai->base_spr + 
                              NUM_POSES * p_ai->dir + (p_ai->pose % NUM_POSES)];
  draw_sprite(p_sprite);

}

void fire(){
  if (HERO_BULLETS <= 0) return;
  if (BULLET_AI->type == CHAR_TYPE_BULLET) return;
  if (aidata->dir == DIR_UP || aidata->dir == DIR_DOWN) return;
  BULLET_AI->type=CHAR_TYPE_BULLET;
  BULLET_AI->dir=aidata->dir;
  BULLET_AI->base_spr = NUM_DIRECTIONS * NUM_POSES * CHAR_BULLET;
  BULLET_AI->char_type = CHAR_BULLET;
  BULLET->y = HERO->y;
  if (aidata->dir == DIR_LEFT) BULLET->x = HERO->x - 16;
  if (aidata->dir == DIR_RIGHT) BULLET->x = HERO->x + 16;
  HERO_BULLETS --;
  draw_stats();
}

void draw_map_line(){
  for (unsigned char block = 0; block < LINE_WIDTH; block++) {  
    draw_block(block, map_lines[MAX_MAP_ROW][block], (SCR_HEIGHT - LINE_HEIGHT) * SIZE_OF_INT);
  }
}

void update_map() {
    static unsigned int p;
    static char **line;
  
    map_pos = step_counter / STEPS_PER_LINE;
    print_number(map_pos * 2, 30, 2);

    for (unsigned char s = 0; s < MAX_SPRITES; s++) {
      sprite_struct_t *sprite = sprites + s;
      if (sprite->sprite) {
        line = screen_line_addrs + sprite->y - SCROLL_STEP;
        sprite->y -= SCROLL_STEP;    
	if (sprite->y < DASHBOARD_HEIGHT) sprite->y = DASHBOARD_HEIGHT;
        for (char l = 0; l < LINE_HEIGHT; l++) {
          sprite->lines[l] = (*line) + (sprite->x / 8);
          line++;
        }
      }
    }
    scroll();
    if (map_pos < MAP_MAP_SIZE) {
      switch (step_counter % STEPS_PER_LINE) {
        case STG_DRAW_LINE:  
          draw_map_line();
        break;
        case STG_PREPARE_LINE:
          // shift map
          memcpy(&(map_lines[0][0]), &(map_lines[1][0]) , LINE_WIDTH * MAX_MAP_ROW);

          // place landscape
          for (unsigned char block = 0; block < LINE_WIDTH; block++) {  
            unsigned char start = map[map_pos].b >> 4;
            unsigned char end = map[map_pos].b & 0x0f;
            if (block <= start) map_lines[MAX_MAP_ROW][block] = 1;  
            else if (block >= end) map_lines[MAX_MAP_ROW][block] = 1;  
            else map_lines[MAX_MAP_ROW][block] = 0;
          }
          // place objects
          p = map[map_pos].o;
          while (map_objects[p] != 0x00) {
            map_lines[MAX_MAP_ROW][map_objects[p] >> 4] = map_objects[p] & 0x0f;
            p++;
          } 
        break;  
        case STG_PREPARE_OBJ:
          // place characters
          while (map_pos - 1 == map_chars[char_pointer].p) {
            unsigned char e = map_chars[char_pointer].e;
            unsigned char t = e >> 4; 
            unsigned char x = (e & 0x0f) * 8 * SPRITE_WIDTH;
            unsigned char y = SCR_HEIGHT - LINE_HEIGHT - SCROLL_STEP * 2;
            if (t < CHAR_SWINX) {
              setup_char(t, x, y, DIR_LEFT);		          
            } else { // boss
              setup_char(t, x + SPRITE_WIDTH_PX, y - LINE_HEIGHT, DIR_RIGHT);		          
              setup_char(t, x, y - LINE_HEIGHT, DIR_LEFT);		          
              setup_char(t, x + SPRITE_WIDTH_PX, y, DIR_DOWN);		          
              setup_char(t, x, y, DIR_UP);		          
            }
            char_pointer++;
          }
        break;  
      }
    } else { // in the abyss
      switch (step_counter % STEPS_PER_LINE) {
        case STG_PREPARE_LINE:
          memcpy(&(map_lines[0][0]), &(map_lines[1][0]) , LINE_WIDTH * MAX_MAP_ROW);
          memset(&(map_lines[MAX_MAP_ROW][0]), 0, LINE_WIDTH);
        break;  
        case STG_DRAW_LINE:  
          draw_bkg_line(22, background2_bin[(map_pos - MAP_MAP_SIZE) * 2]);
          draw_bkg_line(23, background2_bin[(map_pos - MAP_MAP_SIZE) * 2 + 1]);
        break;  
      }
    }
    step_counter++;
}

void ai(sprite_struct_t *p_sprite, ai_struct_t *p_ai) {
  
  if (p_ai->type == CHAR_TYPE_NONE) return;

  check_collision(p_sprite);

  // movements
  switch (p_ai->type) {
    case CHAR_TYPE_HERO:
      if ((key & KEY_FIRE)) { // fire
          fire();		          
      } 
      
      if ((key & KEY_UP)) { 
        if (collision.stand_at == ENV_LADDER) { // climb ladder up
          if (safe_move(p_sprite, DIR_UP, HERO_SPEED)) {
            p_ai->dir = DIR_UP;
            p_ai->pose++;
          }
        } else if (collision.stand_at == ENV_TELEPORT || collision.stand_at == ENV_ANSWER) { // teleport
          if (chat_started) {
            if (collision.stand_at == ENV_ANSWER) {
              if (HERO_LIVES < HERO_LIVES_MAX) HERO_LIVES++;
              if (HERO_BULLETS < HERO_BULLETS_MAX) HERO_BULLETS = HERO_BULLETS_MAX;
            } else {
              HERO_LIVES--;
            }
            disappear_boss(CHAR_SWINX);
            draw_stats();
          }
          teleport();
          chat_stop();
        } else { // jump
          if (collision.touch.bottom) {
            p_ai->dy = JUMP_FORCE;
            play_effect(effect_jump);
          }
        }
      } else if ((key & KEY_DOWN)  && collision.stand_at == ENV_LADDER) { // climb ladder down
        if (safe_move(p_sprite, DIR_DOWN, HERO_SPEED)) {
          p_ai->dir = DIR_DOWN;
          p_ai->pose++;
        }
      } 
      
      if ((key & KEY_LEFT)) { // move left
        if (safe_move(p_sprite, DIR_LEFT, HERO_SPEED)) {
          p_ai->dir = DIR_LEFT;
          p_ai->pose++;
        }
      } else if ((key & KEY_RIGHT)) { // move right
        if (safe_move(p_sprite, DIR_RIGHT, HERO_SPEED)) {
          p_ai->dir = DIR_RIGHT;
          p_ai->pose++;
        }
      } 
      apply_gravity(p_sprite, p_ai);	
      break;
    case CHAR_TYPE_STANDER:
          p_ai->pose++;      
      break;
    case CHAR_TYPE_RESPAWNER:
      p_ai->pose++;      
      if (!respawn_timer) {
        setup_char(CHAR_RAT, p_sprite->x, p_sprite->y, DIR_LEFT);
      }          
      break;
    case CHAR_TYPE_RISER:
      switch (p_ai->dir) {
      case DIR_LEFT:
        if (distance(p_sprite->x, HERO->x) < FALLER_SENSE) {
          p_ai->dir = DIR_UP;            
          p_ai->pose = 0;
        }
        break;
      case DIR_UP:
        if (p_ai->pose >= NUM_POSES)  p_ai->dir = DIR_DOWN;
        break;  
      case DIR_DOWN:
        if (p_ai->pose >= NUM_POSES)  p_ai->dir = DIR_LEFT;
        break;  
      }
      p_ai->pose++;      
      break;
    case CHAR_TYPE_FLOATER:
      if (!safe_move_signed(p_sprite, DIR_RIGHT, p_ai->dx)) p_ai->dx = -p_ai->dx;
      if (!safe_move_signed(p_sprite, DIR_UP,  p_ai->dy)) p_ai->dy = -p_ai->dy;
      p_ai->pose++;
      break;
    case CHAR_TYPE_ROAMER:
      switch (p_ai->dir) {
        case DIR_RIGHT:
          if (!safe_move(p_sprite, DIR_RIGHT, 1)) {
            p_ai->dir = DIR_LEFT;
          }
          break;
        case DIR_LEFT:
          if (!safe_move(p_sprite, DIR_LEFT, 1)) {
            p_ai->dir = DIR_RIGHT;
          }
          break;
      }
      p_ai->pose++;
      apply_gravity(p_sprite, p_ai);	
      break;
    case CHAR_TYPE_FALLER:
      switch (p_ai->dir) {  //let's make FSM
        case DIR_UP:
          if (safe_move(p_sprite, DIR_UP, 1)) {
            p_ai->pose++;
          } else {
            p_ai->dir = DIR_LEFT;
          }
          break;  
        case DIR_LEFT:
            p_ai->pose = 0;          
          if (distance(p_sprite->x, HERO->x) < FALLER_SENSE) {
            p_ai->dir = DIR_DOWN;            
          }
          break;
        case DIR_DOWN:
          if (safe_move(p_sprite, DIR_DOWN, 6)) {
            p_ai->pose++;
          } else {
            p_ai->dir = DIR_UP;
          }
          break;
      }
      break;
      case CHAR_TYPE_BULLET:
        p_ai->pose++;
        switch (p_ai->dir) {
          case DIR_LEFT:
          case DIR_RIGHT:
            if (!safe_move(p_sprite, p_ai->dir, BULLET_SPEED)) {
              p_ai->dir = DIR_UP;
              p_ai->pose = 0;
              play_effect(effect_crash);
            }
          break;  
          case DIR_UP:
            if (p_ai->pose >= NUM_POSES) {
              disappear(BULLET, BULLET_AI);
            }
          break;  
        }
      break;
  }
  
  // interactions
  switch(p_ai->char_type) {
    case CHAR_HERO:
      if (collision.stand_at == ENV_SPIKESUP) waste_life();
      if (collision.stand_at == ENV_TELEPORT && !chat_started && !teleport_used) {
        print_message(MSG_NOTE_TELEPORT_SETUP, notes);
      }
      break;
    case CHAR_RAT: // wasting lives, killable with bullet
    case CHAR_SPIDER:
    case CHAR_FUNGUS:
      if (touch(p_sprite, HERO)) waste_life();
      if (touch(p_sprite, BULLET)) {
        disappear(p_sprite, p_ai);
        BULLET_AI->pose = 0;		      
        BULLET_AI->dir = DIR_UP;
      }
      break;
    case CHAR_HEART:
      if (touch(p_sprite, HERO)) waste_life();
      if (touch(p_sprite, BULLET)) {
        disappear_boss(CHAR_HEART);
        BULLET_AI->pose = 0;		      
        BULLET_AI->dir = DIR_UP;
        success_flag = 1;
      }
      break;
    case CHAR_WORTOR: // throw back thru map
      if (touch(p_sprite, HERO)) {
        print_message(MSG_NOTE_WORTOR_TOUCH, notes);
        step_counter = (step_counter > LINE_HEIGHT) ? step_counter - LINE_HEIGHT : 0; 
        for (unsigned char block = 0; block < LINE_WIDTH; block++) {  
          unsigned char tmp_block = block == 0 || block == LINE_WIDTH - 1 ? ENV_BLOCK : ENV_BKG;
          map_lines[MAX_MAP_ROW][block] = tmp_block;
          draw_block(block, tmp_block, (SCR_HEIGHT - LINE_HEIGHT) * SIZE_OF_INT);
        }
      }
      break;
    case CHAR_SWINX:
      if (touch(p_sprite, HERO) && chat_started) {
        HERO->x = SPRITE_WIDTH_PX;
      }
      break;
  } 

  // Dissapearing when outside screen
  if (p_current_sprite->y <= DASHBOARD_HEIGHT || 
      p_current_sprite->y >= SCR_HEIGHT - LINE_HEIGHT) {
    if (p_current_sprite == HERO) {
      p_current_sprite->y == DASHBOARD_HEIGHT;
    } else {
      disappear(p_current_sprite, p_current_ai);
    }
    // if hero escapes from swinx suddenly
    if (p_ai->char_type == CHAR_SWINX) chat_stop();
  }

  // Apply new pose
  if (p_ai->type != CHAR_TYPE_NONE) {
    p_sprite->sprite = 
      (char *)char_sprite_set[p_ai->base_spr + 
                              NUM_POSES * p_ai->dir + (p_ai->pose % NUM_POSES)];
  }
}

void teleport() {
  teleport_used = 1;
  for (unsigned char i = 0; i < VISIBLE_MAP_ROWS - 1; i++ ) {
    for (unsigned char j = 0; j < LINE_WIDTH; j++) {
      if (map_lines[i][j] == ENV_TELEPORT && (collision.map_coords.left != j || collision.map_coords.bottom != i)) {
        HERO->x = j * SPRITE_WIDTH_PX;
        HERO->y = i * LINE_HEIGHT + DASHBOARD_HEIGHT;
      }
    }
  }
}

void waste_life() {
  if (HERO_LIVES > 0 && imm_timer == 0 && 
      IMMORTALITY_TIME != 0) {
    HERO_LIVES--;
    if (HERO_LIVES == 0)  {
      step_counter = (MAP_MAP_SIZE * STEPS_PER_LINE); // step into the abyss
      play_music(music_death);
    }
    draw_stats();
    imm_timer = IMMORTALITY_TIME;
  }
}      

void disappear(sprite_struct_t *p_sprite, ai_struct_t *p_ai) {
    if (p_sprite->rendered) {
      for (sprite_struct_t *p = sprites; p < p_sprite; p++) {
      	if (touch(p_sprite, p)) restore_sprite(p);
      }
      restore_sprite(p_sprite);
    }
    p_sprite->sprite = NULL;
    p_ai->type = CHAR_TYPE_NONE;
}

void disappear_boss(character_t boss){
  for (unsigned char i = MAX_SPRITES - 1; i >= RESERVED_SPRITES; i--) {
    if ((aidata + i)->char_type == boss) disappear(sprites + i, aidata + i);
  }
}
      
unsigned char touch(sprite_struct_t *p_sprite1, sprite_struct_t *p_sprite2) {
  if (p_sprite1->sprite == NULL || p_sprite2->sprite == NULL) return 0;
  return distance(p_sprite1->x, p_sprite2->x) < SPRITE_WIDTH_PX && 
      distance(p_sprite1->y, p_sprite2->y) < LINE_HEIGHT;
}

void check_collision(sprite_struct_t *p_sprite) {

  static unsigned char solid_bottom;
  collision.bounding_box.top = p_sprite->y + BOUNDING_BOX_SAFE_SPACE;
  collision.bounding_box.bottom = p_sprite->y + LINE_HEIGHT - BOUNDING_BOX_SAFE_SPACE;
  collision.bounding_box.left = p_sprite->x + BOUNDING_BOX_SAFE_SPACE;
  collision.bounding_box.right = p_sprite->x + SPRITE_WIDTH_PX - BOUNDING_BOX_SAFE_SPACE;

  collision.map_coords.top = (collision.bounding_box.top - DASHBOARD_HEIGHT) / LINE_HEIGHT;
  collision.map_coords.bottom = (collision.bounding_box.bottom - DASHBOARD_HEIGHT) / LINE_HEIGHT;
  collision.map_coords.left = (collision.bounding_box.left) / SPRITE_WIDTH_PX;
  collision.map_coords.right = (collision.bounding_box.right) / SPRITE_WIDTH_PX;

  solid_bottom = (p_sprite->y + LINE_HEIGHT - DASHBOARD_HEIGHT) / LINE_HEIGHT;

  collision.touch.top = 
    p_sprite->y <= DASHBOARD_HEIGHT || 
    map_lines[collision.map_coords.top][collision.map_coords.left] == 1 ||
    map_lines[collision.map_coords.top][collision.map_coords.right] == 1;
  collision.touch.bottom = 
    map_lines[solid_bottom][collision.map_coords.left] == 1 ||
    map_lines[solid_bottom][collision.map_coords.right] == 1;
  collision.touch.left = 
    map_lines[collision.map_coords.top][collision.map_coords.left] == 1 ||
    map_lines[collision.map_coords.bottom][collision.map_coords.left] == 1;
  collision.touch.right = 
    map_lines[collision.map_coords.top][collision.map_coords.right] == 1 ||
    map_lines[collision.map_coords.bottom][collision.map_coords.right] == 1;
    
  if (collision.map_coords.left == collision.map_coords.right) {
  	collision.stand_at = map_lines[collision.map_coords.bottom][collision.map_coords.left];
  } else {
  	collision.stand_at = 255;
  }
}

signed char safe_move_signed(sprite_struct_t *p_sprite, dir_t direction, signed char move) {

  if (move == 0) return 0;

  switch (direction) {
    case DIR_UP:
      if (move >= 0) {
      	return safe_move(p_sprite, DIR_UP, move);
      }  else {
      	return -safe_move(p_sprite, DIR_DOWN, -move);
      }
    case DIR_DOWN:
      if (move >= 0) {
      	return safe_move(p_sprite, DIR_DOWN, move);
      }  else {
      	return -safe_move(p_sprite, DIR_UP, -move);
      }
    case DIR_LEFT:
      if (move >= 0) {
      	return safe_move(p_sprite, DIR_LEFT, move);
      }  else {
      	return -safe_move(p_sprite, DIR_RIGHT, -move);
      }
    case DIR_RIGHT:
      if (move >= 0) {
      	return safe_move(p_sprite, DIR_RIGHT, move);
      }  else {
      	return -safe_move(p_sprite, DIR_LEFT, -move);
      }
  }	  
}

unsigned char safe_move(sprite_struct_t *p_sprite, dir_t direction, unsigned char move) {
  static unsigned char d;
  static unsigned char ret;

  if (move == 0) return 0;
  
  ret = 0;
  
  while (move > 0) {
    switch (direction) {
      case DIR_UP:
        if (collision.touch.top) return ret;
        d = collision.bounding_box.top % LINE_HEIGHT + 1;
        if (d > move) {
	  p_sprite->y -= move;
          ret += move;
          return ret;
        } else {
          p_sprite->y -= d;
          ret += d;
          check_collision(p_sprite);
        }
        break;
      case DIR_DOWN:
        if (collision.touch.bottom) return ret;
        d = LINE_HEIGHT - (p_sprite->y + LINE_HEIGHT) % LINE_HEIGHT;
        if (d > move) {
	  p_sprite->y += move;
          ret += move;
          return ret;
        } else {
          p_sprite->y += d;
          ret == d;
          check_collision(p_sprite);
        }
        break;
      case DIR_LEFT:
        if (collision.touch.left) return ret;
        d = collision.bounding_box.left % SPRITE_WIDTH_PX + 1;
        if (d > move) {
          p_sprite->x -= move;
          ret += move;
          return ret;
        } else {
          p_sprite->x -= d;
          ret += d;
          check_collision(p_sprite);
        }
        break;
      case DIR_RIGHT:
        if (collision.touch.right) return ret;
        d = SPRITE_WIDTH_PX - collision.bounding_box.right % SPRITE_WIDTH_PX;
        if (d > move) {
          p_sprite->x += move;
          ret += move;
          return ret;
        } else {
          p_sprite->x += d;
          ret += d;
          check_collision(p_sprite);
        }
        break;
    }	
    move -= d;
  }
  return ret;
}

void apply_gravity(sprite_struct_t *p_sprite, ai_struct_t *p_ai) {
  if (collision.stand_at != 9) { // there is no garvity on stairs
    if (p_ai->dy > -MAX_FALL_SPEED) p_ai->dy--;  
  } else {
    p_ai->dy = 0;
  }
  if (!safe_move_signed(p_sprite, DIR_UP, p_ai->dy)) p_ai->dy = 0;
}

void draw_dashboard_frame() {
  static unsigned char *p_dash;
  p_dash = (unsigned char *)dashboard_bin;
  for (char i = 0; i < 4; i++) {
    p_dash = draw_bkg_line(i, p_dash);
  }
}

void draw_stats() {
  for (char i = 0; i < HERO_BULLETS_MAX; i++) {
    print((i < HERO_BULLETS)?C_BULLET:" ", i + BULLETS_POS_X, BULLETS_POS_Y);
  }
  for (char i = 0; i < HERO_LIVES_MAX; i++) {
    print((i < HERO_LIVES)?C_HEART:C_HEART_BROKEN, i + LIVES_POS_X, LIVES_POS_Y);
  }
}

void draw_frame(unsigned char width, unsigned char height, char **items) {

  unsigned char top = (VISIBLE_MAP_ROWS - height) / 2;
  unsigned char bottom = top + height - 1;
  unsigned char left = (LINE_WIDTH - width) / 2;
  unsigned char right = left + width - 1;
  unsigned char b;
  
  for (unsigned char row = 0; row < VISIBLE_MAP_ROWS; row++) {
    for (unsigned char col = 0; col < LINE_WIDTH; col++) {  
      if (row == top && col == left) b = 8;
      else if (row == top && col == right) b = 6;
      else if (row == bottom && col == left) b = 4;
      else if (row == bottom && col == right) b = 7;
      else if (row == top && col < right && col > left) b = 5;
      else if (row == bottom && col < right && col > left) b = 5;
      else if (col == left && row < bottom && row > top) b = 2;
      else if (col == right && row < bottom && row > top) b = 2;
      else b = 0x0f;
      draw_block(col, b, (SCR_HEIGHT - LINE_HEIGHT) * SIZE_OF_INT);
    }
    add_stars(STARS_DENSE);
    for (unsigned char i = 0; i < STEPS_PER_LINE; i++) {
      if (items != NULL && row > top && row < bottom && (i % (8 / SCROLL_STEP)) == 0) {
        print(items[0], (left + 1) * 2 + 1, 22);
        items++;
      }
      scroll();
    }
  }
}

unsigned char menu(unsigned char width, unsigned char height, char **items) {
  draw_frame(width, height / 2 + 2, items);
  while(1) {
    key = joystick_keys_port & 0x1f ^ 0x1f;
    if (height > 0 && (key & KEY_LEFT))  return 0;  
    if (height > 1 && (key & KEY_RIGHT)) return 1;  
    if (height > 2 && (key & KEY_UP))    return 2;  
    if (height > 3 && (key & KEY_DOWN))  return 3;  
    if (height > 4 && (key & KEY_FIRE))  return 4;  
  }
}

void chat_start() {
  if (!chat_started) {
    play_music(music_quiz);
    chat_started = 1;
    chat_timer = 0xff;
  }
}

void chat_process() {
  if (chat_started && chat_update_flag) {
    chat_update_flag = 0;
    if (chat_timer < CHAT_PHRASES_NUM - 2) {
      print_message(chat_timer + (chat_counter * CHAT_PHRASES_NUM), chat);
    }
    if (chat_timer > CHAT_REPEAT_TIME) {
      chat_timer = 0xff;
    }
  }
}

void chat_stop(){
  print_message(2, messages_int);
  if (chat_started) {
    play_music(music_walk);
    chat_counter++;
    chat_started = 0;
  }
}

void scroll() {
  __asm
  di  
  ld (#_sp_holder), sp                                        ; save SP
  ld sp, #_screen_line_addrs + DASHBOARD_HEIGHT * SIZE_OF_INT ; set SP to line addrs table

  ld a, #SCR_HEIGHT - DASHBOARD_HEIGHT - SCROLL_STEP          
  scroll_loop:                                                ; loop by screen lines
  pop de                                                      ; get dst addr from table
  ld hl, #(SCROLL_STEP - 1) * SIZE_OF_INT                     ; calc src line
  ld iy, #0  
  add hl, sp                                                  ; save table index for next iteration
  add iy, sp  
  ld sp, hl                                                   ; set table index to src line 
  pop hl                                                      ; get src addr from table 
  ld bc, #SCR_WIDTH                                           
  ld sp, (#_sp_holder)
  ei
  ldir                                                        ; move one line
  di
  ld sp, iy                                                   ; restore table index 
  dec a
  jr nz, scroll_loop                                          ; end of loop
  ld sp, (#_sp_holder)                                        ; restore SP
  ei  
  __endasm;
}

void draw_block(unsigned char pos, unsigned char type, unsigned int y) {
  pos; type; y;
  __asm
  di  
  ld ix, #4
  add ix, sp
  sla  0(ix)  
  
  ld (#_sp_holder), sp
  ld hl, #_screen_line_addrs
  ld c, 2(ix)
  ld b, 3(ix)
  add hl, bc  
  ld sp, hl
    
  ld b, #0
  ld c, 1(ix)  
  sla c  
  ld hl, #_sprite_set
  add hl, bc  
  ld e, (hl)
  inc hl
  ld d, (hl)
  ex de, hl  
    
  ld bc, #0x10ff
  landscape_blk_loop:  
  pop de
    
  ld a, 0(ix)
  add a, e
  ld e, a  
    
  ldi
  ldi
  djnz landscape_blk_loop
  ld sp, (#_sp_holder)  
  ei  
  __endasm;  
}

void real_draw_sprite(sprite_struct_t *p_sprite) {
  p_sprite;
  __asm
  di
;  ld a, #1
;  out (254), a  
    
  ld ix, #4
  add ix, sp                         ; set ix to arguments  
    
  ld l, 0(ix)
  ld h, 1(ix)
      
  push hl
  pop ix                             ; ix = sprite descriptor addr

  ld a, 2(ix)  
  srl a
  srl a
  srl a  
        
  ld de, #_screen_line_addrs         ; set de to scr addr table

  ld l, 3(ix)                         
  ld h, #0
  add hl, hl
  add hl, de                         ; hl = table cell address

  push hl
  pop iy
    
  ld (#_sp_holder), sp
    
    
  ld l, 6(ix)
  ld h, 7(ix) 
    
  ld sp, hl
  pop hl
    
  ld b, #LINE_HEIGHT
    
calc_sprite_lines_loop:   
  
  ld l, 0(iy)
  ld h, 1(iy)                         

  ld e, a
  ld d, #0
  add hl, de                         ; screen addr in hl

  inc iy
  inc iy  
  
  push hl  
  pop hl
  pop hl
    
;  ld (hl), #0xff
    
  djnz calc_sprite_lines_loop
     
  ld l, 6(ix)
  ld h, 7(ix) 
  ld sp, hl

  ld iy, #0
  ld c, 0(ix)
  ld b, 1(ix)
  add iy, bc
  ld c, #LINE_HEIGHT
 
  exx
  
  ld e, 4(ix)
  ld d, 5(ix)
  
  exx
  
draw_sprite_loop:
     
  exx
  
  pop hl
  push hl  

  ld a, (hl)
  ld (de), a
  inc hl
  inc de  
  ld a, (hl)
  ld (de), a
  inc hl
  inc de  
  ld a, (hl)
  ld (de), a
  inc hl
  inc de  
  
  exx  
    
  pop hl
  push hl  
    
  ld d, 0(iy)
  ld e, 1(iy)
  ld a, 2(ix)
  and a, #0x07
  jr z, skip_shift_sprite_mask  
  ld b, a
  xor a
  dec a
shift_sprite_mask_loop:
  scf
  rr d
  rr e
  rra  
  djnz shift_sprite_mask_loop
  jr skip_blank_mask  
skip_shift_sprite_mask:    
  xor a
  dec a
skip_blank_mask:
  ld b, a    
  ld a, (hl)
  and d  
  ld (hl), a
  inc hl
  ld a, (hl)
  and e  
  ld (hl), a  
  inc hl
  ld a, (hl)
  and b  
  ld (hl), a  

  pop hl
 
  ld d, 32(iy)
  ld e, 33(iy)
  ld a, 2(ix)
  and a, #0x07
  jr z, skip_shift_sprite  
  ld b, a
  xor a
shift_sprite_loop:
  srl d
  rr e
  rra  
  djnz shift_sprite_loop
skip_shift_sprite:    
  ld b, a
    
  ld a, (hl)
  or d  
  ld (hl), a
  inc hl
  ld a, (hl)
  or e  
  ld (hl), a  
  inc hl
  ld a, (hl)
  or b  
  ld (hl), a  
        
  inc iy
  inc iy
  
  dec c  
  jr nz, draw_sprite_loop  
    
  ld sp, (#_sp_holder)  

;  ld a, #0
;  out (254), a  
  ei
  __endasm;  
}

void draw_sprite(sprite_struct_t *p_sprite) {
  real_draw_sprite(p_sprite);
  p_sprite->rendered = 1;
}

void real_restore_sprite(sprite_struct_t *p_sprite) {
  p_sprite;
  __asm
  di  
;  ld a, #4
;  out (254), a  
  
    
  ld ix, #4
  add ix, sp                         ; set ix to arguments  
    
  ld l, 0(ix)
  ld h, 1(ix)
      
  push hl
  pop ix                             ; ix = sprite descriptor addr

  ld (#_sp_holder), sp
    
  ld l, 6(ix)
  ld h, 7(ix) 
  ld sp, hl

  ld e, 4(ix)
  ld d, 5(ix)

  ld b, #LINE_HEIGHT
 
restore_sprite_loop:
  
  pop hl
  
  ld a,(de)
  ld (hl), a
  inc hl
  inc de  
  ld a,(de)
  ld (hl), a
  inc hl
  inc de  
  ld a,(de)
  ld (hl), a
  inc hl
  inc de  

  djnz restore_sprite_loop
    
  ld sp, (#_sp_holder)  

;  ld a, #0
;  out (254), a  
  ei
  __endasm;  
}

void restore_sprite(sprite_struct_t *p_sprite) {
  if (p_sprite->rendered) real_restore_sprite(p_sprite);
  p_sprite->rendered = 0;
}

void print(char *s, unsigned char x, unsigned char y) {
  char *p_scr = (char *)screen_line_addrs[y * 8];
  p_scr += x;
  for (; *s!=0; s++) {
    char *p_font = (*s >= 0x80) ? (((char *)font1) - ((0xc0 - EXTRA_CHARS) * 8)) : (font0);
    char *p_char = p_font + (*s * 8);
    for (unsigned char i = 0; i < 8; i++) {
      *(p_scr + i * 256) = *p_char;
      p_char++;
    }
    p_scr++;
  }
}

void print_number(unsigned int val, unsigned char x, unsigned char y) {
  static char numbuf[2] = {0, 0};
  for (char i = 0; i < 3; i++) {
    numbuf[0] = '0' + (val % 10);
    val /= 10;
    print(numbuf, x--, y);
  }
}

void print_message(unsigned char n, char **msgs){
  print(msgs[n], 9, 1);
  print(msgs[n + 1], 9, 2);
}

unsigned char *draw_bkg_line(unsigned char pos, unsigned char *line){
  static unsigned char *p_scr;
  p_scr = (char *)screen_line_addrs[pos * 8];
  for (char i = 0; i < 8; i++) {
    memcpy(p_scr, line, 32);
    p_scr += 256;
    line += 32;
  }
  return line;
}

unsigned int random() {
  __asm
  ld hl, (_seed)
  ld a,r
  ld d,a
  ld e,(hl)
  add hl,de
  add a,l
  xor h
  ld (_seed),hl
  __endasm;
}

unsigned char distance(unsigned char a, unsigned char b)
{
  return (a > b) ? a - b : b - a;
}

void pause() {
  __asm
    halt
  __endasm;  
}

void nmi_isr() {
  __asm
    push af
    push bc
    push de
    push hl
    push ix
    push iy
  __endasm;

  if (p_music != NULL) {
    if (music_timer == 0) {
      while (*p_music < 16) {
        unsigned char p = *p_music++;
        unsigned char d = *p_music++;
        ay_addr_port = p;
        ay_data_port = d;
        if (!p_music_store) {
          if (p == 0x06) noise_store = d; // save mixer settings
          if (p == 0x07) mixer_store = d; // save noise amplitude
        }
      }
      if (*p_music == 0xff) {
        if (p_music_store) { // restore music after effect
          p_music = p_music_store; 
          p_music_store = NULL;
          ay_addr_port = 0x06; // restore noise frequency
          ay_data_port = noise_store;      
          ay_addr_port = 0x07; // restore mixer settings
          ay_data_port = mixer_store;      
        } else { // start since beginning
          p_music = p_music_start;
        }
      } else {
        music_timer += *p_music & 0x7f;
        p_music++;
      }
    } else {
      music_timer--;
    }
  }
  
  if (imm_timer != 0) imm_timer--;
  if (respawn_timer != 0) respawn_timer--;
  if (second_timer != 0) {
    second_timer--;
  } else {
    second_timer = 50;
    if (global_timer != 0) global_timer--;
    if (chat_started) {
      chat_timer++;
      chat_update_flag = 1;
    }
  }
  
  __asm
    pop iy
    pop ix
    pop hl
    pop de
    pop bc
    pop af
    ei
    reti
  __endasm;
}

void play_music(char *p) {
  p_music_start = p;
  p_music = p;
  music_timer = 0;
}

void play_effect(char *p) {
  p_music_store = p_music;
  p_music = p;
  music_timer = 0;
}
