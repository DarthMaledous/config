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
#define SAVE_STATE
#define IDLE_OFF_TIME 60 * 5 * 1000
#define MOTION_TIMEOUT 60 * 15 * 1000
#define DISABLE_BASIC_PARSER_STYLES
#define FETT263_EDIT_MODE_MENU
#define ENABLE_ALL_EDIT_OPTIONS
#define KEEP_SAVEFILES_WHEN_PROGRAMMING
#define FETT263_DUAL_MODE_SOUND
#define FETT263_CLASH_STRENGTH_SOUND
#define FETT263_SAY_BATTERY_PERCENT
#define FETT263_SAY_COLOR_LIST
#define FETT263_SAY_COLOR_LIST_CC
#define FETT263_SWING_ON_PREON
#define FETT263_SWING_ON_NO_BM
#define FETT263_TWIST_OFF
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "SK_The_Dark;common", "tracks/SK2.wav",
StylePtr<Layers<
  RandomFlicker<RgbArg<BASE_COLOR_ARG,DeepSkyBlue>,DodgerBlue>,
  ResponsiveLockupL<RgbArg<LOCKUP_COLOR_ARG,White>,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<AlphaL<BrownNoiseFlicker<RgbArg<LB_COLOR_ARG,DodgerBlue>,Magenta,125>,Int<32000>>,TrWipeInSparkTipX<Snow,Int<425>,Int<175>>,TrWaveX<White>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveLightningBlockL<RgbArg<LB_COLOR_ARG,LightCyan>,TrWaveX<White>,TrWaveX<White>>,
  TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,
  TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<RgbArg<DRAG_COLOR_ARG,White>>,
  ResponsiveClashL<RgbArg<CLASH_COLOR_ARG,White>,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,White>>,
  TransitionEffectL<TrConcat<TrInstant,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<DeepSkyBlue,SteelBlue>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,
  InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "Preset 1"},


   { "Peace;common", "tracks/SK3.wav",
StylePtr<Layers<
  RandomFlicker<RgbArg<BASE_COLOR_ARG,DeepSkyBlue>,DodgerBlue>,
  ResponsiveLockupL<RgbArg<LOCKUP_COLOR_ARG,White>,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<AlphaL<BrownNoiseFlicker<RgbArg<LB_COLOR_ARG,SteelBlue>,Magenta,125>,Int<16000>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,
  TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<RgbArg<DRAG_COLOR_ARG,White>>,
  ResponsiveClashL<RgbArg<CLASH_COLOR_ARG,White>,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,White>>,
  TransitionEffectL<TrConcat<TrInstant,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<DeepSkyBlue,SteelBlue>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,
  InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "blue"},

   { "Nextor;common", "tracks/SK4.wav",
StylePtr<Layers<
  RgbArg<BASE_COLOR_ARG,Blue>,
  AudioFlickerL<DodgerBlue>,
  AlphaL<Cyan,Int<16000>>,
  ResponsiveLockupL<RgbArg<LOCKUP_COLOR_ARG,White>,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<RgbArg<LB_COLOR_ARG,SteelBlue>,Magenta,125>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveLightningBlockL<RgbArg<LB_COLOR_ARG,LightCyan>,TrWaveX<White>,TrWaveX<White>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<RgbArg<DRAG_COLOR_ARG,White>>,
  ResponsiveClashL<Gradient<RgbArg<CLASH_COLOR_ARG,Coral>,AudioFlicker<LightSalmon,NavajoWhite>,AudioFlicker<Snow,Yellow>,Coral>,TrInstant,TrFade<350>,Int<26000>,Int<6000>,Int<25000>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,White>>,
  InOutTrL<TrWipe<300>,TrConcat<TrBoing<650,8>,SteelBlue,TrWipeInSparkTip<Snow,300>>>>>(), "fire"},

{ "Assassin;common", "tracks/",
StylePtr<Layers<
  RandomFlicker<RgbArg<BASE_COLOR_ARG,DeepSkyBlue>,DodgerBlue>,
  ResponsiveLockupL<RgbArg<LOCKUP_COLOR_ARG,White>,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<AlphaL<BrownNoiseFlicker<RgbArg<LB_COLOR_ARG,SteelBlue>,Magenta,125>,Int<16000>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,
  TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<RgbArg<DRAG_COLOR_ARG,White>>,
  ResponsiveClashL<RgbArg<CLASH_COLOR_ARG,White>,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,White>>,
  TransitionEffectL<TrConcat<TrInstant,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<DeepSkyBlue,SteelBlue>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,
  InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(), "red"},


{ "Corellian;common", "tracks/venus.wav",
 StylePtr<Layers<
  RandomFlicker<RgbArg<BASE_COLOR_ARG,DeepSkyBlue>,DodgerBlue>,
  AlphaL<Blue,Int<16000>>,
  ResponsiveLockupL<RgbArg<LOCKUP_COLOR_ARG,White>,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<RgbArg<LB_COLOR_ARG,SteelBlue>,Magenta,125>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveLightningBlockL<RgbArg<LB_COLOR_ARG,LightCyan>,TrWaveX<White>,TrWaveX<White>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<RgbArg<DRAG_COLOR_ARG,White>>,
  ResponsiveClashL<Gradient<RgbArg<CLASH_COLOR_ARG,Coral>,AudioFlicker<LightSalmon,NavajoWhite>,AudioFlicker<Snow,Yellow>,Coral>,TrInstant,TrFade<350>,Int<26000>,Int<6000>,Int<25000>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,White>>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "blue fire"}

};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin4> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
