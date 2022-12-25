# zmakebas syntax
# see https://github.com/z00m128/zmakebas/blob/master/demo.bas

border 0
paper 0
ink 7
clear 24290
poke 23739,111

load "" screen$
load "" code 24291

# Game balance constants
let base=65025
poke base+0,1:rem SHOW_INTRO
#poke base+1,7:rem JUMP_FORCE
#poke base+2,24:rem FALLER_SENSE
#poke base+3,5:rem HERO_LIVES
#poke base+4,7:rem HERO_LIVES_MAX
#poke base+5,100:rem IMMORTALITY_TIME
#poke base+6,6:rem BULLET_SPEED
#poke base+7,7:rem HERO_BULLETS
#poke base+8,7:rem HERO_BULLETS_MAX
#poke base+9,4:rem HERO_SPEED
#poke base+10,150:rem RESPAWN_TIME

randomize usr 24291
