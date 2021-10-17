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
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
//#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "SK_The_Dark", "tracks/venus.wav",
StylePtr<Layers<
  RandomFlicker<DeepSkyBlue,DodgerBlue>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<AlphaL<BrownNoiseFlicker<DodgerBlue,Magenta,125>,Int<32000>>,TrWipeInSparkTipX<Snow,Int<425>,Int<175>>,TrWaveX<White>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveLightningBlockL<LightCyan,TrWaveX<White>,TrWaveX<White>>,
  TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,
  TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  TransitionEffectL<TrConcat<TrInstant,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<DeepSkyBlue,SteelBlue>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,
  InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "Preset 1"},


   { "Peace", "tracks/mars.wav",
 StylePtr<Layers<
  RandomFlicker<DeepSkyBlue,DodgerBlue>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<AlphaL<BrownNoiseFlicker<SteelBlue,Magenta,125>,Int<16000>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,
  TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  TransitionEffectL<TrConcat<TrInstant,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<DeepSkyBlue,SteelBlue>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,
  InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "blue"},

   { "Nextor", "tracks/mercury.wav",
  StylePtr<Layers<
  Blue,
  AudioFlickerL<DodgerBlue>,
  AlphaL<Cyan,Int<16000>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<SteelBlue,Magenta,125>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveLightningBlockL<LightCyan,TrWaveX<White>,TrWaveX<White>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<Gradient<Coral,AudioFlicker<LightSalmon,NavajoWhite>,AudioFlicker<Snow,Yellow>,Coral>,TrInstant,TrFade<350>,Int<26000>,Int<6000>,Int<25000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrWipe<300>,TrConcat<TrBoing<650,8>,SteelBlue,TrWipeInSparkTip<Snow,300>>>>>(), "fire"},

	{ "Secret_Apprentice", "tracks/",
StylePtr<Layers<
  RandomFlicker<DeepSkyBlue,DodgerBlue>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<AlphaL<BrownNoiseFlicker<SteelBlue,Magenta,125>,Int<16000>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,
  TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  TransitionEffectL<TrConcat<TrInstant,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<DeepSkyBlue,SteelBlue>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,
  InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "red"},


{ "Corellian", "tracks/venus.wav",
 StylePtr<Layers<
  RandomFlicker<DeepSkyBlue,DodgerBlue>,
  AlphaL<Blue,Int<16000>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<SteelBlue,Magenta,125>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveLightningBlockL<LightCyan,TrWaveX<White>,TrWaveX<White>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<Gradient<Coral,AudioFlicker<LightSalmon,NavajoWhite>,AudioFlicker<Snow,Yellow>,Coral>,TrInstant,TrFade<350>,Int<26000>,Int<6000>,Int<25000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "blue fire"},

   { "SmthJedi", "tracks/mars.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
