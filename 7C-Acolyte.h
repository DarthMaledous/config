#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 1
#define VOLUME 1800
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#define SA22C_SWING_ON
#define SA22C_TWIST_OFF
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
	{"Sith_Killer", "tracks/",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<195,0,0>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(),

StylePtr<Layers<Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Red,Black,100,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),
StylePtr<Layers<Sequence<Rgb<120,0,255>,Black,200,37,0b101000001011,0b111000111010,0b100100011111000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Rgb<120,0,255>,Black,200,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(), "Sith Killer"},
	
	
	{"troy", "tracks/venus.wav",
StylePtr<Layers<Red,AudioFlickerL<Rgb<220,0,0>>,ResponsiveLockupL<Gradient<Black,Pulsing<NavajoWhite,LightYellow,800>,Black>,TrInstant,TrInstant,Int<26000>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,White,Red>,Stripes<1500,-2500,White,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Gradient<Pulsing<Black,Tomato,900>,BrownNoiseFlicker<Red,White,50>,Pulsing<Black,Red,1200>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), 

StylePtr<Layers<Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Red,Black,100,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),
StylePtr<Layers<Sequence<Rgb<120,0,255>,Black,200,37,0b101000001011,0b111000111010,0b100100011111000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Rgb<120,0,255>,Black,200,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(), "troy"},
	
	{"Nextor", "tracks/",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Rgb<225,150,0>>,RotateColorsX<Variation,Rgb<200,120,0>>>,TransitionEffectL<TrConcat<TrBoing<1200,1>,PulsingL<GhostWhite,Int<1200>>,TrInstant>,EFFECT_IGNITION>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,StyleFire<Yellow,Red>,Stripes<1500,-2500,White,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Gradient<BrownNoiseFlicker<Red,White,50>,BrownNoiseFlickerL<DarkOrange,Int<50>>,BrownNoiseFlicker<White,Red,50>>,TrWipeInSparkTipX<White,Int<300>>,TrConcat<TrInstant,HumpFlickerL<Snow,50>,TrFade<900>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), 

StylePtr<Layers<Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Red,Black,100,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),
StylePtr<Layers<Sequence<Rgb<120,0,255>,Black,200,37,0b101000001011,0b111000111010,0b100100011111000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Rgb<120,0,255>,Black,200,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),"Nextor"},

	
	{"DarkJedi", "tracks/",
StylePtr<Layers<RandomFlicker<Rgb<100,10,255>,Rgb<90,10,200>>,ResponsiveLockupL<NavajoWhite,TrInstant,TrInstant,Int<26000>>,LockupTrL<BrownNoiseFlicker<Snow,Magenta,50>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<NavajoWhite,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrSmoothFade<800>,Gradient<Black,BrownNoiseFlicker<Snow,Magenta,50>,Black>,TrSmoothFade<300>>,EFFECT_IGNITION>,InOutHelperL<InOutFuncX<Int<300>,Int<700>>>>>(), 

StylePtr<Layers<Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Red,Black,100,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),
StylePtr<Layers<Sequence<Rgb<120,0,255>,Black,200,37,0b101000001011,0b111000111010,0b100100011111000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Rgb<120,0,255>,Black,200,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),"Dark Jedi"},

	
	{"The_Maw", "tracks/",
StylePtr<Layers<Red,AudioFlickerL<Rgb<220,0,0>>,ResponsiveLockupL<Gradient<Black,Pulsing<NavajoWhite,LightYellow,800>,Black>,TrInstant,TrInstant,Int<26000>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,White,Red>,Stripes<1500,-2500,White,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Gradient<Pulsing<Black,Tomato,900>,BrownNoiseFlicker<Red,White,50>,Pulsing<Black,Red,1200>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), 

StylePtr<Layers<Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Red,Black,100,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),
StylePtr<Layers<Sequence<Rgb<120,0,255>,Black,200,37,0b101000001011,0b111000111010,0b100100011111000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Rgb<120,0,255>,Black,200,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(), "The Maw"},

	
	{"Executioner", "tracks/",
StylePtr<Layers<Red,HumpFlickerL<RotateColorsX<Sin<Int<5>,Int<3096>,Int<512>>,BrownNoiseFlicker<Red,Yellow,50>>,50>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,LockupTrL<BrownNoiseFlicker<Gradient<Snow,DodgerBlue,Red,Snow>,HumpFlicker<Yellow,Magenta,50>,50>,TrConcat<TrWipeInSparkTip<Snow,400,800>,BrownNoiseFlicker<SteelBlue,Magenta,50>,TrFade<100>>,TrWipeSparkTipX<White,Int<300>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<BrownNoiseFlickerL<DeepSkyBlue,Int<50>>,TrConcat<TrInstant,White,TrBoing<300,2>>,TrWaveX<White>,Int<26000>,Int<6000>,Int<15000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrSmoothFade<600>,Gradient<Black,Mix<SmoothStep<Sin<Int<10>>,Sin<Int<7>>>,Red,Yellow>,NavajoWhite,Black>,TrWaveX<White>>,EFFECT_IGNITION>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), 

StylePtr<Layers<Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Red,Black,100,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),
StylePtr<Layers<Sequence<Rgb<120,0,255>,Black,200,37,0b101000001011,0b111000111010,0b100100011111000>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Rgb<120,0,255>,Black,200,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(), "Executioner"},
	

{ "Calibrate", "tracks/battery_charge.wav",
 &style_charging, 
 StylePtr<Layers<Blinking<Rgb<120,0,255>,Black,400,500>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Rgb<120,0,255>,Black,150,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(),
 StylePtr<Layers<Blinking<Red,Black,400,500>,InOutTrL<TrSmoothFade<300>,TrInstant,Sequence<Red,Black,150,37,0b1010100001010,0b111000111000101,0b100000000000000>>>>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<122, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
   SubBlade(0,0, WS2811BladePtr<2, WS2811_ACTUALLY_800kHz | WS2811_GRB, blade2Pin, PowerPINS<bladePowerPin4> >()),
   SubBlade(1,1, NULL),
   CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
