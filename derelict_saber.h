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
#define FETT263_TWIST_ON_PREON
#define FETT263_TWIST_ON_NO_BM
#define FETT263_TWIST_OFF
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "Ancient", "tracks/venus.wav",
  StylePtr<Layers<
  Mix<Int<12288>,Rgb<190,100,0>,Yellow>,
  RandomL<Rgb<190,100,0>>,
  ResponsiveLockupL<NavajoWhite,TrInstant,TrInstant,Int<26000>>,
  ResponsiveLightningBlockL<RotateColorsX<Sin<Int<100>,Int<16384>>,Mix<Int<16384>,Rgb<150,0,220>,GhostWhite>>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<GhostWhite,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<GhostWhite>,
  ResponsiveBlastWaveL<GhostWhite>,
  ResponsiveBlastFadeL<GhostWhite>,
  ResponsiveStabL<White>,
  OnSparkL<Gradient<Black,Pulsing<NavajoWhite,GhostWhite,800>,Black>,Int<1200>>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "cyan"},
	
     { "Executioner", "tracks/mars.wav",
 StylePtr<Layers<
  Mix<Int<12288>,Rgb<190,100,0>,Yellow>,
  AudioFlickerL<Rgb<140,150,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  ResponsiveLightningBlockL<White>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrConcat<TrWaveX<White>,NavajoWhite,TrSmoothFade<300>>,TrWipeIn<500>>>>(), "Executioner"},
	
    { "Korriban", "tracks/mercury.wav",
StylePtr<Layers<
  Mix<Int<12288>,Rgb<190,100,0>,Yellow>,
  AudioFlickerL<Rgb<140,150,0>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Magenta,50>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<Red>,
  ResponsiveStabL<White>,
  TransitionEffectL<TrConcat<TrColorCycle<1000>,HumpFlicker<NavajoWhite,Red,50>,TrBoing<300,6>>,EFFECT_FORCE>,
  TransitionEffectL<TrConcat<TrBoing<600,6>,NavajoWhite,TrSmoothFade<600>>,EFFECT_IGNITION>,
  InOutTrL<TrConcat<TrWaveX<White,Int<200>,Int<100>,Int<600>>,NavajoWhite,TrInstant>,TrJoin<TrBoing<800,4>,TrWipeIn<500>>>>>(), "Korriban"},
	
	{"IgnitionRedux", "tracks/",
StylePtr<Layers<
  Black,
  Mix<Int<12288>,Red,RandomL<Red>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  TransitionEffectL<TrConcat<TrConcat<TrWipeInSparkTipX<Magenta,Int<300>>,BrownNoiseFlicker<Green,Magenta,50>,TrWipeSparkTipX<HumpFlicker<DodgerBlue,Magenta,50>,Int<300>>>,BrownNoiseFlicker<DodgerBlue,Magenta,50>,TrBoing<300,2>>,EFFECT_LOCKUP_END>,
  ResponsiveLightningBlockL<White,TrInstant,TrBoing<600,3>>,
  TransitionEffectL<TrConcat<TrConcat<TrWipeInSparkTipX<Magenta,Int<300>>,BrownNoiseFlicker<Green,Magenta,50>,TrWipeSparkTipX<HumpFlicker<DodgerBlue,Magenta,50>,Int<300>>>,BrownNoiseFlicker<DodgerBlue,Magenta,50>,TrBoing<300,2>>,EFFECT_FORCE>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveClashL<Gradient<NavajoWhite,LightYellow,Green>,TrFade<100>,TrBoing<400,2>,Int<26000>,Int<6000>,Int<20000>>,
  ResponsiveDragL<White>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  MultiTransitionEffectL<TrConcat<TrBoing<800,6>,BrownNoiseFlicker<Yellow,Black,50>,TrInstant>,EFFECT_IGNITION>,
  InOutTrL<TrConcat<TrWaveX<Gradient<Black,Pulsing<GhostWhite,Black,800>,Black>>,White,TrSmoothFade<300>>,TrWipeInSparkTipX<White,Int<500>,Int<800>>>>>(), "IgintionRedux"},
	 
	
  { "Corellian", "tracks/venus.wav",
StylePtr<Layers<
  Red,
  RandomL<Tomato>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<White,Int<200>>,TrConcat<TrWaveX<White>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrConcat<TrWipeInSparkTipX<White,Int<200>>,HumpFlicker<OrangeRed,NavajoWhite,50>,TrSmoothFade<500>>,TrWipeIn<500>>>>(),"Corellian"},

	{ "Legion", "tracks/",
StylePtr<Layers<
  RotateColorsX<Sin<Int<10>,Int<4096>,Int<256>>,Gradient<OrangeRed,Red>>,
  ResponsiveLightningBlockL<White>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  TransitionEffectL<TrConcat<TrFade<300>,Gradient<Black,NavajoWhite,Black>,TrBoing<300,2>>,EFFECT_IGNITION>,
  ResponsiveStabL<White>,
  InOutTrL<TrWipe<250>,TrWipeIn<500>>>>(), "Legion"},

	{"ProdButcher", "tracks/",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Rgb<95,0,255>>,RotateColorsX<Variation,Rgb<135,0,255>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,225,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveClashL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrFade<1200>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>>,TransitionEffectL<TrConcat<TrBoing<3000,5>,AlphaL<BrownNoiseFlickerL<RotateColorsX<Variation,Red>,Int<100>>,Bump<Int<0>,Int<4000>>>,TrBoing<3000,3>,Black,TrBoing<1400,3>,AlphaL<BrownNoiseFlickerL<RotateColorsX<Variation,Red>,Int<200>>,Bump<Int<0>,Int<6000>>>,TrBoing<550,3>>,EFFECT_PREON>>>(), "Prodigal Butcher"},
 
   { "Calibrate", "tracks/mars.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<144, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
