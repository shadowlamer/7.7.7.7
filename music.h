#ifndef __MUSIC_H
#define __MUSIC_H 1
static const unsigned char music_death[] = {
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x0a,	0x00,	// Channel C: tone amplitude (muted)
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0xbb,	// Channel C: tone freq. low bits
0x05,	0x00,	// Channel C: tone freq. high bits
0x06,	0x09,	// Noise frequency
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xf2,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x73,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x81,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0xf2,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x73,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0xf2,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x73,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x81,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x28,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x60,	// Channel B: tone freq. low bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x75,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xa3,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x99,	// Channel B: tone freq. low bits
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0xea,	// Channel B: tone freq. low bits
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x46,	// Channel B: tone freq. low bits
0x03,	0x03,	// Channel B: tone freq. high bits
0x80,		// Pause 50ms
0x02,	0x77,	// Channel B: tone freq. low bits
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xe4,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x1f,	// Channel B: tone freq. low bits
0x03,	0x04,	// Channel B: tone freq. high bits
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x5e,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x04,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x03,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x02,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x01,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x86,		// Pause 350ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0xf2,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x73,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0xf2,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x73,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x81,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x28,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x60,	// Channel B: tone freq. low bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x75,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xa3,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x99,	// Channel B: tone freq. low bits
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0xea,	// Channel B: tone freq. low bits
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x46,	// Channel B: tone freq. low bits
0x03,	0x03,	// Channel B: tone freq. high bits
0x80,		// Pause 50ms
0x02,	0x77,	// Channel B: tone freq. low bits
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xe4,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x1f,	// Channel B: tone freq. low bits
0x03,	0x04,	// Channel B: tone freq. high bits
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x5e,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x04,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x03,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x02,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x01,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x86,		// Pause 350ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0xf2,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x73,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x09,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0xf2,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x73,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x81,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x28,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x80,		// Pause 50ms
0x02,	0x60,	// Channel B: tone freq. low bits
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x75,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xa3,	// Channel B: tone freq. low bits
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x80,		// Pause 50ms
0x02,	0x2f,	// Channel B: tone freq. low bits
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x99,	// Channel B: tone freq. low bits
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0xea,	// Channel B: tone freq. low bits
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x46,	// Channel B: tone freq. low bits
0x03,	0x03,	// Channel B: tone freq. high bits
0x80,		// Pause 50ms
0x02,	0x77,	// Channel B: tone freq. low bits
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xe4,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x02,	0x1f,	// Channel B: tone freq. low bits
0x03,	0x04,	// Channel B: tone freq. high bits
0x09,	0x06,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x5e,	// Channel B: tone freq. low bits
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x04,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x03,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x02,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x01,	// Channel B: tone amplitude
0x81,		// Pause 100ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0xb6,		// Pause 350ms
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x0a,	0x00,	// Channel C: tone amplitude (muted)
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0xbb,	// Channel C: tone freq. low bits
0x05,	0x00,	// Channel C: tone freq. high bits
0x06,	0x09,	// Noise frequency
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x07,	// Channel C: tone amplitude
0xff,		// Stop
};

static const unsigned char music_intro[] = {
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x0a,	0x00,	// Channel C: tone amplitude (muted)
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0x2f,	// Channel C: tone freq. low bits
0x05,	0x02,	// Channel C: tone freq. high bits
0x06,	0x00,	// Noise frequency
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0xf9,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x73,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x8b,		// Pause 600ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0x46,	// Channel C: tone freq. low bits
0x05,	0x03,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x05,	0x02,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0x18,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x8b,		// Pause 600ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x04,	0x2f,	// Channel C: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x04,	0x73,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0x3a,	// Channel B: tone freq. low bits
0x04,	0x46,	// Channel C: tone freq. low bits
0x05,	0x03,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x8b,		// Pause 600ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x05,	0x02,	// Channel C: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x8f,		// Pause 800ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x04,	0x73,	// Channel C: tone freq. low bits
0x8b,		// Pause 600ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0x2f,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0x50,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x04,	0x46,	// Channel C: tone freq. low bits
0x05,	0x03,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0xf9,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x05,	0x02,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x8b,		// Pause 600ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0x2f,	// Channel C: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x04,	0x73,	// Channel C: tone freq. low bits
0x8b,		// Pause 600ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0x18,	// Channel B: tone freq. low bits
0x04,	0x46,	// Channel C: tone freq. low bits
0x05,	0x03,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x8b,		// Pause 600ms
0x02,	0x60,	// Channel B: tone freq. low bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x05,	0x02,	// Channel C: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x8f,		// Pause 800ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x04,	0x2f,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0xbc,	// Channel B: tone freq. low bits
0x04,	0x73,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x03,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x01,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x83,		// Pause 200ms
0x02,	0x3a,	// Channel B: tone freq. low bits
0x04,	0xea,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x8b,		// Pause 600ms
0x04,	0x46,	// Channel C: tone freq. low bits
0x05,	0x03,	// Channel C: tone freq. high bits
0x8b,		// Pause 600ms
0x04,	0xea,	// Channel C: tone freq. low bits
0x05,	0x02,	// Channel C: tone freq. high bits
0xaf,		// Pause 800ms
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x0a,	0x00,	// Channel C: tone amplitude (muted)
0x02,	0xbc,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0x2f,	// Channel C: tone freq. low bits
0x05,	0x02,	// Channel C: tone freq. high bits
0x06,	0x00,	// Noise frequency
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0xff,		// Stop
};

