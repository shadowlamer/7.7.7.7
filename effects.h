#ifndef __EFFECTS_H
#define __EFFECTS_H 1
static const unsigned char eff_crash[] = {
0x07,	0x37,	// Mixer:  toneA off, toneB off, toneC off, noiseA on, noiseB off, noiseC off
0x08,	0x0e,	// Channel A: tone amplitude
0x80,
0x08,	0x0d,	// Channel A: tone amplitude
0x80,
0x08,	0x0c,	// Channel A: tone amplitude
0x80,
0x08,	0x0b,	// Channel A: tone amplitude
0x80,
0x08,	0x0a,	// Channel A: tone amplitude
0x80,
0x08,	0x09,	// Channel A: tone amplitude
0x80,
0x08,	0x08,	// Channel A: tone amplitude
0x80,
0x08,	0x07,	// Channel A: tone amplitude
0x80,
0x08,	0x06,	// Channel A: tone amplitude
0x80,
0x08,	0x05,	// Channel A: tone amplitude
0x80,
0x08,	0x04,	// Channel A: tone amplitude
0x80,
0x08,	0x03,	// Channel A: tone amplitude
0x80,
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0xff,		// Stop
};

static const unsigned char eff_jump[] = {
0x07,	0x3e,	// Mixer:  toneA on, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x01,	0x00,	// Channel A: tone freq. high bits
0x00,	0x71,	// Channel A: tone freq  low bits
0x08,	0x0e,	// Channel A: tone amplitude
0x80,
0x00,	0x7f,	// Channel A: tone freq  low bits
0x08,	0x0f,	// Channel A: tone amplitude
0x80,
0x00,	0x87,	// Channel A: tone freq  low bits
0x08,	0x0e,	// Channel A: tone amplitude
0x80,
0x00,	0x97,	// Channel A: tone freq  low bits
0x08,	0x0d,	// Channel A: tone amplitude
0x80,
0x00,	0xb4,	// Channel A: tone freq  low bits
0x08,	0x0c,	// Channel A: tone amplitude
0x80,
0x00,	0xd6,	// Channel A: tone freq  low bits
0x08,	0x0b,	// Channel A: tone amplitude
0x80,
0x00,	0xf0,	// Channel A: tone freq  low bits
0x08,	0x0a,	// Channel A: tone amplitude
0x80,
0x01,	0x01,	// Channel A: tone freq. high bits
0x00,	0x1d,	// Channel A: tone freq  low bits
0x80,
0x08,	0x09,	// Channel A: tone amplitude
0x00,	0x53,	// Channel A: tone freq  low bits
0x80,
0x08,	0x08,	// Channel A: tone amplitude
0x00,	0x68,	// Channel A: tone freq  low bits
0x80,
0x08,	0x07,	// Channel A: tone amplitude
0x80,
0x08,	0x06,	// Channel A: tone amplitude
0x80,
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0xff,		// Stop
};

#endif // __EFFECTS_H 1
