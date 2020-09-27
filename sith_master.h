#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 2000
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
#define SHTOK_GESTURE_IGNITION
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
{"Korriban", "tracks/",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<48,0,105>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<BrownNoiseFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,Black,300>,SwingSpeed<400>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,White,Rgb<95,0,210>>,Stripes<1500,-2500,White,Rgb<95,0,210>>>,Int<16384>>,TrFade<800>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<>,Int<28000>,Int<8000>>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<300>,Int<800>>>,Black>>>(), "preset1" },
	
{"Black_Bishop", "tracks/",
StylePtr<Layers<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<128,0,0>>,RotateColorsX<Variation,Rgb<200,0,0>>>,TransitionLoopL<TrWaveX<HumpFlickerL<RotateColorsX<Variation,Tomato>,40>,Int<250>,Int<100>,Int<200>,Int<0>>>,TransitionLoopL<TrWaveX<HumpFlickerL<RotateColorsX<Variation,Red>,40>,Int<350>,Int<100>,Int<300>,Int<0>>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<BrownNoiseFlicker<RotateColorsX<Variation,Red>,Black,300>,SwingSpeed<400>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,White,Red>,Stripes<1500,-2500,White,Red>>,Int<16384>>,TrFade<800>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Int<28000>,Int<8000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Coral,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<300>,Int<800>>>,Black>>>(), "preset2"},
	
	
{"troy", "tracks/",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<50,50,75>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<BrownNoiseFlicker<RotateColorsX<Variation,Rgb<100,100,150>>,Black,300>,SwingSpeed<400>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,White,Rgb<100,100,150>>,Stripes<1500,-2500,White,Rgb<100,100,150>>>,Int<16384>>,TrFade<800>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<>,Int<28000>,Int<8000>>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<300>,Int<800>>>,Black>>>(), "preset3"},
	
	
{"Sith_01", "tracks/",
StylePtr<Layers<
  RandomFlicker<Rgb<180,125,0>,Rgb<125,95,0>>,
  BlastL<White>,
  LockupL<Gradient<Pulsing<Black,White,2500>,HumpFlicker<White,Red,50>,HumpFlicker<Yellow,Red,50>,Pulsing<Black,Red,1600>>,AudioFlicker<Blue,White>>,
  ResponsiveClashL<Yellow,TrInstant,TrFade<200>,Int<26000>>,
  InOutHelperL<InOutFuncX<Int<300>,Int<800>>>>>()},
	
	
//{"Shadows", "tracks/",},
	
	
//{"Pitch_Black", "tracks/",},

	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
{ "Calibrate", "tracks/Battery_Charge_1.wav",
&style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<122, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
