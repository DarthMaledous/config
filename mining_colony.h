#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2200
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#define FETT263_THRUST_ON
#define FETT263_THRUST_ON_NO_BM
#define FETT263_TWIST_OFF
#endif

#ifdef CONFIG_PROP
//#include "../props/saber_sa22c_buttons.h"
#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "SithKiller", "tracks/venus.wav",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,DodgerBlue>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Sith Killer"},
	
	{"IgnitionRedux", "tracks/",
StylePtr<Layers<Green,RandomL<GreenYellow>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,LockupTrL<AlphaL<BrownNoiseFlicker<DodgerBlue,Magenta,145>,Int<32000>>,TrWipeInSparkTipX<Snow,Int<425>,Int<175>>,TrWaveX<White>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrSmoothFade<800>,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<Green,Yellow>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,Stripes<2500,3000,Green,Snow,GreenYellow,Ivory>,TrWipeIn<500>>,EFFECT_RETRACTION>,InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "Preset 2"},
	
	{"Protoblade", "tracks/",
StylePtr<Layers<DeepSkyBlue,RandomL<DodgerBlue>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,LockupTrL<AlphaL<BrownNoiseFlicker<DodgerBlue,Magenta,175>,Int<32000>>,TrWipeInSparkTipX<Snow,Int<425>,Int<175>>,TrWaveX<White>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrSmoothFade<800>,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<DeepSkyBlue,SteelBlue>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,Stripes<2500,3000,SteelBlue,Snow,DeepSkyBlue,Ivory>,TrWipeIn<500>>,EFFECT_RETRACTION>,InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "Preset 3"},
	
	{"Nextor", "tracks/",
StylePtr<Layers<AudioFlicker<Rgb<100,175,50>,Cyan>,ResponsiveLockupL<Pulsing<BrownNoiseFlicker<LightYellow,NavajoWhite,50>,Blinking<Snow,Ivory,300,500>,1200>,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTip<Magenta,300,1600>,TrWaveX<White>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<Coral,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<DarkOrange>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrSmoothFade<600>,White,TrSmoothFade<650>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrWaveX<BrownNoiseFlicker<Black,Cyan,50>,Int<350>>,AlphaL<Cyan,Sin<Int<100>>>,TrSmoothFade<650>>,EFFECT_FORCE>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Preset 4"},
	
	{"FallenOrder", "tracks/",
StylePtr<Layers<RandomFlicker<RotateColorsX<ChangeSlowly<Scale<Sin<Int<18>>,Int<0>,Int<4000>>,Int<50000>>,GreenYellow>,Rgb<100,175,50>>,ResponsiveLockupL<Pulsing<BrownNoiseFlicker<LightYellow,NavajoWhite,50>,Blinking<Snow,Ivory,300,500>,1200>,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTip<Magenta,300,1600>,TrWaveX<White>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<Coral,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<DarkOrange>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrSmoothFade<600>,White,TrSmoothFade<650>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrWaveX<BrownNoiseFlicker<Black,Cyan,50>,Int<350>>,AlphaL<Cyan,Sin<Int<100>>>,TrSmoothFade<650>>,EFFECT_FORCE>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Preset 5"},

	{"Dangerous", "tracks/",
StylePtr<Layers<
  DodgerBlue,
  AlphaL<Blue,Int<16000>>,
  RandomL<DeepSkyBlue>,
  AlphaL<AliceBlue,Bump<Int<0>,Int<32000>>>,
  TransitionEffectL<TrConcat<TrSmoothFade<300>,Stripes<10000,-1000,Azure,SteelBlue,NavajoWhite,Orange>,TrFade<650>>,EFFECT_FORCE>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<Pulsing<BrownNoiseFlicker<SteelBlue,Magenta,50>,SteelBlue,2000>,TrWipeInSparkTip<White,250,200>,TrSmoothFade<300>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveLightningBlockL<BrownNoiseFlicker<Azure,Magenta,50>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveBlastFadeL<Rgb<200,80,30>,Int<12000>,Int<400>,Int<28000>,Int<8000>,EFFECT_CLASH>,
  ResponsiveBlastWaveL<BlanchedAlmond,Int<400>,Int<100>,Int<400>,Int<28000>,Int<8000>,EFFECT_CLASH>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  TransitionEffectL<TrConcat<TrInstant,Stripes<5000,1000,AliceBlue,DodgerBlue,Azure,Blue>,TrFade<800>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrSmoothFade<300>,AlphaL<Azure,Bump<Int<32768>,Int<26384>>>,TrSmoothFade<800>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrInstant,Stripes<5000,-1000,AliceBlue,DodgerBlue,Azure,Blue>,TrFade<800>>,EFFECT_RETRACTION>,
  InOutTrL<TrWipe<300>,TrWipeIn<650>>>>(), "Preset 6"},
	
   { "Calibrate", "tracks/mars.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<125, WS2811_ACTUALLY_800kHz | WS2811_GRB, bladePin, PowerPINS<bladePowerPin4> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
