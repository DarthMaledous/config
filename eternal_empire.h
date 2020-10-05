#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
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
#define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
{"The_Metallic_Jaw", "tracks/",
 StylePtr<Layers<Stripes<16000,-1000,RotateColorsX<Variation,Red>,Pulsing<RotateColorsX<Variation,Rgb<90,0,0>>,RotateColorsX<Variation,Red>,800>,RotateColorsX<Variation,Red>>,TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<160,0,0>>>,TrDelay<30000>,RotateColorsX<Variation,Red>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<AudioFlickerL<White>,SwingSpeed<400>>,TransitionEffectL<TrWaveX<White,Int<400>,Int<100>,Int<600>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<White,Bump<Int<0>,Int<8000>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Coral,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrConcat<TrWipeIn<200>,RandomBlink<30000,White,Black>,TrWipeIn<200>,Mix<SmoothStep<Scale<SlowNoise<Int<30000>>,Int<1000>,Int<6000>>,Int<-3000>>,Black,White>,TrDelay<400>,Mix<SmoothStep<Int<4000>,Int<-3000>>,Black,White>,TrWipe<300>>,TrJoinR<TrWipe<500>,TrWipeIn<500>>,Black>>>(), "preset1" },

{"KSith_Ascension", "tracks/",
StylePtr<Layers<
  RotateColorsX<Variation,Rgb<180,125,0>>,
  TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,
  AlphaL<AudioFlickerL<White>,SwingSpeed<400>>,
  TransitionEffectL<TrWaveX<White,Int<400>,Int<100>,Int<600>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>>,EFFECT_LOCKUP_END>,
  LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  AlphaL<White,Bump<Int<0>,Int<8000>>>,
  ResponsiveStabL<Orange>,
  ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveClashL<White,TrInstant,TrFade<400>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Coral,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrConcat<TrWipeIn<200>,RandomBlink<30000>,TrWipeIn<200>,Mix<SmoothStep<Scale<SlowNoise<Int<30000>>,Int<1000>,Int<6000>>,Int<-3000>>,Black,White>,TrDelay<400>,Mix<SmoothStep<Int<4000>,Int<-3000>>,Black,White>,TrWipe<300>>,TrJoinR<TrWipe<500>,TrWipeIn<500>>>>>(), "preset2" },

{"SHADOWS", "tracks/",
StylePtr<Layers<
  Layers<
    Rgb<180,125,0>,
    RandomL<Rgb<125,95,0>>,
    OnSparkL<Gradient<Pulsing<Black,Red,1200>,Snow,Pulsing<Black,Red,1200>>,Int<1600>>>,
  BlastL<White>,
  LockupL<AudioFlicker<Blue,White>>,
  LocalizedClashL<Gradient<Snow,Rgb<100,0,250>,Snow>,90>,
  InOutHelperL<InOutFuncX<Int<300>,Int<650>>>>>(), "preset3"},

{"Executioner", "tracks/",
StylePtr<Layers<
  RandomFlicker<Yellow,Rgb<220,100,20>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  ResponsiveLightningBlockL<White>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<Gradient<Black,Red,Black>,TrInstant,TrFade<400>,Int<26000>,Int<6000>,Int<20000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "preset4" },

{"Corellian", "tracks/",
StylePtr<Layers<
  StripesX<Sin<Int<12>,Int<3000>,Int<7000>>,Scale<SwingSpeed<100>,Int<75>,Int<125>>,StripesX<Sin<Int<10>,Int<1000>,Int<3000>>,Scale<SwingSpeed<100>,Int<75>,Int<100>>,Pulsing<RotateColorsX<Variation,Rgb<95,0,255>>,RotateColorsX<Variation,Rgb<5,0,30>>,1200>,Mix<SwingSpeed<200>,RotateColorsX<Variation,Rgb<50,0,90>>,Black>>,RotateColorsX<Variation,Rgb<20,0,50>>,Pulsing<RotateColorsX<Variation,Rgb<18,0,60>>,StripesX<Sin<Int<10>,Int<2000>,Int<3000>>,Sin<Int<10>,Int<75>,Int<100>>,RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<30,0,70>>>,2000>,Pulsing<RotateColorsX<Variation,Rgb<60,0,95>>,RotateColorsX<Variation,Rgb<2,0,5>>,3000>>,
  AlphaL<StyleFire<RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<1,0,2>>,0,1,FireConfig<10,2000,2>,FireConfig<10,2000,2>,FireConfig<10,2000,2>,FireConfig<0,0,25>>,Int<10000>>,
  TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,
  AlphaL<AudioFlickerL<White>,SwingSpeed<400>>,
  TransitionEffectL<TrWaveX<White,Int<400>,Int<100>,Int<600>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>>,EFFECT_LOCKUP_END>,
  LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  AlphaL<White,Bump<Int<0>,Int<8000>>>,
  ResponsiveStabL<Red>,
  ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrConcat<TrWipeIn<200>,RandomBlink<30000>,TrWipeIn<200>,Mix<SmoothStep<Scale<SlowNoise<Int<30000>>,Int<1000>,Int<6000>>,Int<-3000>>,Black,White>,TrDelay<400>,Mix<SmoothStep<Int<4000>,Int<-3000>>,Black,White>,TrWipe<300>>,TrJoinR<TrWipe<500>,TrWipeIn<500>>>>>(), "preset5" },

{"The_Tragedy", "tracks/",
StylePtr<Layers<
  Layers<
    Gradient<Pulsing<Snow,RandomFlicker<Red,Tomato>,3800>,RandomFlicker<Red,Tomato>,AudioFlicker<Red,Tomato>>,
    OnSparkL<Gradient<Black,Snow,Black>,Int<800>>>,
  BlastL<White>,
  LockupL<AudioFlicker<OnSpark<Gradient<Pulsing<Snow,RandomFlicker<Red,Tomato>,3800>,RandomFlicker<Red,Tomato>,AudioFlicker<Red,Tomato>>,Gradient<Black,Snow,Black>,800>,White>>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  InOutHelperL<InOutFuncX<Int<200>,Int<650>>>>>(), "preset6" },






	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
{ "Calibrate", "tracks/Battery_Charge1.wav",
&style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<122, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