static const unsigned char music_quiz[] = {
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x0a,	0x00,	// Channel C: tone amplitude (muted)
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x60,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x4c,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x60,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x4c,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x06,	0x00,	// Noise frequency
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x60,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x4c,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x60,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x4c,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x09,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x8b,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x28,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x81,		// Pause 100ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x06,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x0a,	0x00,	// Channel C: tone amplitude (muted)
0x02,	0xb0,	// Channel B: tone freq. low bits
0x03,	0x00,	// Channel B: tone freq. high bits
0x04,	0x60,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0xff,		// Stop
};

static const unsigned char music_walk[] = {
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x0a,	0x00,	// Channel C: tone amplitude (muted)
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x04,	0x08,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x06,	0x00,	// Noise frequency
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xeb,	// Channel C: tone freq. low bits
0x05,	0x00,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x04,	0xde,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xc6,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xbc,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x04,	0xc6,	// Channel C: tone freq. low bits
0x05,	0x00,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xbc,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xa1,	// Channel B: tone freq. low bits
0x03,	0x04,	// Channel B: tone freq. high bits
0x04,	0xc6,	// Channel C: tone freq. low bits
0x05,	0x00,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xbc,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xa1,	// Channel B: tone freq. low bits
0x03,	0x04,	// Channel B: tone freq. high bits
0x04,	0xc6,	// Channel C: tone freq. low bits
0x05,	0x00,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xbc,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xa1,	// Channel B: tone freq. low bits
0x03,	0x04,	// Channel B: tone freq. high bits
0x04,	0xc6,	// Channel C: tone freq. low bits
0x05,	0x00,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xde,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xa1,	// Channel B: tone freq. low bits
0x03,	0x04,	// Channel B: tone freq. high bits
0x04,	0xeb,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0x08,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xbc,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x04,	0x08,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xbc,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x04,	0x08,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xbc,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x04,	0x08,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x03,	0x02,	// Channel B: tone freq. high bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xc0,	// Channel B: tone freq. low bits
0x04,	0xbc,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x0a,	0x0b,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x0a,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x09,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x02,	0x10,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x05,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0e,	// Channel B: tone amplitude
0x0a,	0x06,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x0a,	0x07,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x0a,	0x08,	// Channel C: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0c,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x03,	0x01,	// Channel B: tone freq. high bits
0x04,	0x08,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x08,	// Channel B: tone freq. low bits
0x04,	0xeb,	// Channel C: tone freq. low bits
0x05,	0x00,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x04,	0xde,	// Channel C: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x08,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x04,	0xc6,	// Channel C: tone freq. low bits
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x08,	// Channel B: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x04,	0xde,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x08,	// Channel B: tone freq. low bits
0x04,	0xeb,	// Channel C: tone freq. low bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0x4c,	// Channel B: tone freq. low bits
0x04,	0x08,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0a,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x08,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x02,	0xd6,	// Channel B: tone freq. low bits
0x07,	0x2a,	// Mixer:  toneA on, toneB off, toneC on, noiseA off, noiseB on, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x80,		// Pause 50ms
0x09,	0x0d,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x0b,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x09,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x07,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x09,	0x05,	// Channel B: tone amplitude
0x80,		// Pause 50ms
0x07,	0x3f,	// Mixer:  toneA off, toneB off, toneC off, noiseA off, noiseB off, noiseC off
0x08,	0x00,	// Channel A: tone amplitude (muted)
0x09,	0x00,	// Channel B: tone amplitude (muted)
0x0a,	0x00,	// Channel C: tone amplitude (muted)
0x02,	0x32,	// Channel B: tone freq. low bits
0x03,	0x05,	// Channel B: tone freq. high bits
0x04,	0x08,	// Channel C: tone freq. low bits
0x05,	0x01,	// Channel C: tone freq. high bits
0x07,	0x38,	// Mixer:  toneA on, toneB on, toneC on, noiseA off, noiseB off, noiseC off
0x09,	0x0f,	// Channel B: tone amplitude (controlled by envelope)
0x0a,	0x0f,	// Channel C: tone amplitude (controlled by envelope)
0xff,		// Stop
};

#endif // __MUSIC_H 1

