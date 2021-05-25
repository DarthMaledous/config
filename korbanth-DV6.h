#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 280;
#define CLASH_THRESHOLD_G 3.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define IDLE_OFF_TIME 90 * 1000
#define FETT263_TWIST_ON_PREON
#define FETT263_TWIST_OFF
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "VaderProffie", "tracks/track2.wav",
StylePtr<Layers<
  Red,
  RandomL<Rgb<210,0,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutHelperL<InOutFuncX<Int<300>,Int<500>>>>>(), "Preset 1"},

	
{ "Father", "tracks/darth_sidious.wav",
StylePtr<Layers<
  Red,
  RandomL<Rgb<210,0,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutHelperL<InOutFuncX<Int<300>,Int<500>>>>>(), "Preset 2"},

	
{ "Butcher", "tracks/mercury.wav",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<42,0,110>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,240,80>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<LemonChiffon,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,180,50>,LemonChiffon,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>,Stripes<1500,-2500,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<200>,Int<500>>>,TrWipeInX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<300>,Int<800>>>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(), "Purple Preset 3"},

{ "RogueVader", "tracks/vader-r1.wav",
StylePtr<Layers<
  Red,
  RandomL<Rgb<210,0,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutHelperL<InOutFuncX<Int<300>,Int<500>>>>>(), "Preset 4"},

{ "Black_Bishop", "tracks/Vaders_Revenge.wav",
StylePtr<Layers<
  Red,
  RandomL<Rgb<210,0,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutHelperL<InOutFuncX<Int<300>,Int<500>>>>>(), "Preset 5"},

{ "The_Dark_Lord", "tracks/ro-vader.wav",
StylePtr<Layers<
  Red,
  RandomL<Rgb<210,0,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutHelperL<InOutFuncX<Int<300>,Int<500>>>>>(), "Preset 6"},

{ "Blind_Cowboy", "tracks/Jedi_Master.wav",
StylePtr<Layers<
  Red,
  RandomL<Rgb<210,0,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutHelperL<InOutFuncX<Int<300>,Int<500>>>>>(), "Preset 7"},

{ "Vengeance", "tracks/vader_track06.wav",
StylePtr<Layers<
  Red,
  RandomL<Rgb<210,0,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutHelperL<InOutFuncX<Int<300>,Int<500>>>>>(), "Preset 8"},
	
{ "Calibrate", "tracks/Battery_Charge_1.wav",
&style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<264, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
