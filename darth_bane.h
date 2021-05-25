#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define ORIENTATION_ROTATION 0,20,0
#define COLOR_CHANGE_DIRECT
#define FETT263_SWING_ON_NO_BM
#define FETT263_SWING_ON_PREON
#define FETT263_TWIST_OFF
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE

//#define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
{"The_Bane", "tracks/",

//MAIN BLADE
StylePtr<Layers<Stripes<16000,-1000,RotateColorsX<Variation,Red>,Pulsing<RotateColorsX<Variation,Rgb<90,0,0>>,RotateColorsX<Variation,Red>,800>,RotateColorsX<Variation,Red>>,TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<160,0,0>>>,TrDelay<30000>,RotateColorsX<Variation,Red>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<BrownNoiseFlicker<RotateColorsX<Variation,Red>,Black,300>,SwingSpeed<400>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,White,Red>,Stripes<1500,-2500,White,Red>>,Int<16384>>,TrFade<800>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<16000>>>,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrFade<1200>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrJoin<TrWipe<500>,TrWipeIn<500>>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

// SWITCH LED's
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset1"},

{"Ignition", "tracks/",
//MAIN BLADE
StylePtr<Layers<Stripes<16000,-1000,RotateColorsX<Variation,Red>,Pulsing<RotateColorsX<Variation,Rgb<90,0,0>>,RotateColorsX<Variation,Red>,800>,RotateColorsX<Variation,Red>>,TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<160,0,0>>>,TrDelay<30000>,RotateColorsX<Variation,Red>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<NavajoWhite,SwingSpeed<600>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,225,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<White,Int<0>>,TrWaveX<TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Int<300>,Int<100>,Int<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Int<28000>,Int<8000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrJoin<TrWipe<500>,TrWipeIn<500>>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

// SWITCH LED's
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset2"},

/////////////////////
{"The_Second", "tracks/",
StylePtr<Layers<Pulsing<Stripes<3000,-3000,RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<60,0,0>>,RotateColorsX<Variation,Rgb<255,50,50>>,RotateColorsX<Variation,Rgb<128,0,0>>>,Stripes<3000,3000,RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<60,0,0>>,RotateColorsX<Variation,Rgb<255,50,50>>,RotateColorsX<Variation,Rgb<128,0,0>>>,3000>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<BrownNoiseFlicker<RotateColorsX<Variation,Red>,Black,300>,SwingSpeed<400>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,White,Red>,Stripes<1500,-2500,White,Red>>,Int<16384>>,TrFade<800>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<16000>>>,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrFade<1200>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrJoin<TrWipe<500>,TrWipeIn<500>>,Black>,TransitionEffectL<TrConcat<TrDelay<300>,AlphaL<RandomPerLEDFlickerL<White>,SmoothStep<Int<6000>,Int<-4000>>>,TrDelay<7700>>,EFFECT_PREON>,TransitionEffectL<TrConcat<TrWipeIn<200>,BrownNoiseFlickerL<White,Int<200>>,TrWipeIn<200>>,EFFECT_PREON>>>(),

//SWITCH LED's
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset3"},
//////////////////////

{"TheRuleOfTwo", "tracks/",
StylePtr<Layers<HumpFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>,50>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<BrownNoiseFlicker<Red,Black,300>,SwingSpeed<400>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrJoinR<TrWipe<500>,TrWipeIn<500>>,Black>>>(),

//SWITCH LED's
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset4"},
//////////////////////
	

/////////////////////
{"TransferBlade", "tracks/",
StylePtr<Layers<ColorChange<TrWipe<500>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<128,0,0>,Rgb<60,0,0>>,300>,Rgb<30,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>,FireConfig<10,1000,2>>,HumpFlicker<Rgb<95,0,210>,Rgb<21,0,52>,40>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<NavajoWhite,SwingSpeed<600>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,225,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<White,Int<0>>,TrWaveX<TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Int<300>,Int<100>,Int<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Int<28000>,Int<8000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrJoin<TrWipe<500>,TrWipeIn<500>>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

//SWITCH LED's
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset5"},
/////////////////////

{"Legion", "tracks/",
StylePtr<Layers<HumpFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>,50>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<BrownNoiseFlicker<RotateColorsX<Variation,Rgb<255,150,150>>,Black,300>,SwingSpeed<400>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,LocalizedClashL<White>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrConcat<TrWipeIn<200>,RandomBlink<30000,White,Black>,TrWipeIn<200>,Mix<SmoothStep<Scale<SlowNoise<Int<30000>>,Int<1000>,Int<6000>>,Int<-3000>>,Black,White>,TrDelay<400>,Mix<SmoothStep<Int<4000>,Int<-3000>>,Black,White>,TrWipe<300>>,TrJoinR<TrWipe<500>,TrWipeIn<500>>,Black>>>(),

//SWITCH LED's
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset6"},
//////////////////////

/////////////////////
{"Nextor", "tracks/",
StylePtr<Layers<
  RandomFlicker<Rgb<180,125,0>,Rgb<125,95,0>>,
  BlastL<White>,
  LockupL<Gradient<Pulsing<Black,White,2500>,HumpFlicker<White,Red,50>,HumpFlicker<Yellow,Red,50>,Pulsing<Black,Red,800>>,AudioFlicker<Blue,White>>,
  ResponsiveClashL<Yellow,TrInstant,TrFade<200>,Int<26000>>,
  TransitionEffectL<TrConcat<TrWaveX<Red>,Pulsing<Black,White,1600>,TrWipeInSparkTipX<BrownNoiseFlicker<Black,White,50>,Int<900>>>,EFFECT_IGNITION>,
  InOutHelperL<InOutFuncX<Int<300>,Int<800>>>>>(),
 
 // SWITCH LED's
 StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset7"},

/////////////////////
{"Photonblade", "tracks/",
StylePtr<Layers<Stripes<6000,-3000,RotateColorsX<Variation,Rgb<48,0,105>>,RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<22,0,49>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<AlphaL<Stripes<1000,-2000,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,Black>,Black,RotateColorsX<Variation,Rgb<95,0,210>>,Black>,SwingSpeed<600>>,SmoothStep<Scale<SwingSpeed<600>,Int<28000>,Int<14000>>,Int<16000>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Azure>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Azure,White,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<White,Azure,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>,Stripes<1500,-2500,TransitionEffect<White,Azure,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastFadeL<Azure,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<White,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<200>,Int<350>>>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),
 
 //
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset8"},

/////////////////////

{"proto1", "tracks/",
StylePtr<Layers<Stripes<3000,-3500,RotateColorsX<Variation,Red>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<60,0,0>>,Black>,BrownNoiseFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<30,0,0>>,200>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<80,0,0>>,RotateColorsX<Variation,Rgb<30,0,0>>>>,TransitionLoopL<TrConcat<TrWaveX<AudioFlicker<RotateColorsX<Variation,Red>,BrownNoiseFlicker<RotateColorsX<Variation,Rgb<80,0,0>>,Black,200>>,Int<400>,Int<100>,Int<200>,Int<0>>,AlphaL<Red,Int<0>>,TrDelayX<Scale<SlowNoise<Int<1000>>,Int<100>,Int<1000>>>>>,TransitionLoopL<TrConcat<TrWaveX<AudioFlicker<RotateColorsX<Variation,Red>,BrownNoiseFlicker<Black,RotateColorsX<Variation,Rgb<60,0,0>>,300>>,Int<400>,Int<100>,Int<200>,Int<0>>,AlphaL<Red,Int<0>>,TrDelayX<Scale<SlowNoise<Int<1000>>,Int<200>,Int<1500>>>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<BrownNoiseFlicker<Red,Black,300>,SwingSpeed<400>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,White,Red>,Stripes<1500,-2500,White,Red>>,Int<16384>>,TrFade<800>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<16000>>>,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrConcat<TrWipeIn<200>,RandomBlink<30000,White,Black>,TrWipeIn<200>,Mix<SmoothStep<Scale<SlowNoise<Int<30000>>,Int<1000>,Int<6000>>,Int<-3000>>,Black,White>,TrDelay<400>,Mix<SmoothStep<Int<4000>,Int<-3000>>,Black,White>,TrWipe<300>>,TrJoin<TrWipe<500>,TrWipeIn<500>>,Black>>>(),

 //SWITCH LED's
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(),
StylePtr<Layers<Red,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<Black>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrInstant,TrFade<500>,RotateColorsX<Variation,Red>>>>(), "preset9"},

{ "Calibrate", "tracks/Battery_Charge1.wav",
 &style_charging,
 &style_charging, 
 &style_charging, "Battery\nLevel"}
};

BladeConfig blades[] = {
 { 0, WS281XBladePtr<122, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
	SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(),
	SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
