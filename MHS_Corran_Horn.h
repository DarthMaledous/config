#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 2200
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVE_STATE
#define IDLE_OFF_TIME 60 * 5 * 1000
#define MOTION_TIMEOUT 60 * 15 * 1000
#define DISABLE_DIAGNOSTIC_COMMANDS
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


#ifdef CONFIG_PRESETS

Preset presets[] = {

{"Son_Of_Corellia_Proffie;common", "tracks/fate_fortune.wav",
StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,TransitionEffectL<TrConcat<TrExtend<30000,TrFade<300>>,AudioFlickerL<RgbArg<SWING_COLOR_ARG,Rgb<255,255,255>>>,TrFade<300>>,EFFECT_FORCE>,TransitionEffectL<TrSelect<IntArg<IGNITION_POWER_UP_ARG,0>,TrConcat<TrExtendX<IgnitionTime<300>,TrInstant>,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>,TrFade<1000>>,TrConcat<TrInstant,HumpFlickerL<RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>,40>,TrFade<1200>>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrExtendX<WavLen<>,TrWipeIn<200>>,AlphaL<RandomPerLEDFlickerL<RgbArg<STAB_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<MELT_SIZE_ARG,26000>,Int<2000>>>,TrWipe<200>>,EFFECT_STAB>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<6000>>>,TrCenterWipeX<Int<100>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,AlphaL<Remap<CenterDistF<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,Stripes<1400,-2000,RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<2096>,Black,RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<38000>>>,TrJoin<TrSmoothFade<50>,TrCenterWipeX<Int<100>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>>>,EFFECT_CLASH>,LockupTrL<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrWaveX<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<300>,Int<100>,Int<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,26000>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,26000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,26000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,26000>,Int<4000>>>,TrExtend<4000,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,26000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrSelect<IntArg<IGNITION_OPTION_ARG,0>,TrWipeX<IgnitionTime<300>>,TrWipeSparkTipX<RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>,IgnitionTime<300>>,TrConcat<TrWipeInX<Mult<IgnitionTime<300>,Int<6553>>>,RandomBlink<30000,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>,Black>,TrExtendX<Mult<IgnitionTime<300>,Int<19660>>,TrWipeInX<Mult<IgnitionTime<230>,Int<6553>>>>,Mix<SmoothStep<Scale<SlowNoise<Int<30000>>,IntArg<EMITTER_SIZE_ARG,1000>,Sum<Int<5000>,IntArg<EMITTER_SIZE_ARG,1000>>>,Int<-3000>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<300>,Int<19660>>>>>,TrWipeInX<RetractionTime<0>>,Black>,TransitionEffectL<TrConcat<TrExtend<2000,TrWipe<1000>>,AlphaL<Mix<BatteryLevel,Red,Green>,SmoothStep<BatteryLevel,Int<-10>>>,TrWipeIn<1000>>,EFFECT_BATTERY_LEVEL>>>(),

/* copyright Fett263 (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
OS6.5 v2.0
Single Style
On Behavior: Solid Color
Off Behavior: Luke ROTJ (Green Arrow)

--Effects Included--
Ignition Effect: Instant
Retraction Effect: Instant
*/
//StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(),
StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),


/* copyright Fett263 (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
OS6.5 v2.0
Single Style
On Behavior: Fast Turbine
Off Behavior: Luke ROTJ (Green Arrow)

--Effects Included--
Ignition Effect: Instant
Retraction Effect: Instant
*/
//StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),
StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(), "Son_Of_Corellia_Proffie" },


	/* Preset 2 */
{"ANALOG_PROFFIE;common", "tracks/helios.wav",
StylePtr<Layers<
  AudioFlicker<RgbArg<BASE_COLOR_ARG,Rgb16<0,38402,65535>>,Rgb<0,85,200>>,
  AlphaL<Rgb16<882,65535,31206>,SwingSpeed<500>>,
  AlphaL<Stripes<2500,-4000,Rgb16<0,38402,65535>,Rgb<0,26,60>,Pulsing<Rgb<0,13,30>,Black,800>>,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,225,0>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<600>,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,DeepSkyBlue,Rgb16<0,65535,30086>>,Stripes<1500,-2500,DeepSkyBlue,Rgb16<0,65535,30086>>>,Int<18000>>,TrFade<800>,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,1000,Rgb16<1514,65535,52727>,Rgb16<3934,65535,38402>>,Stripes<1500,-1250,Rgb16<1514,65535,52727>,Rgb16<3934,65535,38402>>>,Int<18000>>,TrFade<1100>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  AlphaL<Rgb16<0,65535,30086>,SmoothStep<Scale<SlowNoise<Int<2300>>,Int<1200>,Int<4500>>,Int<-4000>>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Red>>,
  EffectSequence<EFFECT_BLAST,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,LocalizedClashL<RgbArg<BLAST_COLOR_ARG,White>,80,30,EFFECT_BLAST>,ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,BlastL<RgbArg<BLAST_COLOR_ARG,White>,200,200>,ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>>,
  ResponsiveClashL<TransitionEffect<RgbArg<CLASH_COLOR_ARG,Rgb<255,240,80>>,LemonChiffon,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrInstant,Stripes<3000,-3500,White,RandomPerLEDFlicker<Rgb<60,60,60>,Black>,BrownNoiseFlicker<White,Rgb<30,30,30>,200>,RandomPerLEDFlicker<Rgb<80,80,80>,Rgb<30,30,30>>>,TrFade<1000>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<Rgb<90,180,255>,40>,TrFade<1200>>,EFFECT_RETRACTION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrConcat<TrWipe<200>,AudioFlicker<DeepSkyBlue,Rgb<0,0,128>>,TrWipe<100>,Black,TrBoing<550,2>>,TrColorCycle<790>>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<BrownNoiseFlickerL<Rgb16<0,38402,65535>,Int<30>>,SmoothStep<Scale<SlowNoise<Int<2200>>,Int<1500>,Int<5000>>,Int<-4000>>>,TrFade<1400>,AlphaL<Rgb16<0,11150,20996>,Bump<Int<0>,Int<10000>>>,TrFade<1500>,AlphaL<Rgb16<20393,20393,20393>,Bump<Int<0>,Int<7000>>>,TrFade<2100>>,EFFECT_RETRACTION>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrDelay<2000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrFade<1000>>,EFFECT_BATTERY_LEVEL>,
  TransitionEffectL<TrConcat<TrFade<100>,AlphaL<Pulsing<RgbArg<PREON_COLOR_ARG,Rgb<120,120,165>>,Rgb<50,50,80>,500>,Bump<Int<0>,Int<6000>>>,TrBoing<600,9>>,EFFECT_PREON>>>(),

/* Accent LED Switches */

StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),


/* copyright Fett263 (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
OS6.5 v2.0
Single Style
On Behavior: Fast Turbine
Off Behavior: Luke ROTJ (Green Arrow)

--Effects Included--
Ignition Effect: Instant
Retraction Effect: Instant
*/
//StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),
StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(), "Analog" },

/* Preset 3 */
{"MASTERLESS_PROFFIE;common", "tracks/lidp.wav",
StylePtr<Layers<
  Stripes<15000,-300,RgbArg<BASE_COLOR_ARG,Yellow>,Pulsing<Rgb<200,200,30>,Rgb<180,180,0>,800>,Rgb<180,180,0>>,
  TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<Rgb<180,180,0>,Rgb<113,113,0>>,TrDelay<30000>,Rgb<180,180,0>,TrFade<800>>,EFFECT_FORCE>,
  AlphaL<Rgb<255,80,10>,Scale<IsLessThan<SwingSpeed<300>,Int<13600>>,Scale<SwingSpeed<300>,Int<-19300>,Int<32768>>,Int<0>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,White>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,Red,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  AlphaL<Rgb<230,180,80>,Bump<Int<0>,Int<8000>>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Red>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveClashL<RgbArg<CLASH_COLOR_ARG,White>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<Rgb<230,180,80>>,TrFade<1200>>,EFFECT_IGNITION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipeSparkTip<White,300,40>,TrWipeIn<1400>>,
  TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>>>(),


  /* Accent LED Switches */

  StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),


  /* copyright Fett263 (Accent LED / PCB) OS6 Style
  https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
  OS6.5 v2.0
  Single Style
  On Behavior: Fast Turbine
  Off Behavior: Luke ROTJ (Green Arrow)

  --Effects Included--
  Ignition Effect: Instant
  Retraction Effect: Instant
  */
  //StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),
  StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(), "Masterless" },

  /* Preset 4 */
{"SPLINTER_PROFFIE;common", "tracks/",
StylePtr<Layers<
  Mix<SmoothStep<Scale<SwingSpeed<400>,Int<6000>,Int<24000>>,Int<10000>>,Stripes<5000,-1300,RgbArg<BASE_COLOR_ARG,DarkOrange>,Rgb<60,17,0>,Orange,Rgb<128,34,0>>,AudioFlicker<DarkOrange,Rgb<168,54,0>>>,
  AlphaL<BrownNoiseFlicker<DarkOrange,Black,300>,SwingSpeed<600>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Azure>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Azure,White,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<White,Azure,TrInstant,TrFade<550>,EFFECT_LOCKUP_BEGIN>,TrFade<400>,Stripes<3000,-3500,Rgb16<65535,3131,0>,RandomPerLEDFlicker<Rgb<60,17,0>,Black>,BrownNoiseFlicker<Rgb16<65535,15911,1175>,Rgb<60,17,0>,200>,RandomPerLEDFlicker<Rgb<128,34,0>,Rgb<60,17,0>>>,TrFade<1350>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Red>>,
  EffectSequence<EFFECT_BLAST,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,White>,BlastF<200,200>>,TrFade<300>>,EFFECT_BLAST>,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>>,
  ResponsiveClashL<TransitionEffect<RgbArg<CLASH_COLOR_ARG,Azure>,White,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrInstant,Stripes<3000,-3500,Rgb16<65535,58942,5401>,RandomPerLEDFlicker<Rgb<60,17,0>,Black>,BrownNoiseFlicker<Rgb<255,178,110>,Rgb<60,17,0>,200>,RandomPerLEDFlicker<Rgb<128,34,0>,Rgb<60,17,0>>>,TrFade<2700>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<Rgb16<65535,58942,5401>,40>,TrFade<1100>>,EFFECT_RETRACTION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipeSparkTip<White,300>,TrWipeInSparkTip<White,1100>>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrDelay<2000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrFade<1000>>,EFFECT_BATTERY_LEVEL>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<BrownNoiseFlickerL<White,Int<30>>,SmoothStep<Scale<SlowNoise<Int<2000>>,Int<1000>,Int<4000>>,Int<-4000>>>,TrDelay<1250>>,EFFECT_RETRACTION>>>(),

  /* Accent LED Switches */

  StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),


  /* copyright Fett263 (Accent LED / PCB) OS6 Style
  https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
  OS6.5 v2.0
  Single Style
  On Behavior: Fast Turbine
  Off Behavior: Luke ROTJ (Green Arrow)

  --Effects Included--
  Ignition Effect: Instant
  Retraction Effect: Instant
  */
  //StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),
  StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(), "Splinter" },

  /* Preset 5 */
  {"NOBLE_PROFFIE;common", "tracks/",
  StylePtr<Layers<
  Stripes<5000,-75,RgbArg<BASE_COLOR_ARG,Rgb<180,130,0>>,Rgb<200,120,0>,Rgb<220,160,40>,Rgb<170,95,0>>,
  EffectSequence<EFFECT_FORCE,AlphaL<BrownNoiseFlicker<Rgb<180,130,0>,Black,300>,SwingSpeed<475>>,AlphaL<White,SwingSpeed<650>>,AlphaL<BrownNoiseFlicker<Rgb16<65535,65535,28626>,Black,300>,SwingSpeed<550>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Azure>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,AlphaL<White,Int<0>>,TrWaveX<White,Int<300>,Int<100>,Int<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  AlphaL<LemonChiffon,Bump<Int<0>,Int<10000>>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Red>>,
  EffectSequence<EFFECT_BLAST,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,White>,BlastF<200,200>>,TrFade<300>>,EFFECT_BLAST>,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>>,
  ResponsiveClashL<TransitionEffect<RgbArg<CLASH_COLOR_ARG,Azure>,White,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<1000>>,EFFECT_IGNITION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipeSparkTip<White,350>,TrWipeSparkTip<White,1250>>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrDelay<2000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrFade<1000>>,EFFECT_BATTERY_LEVEL>>>(),

  /* Accent LED Switches */

  StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),


  /* copyright Fett263 (Accent LED / PCB) OS6 Style
  https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
  OS6.5 v2.0
  Single Style
  On Behavior: Fast Turbine
  Off Behavior: Luke ROTJ (Green Arrow)

  --Effects Included--
  Ignition Effect: Instant
  Retraction Effect: Instant
  */
  //StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),
  StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(), "Noble" },

 /* Preset 6 */
 {"CODA;common", "tracks/fate_fortune.wav",
 StylePtr<Layers<
  Mix<Sin<Int<3>>,AudioFlicker<RgbArg<BASE_COLOR_ARG,DodgerBlue>,Stripes<5000,-90,Rgb<0,55,165>,Rgb<0,85,115>,Rgb<0,65,145>,Rgb<0,30,185>>>,AudioFlicker<Rgb<0,155,255>,Stripes<5000,-90,Rgb<0,95,170>,Rgb<0,115,215>,Rgb<0,145,145>,Rgb<0,65,225>>>>,
  AlphaL<BrownNoiseFlicker<DeepSkyBlue,Black,300>,SwingSpeed<400>>,
  AlphaL<Stripes<1000,-2000,RandomPerLEDFlicker<DeepSkyBlue,Black>,Black,DeepSkyBlue,Black>,SwingSpeed<525>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,240,80>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<LemonChiffon,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<875>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Yellow>>,
  EffectSequence<EFFECT_BLAST,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,LocalizedClashL<RgbArg<BLAST_COLOR_ARG,White>,80,30,EFFECT_BLAST>,ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,BlastL<RgbArg<BLAST_COLOR_ARG,White>,200,200>,ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>>,
  ResponsiveClashL<TransitionEffect<RgbArg<CLASH_COLOR_ARG,Rgb<255,240,80>>,LemonChiffon,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrInstant,Stripes<3000,-3500,Rgb<90,180,255>,RandomPerLEDFlicker<Rgb<0,26,60>,Black>,BrownNoiseFlicker<Rgb<90,180,255>,Rgb<0,26,60>,200>,RandomPerLEDFlicker<Rgb<0,42,128>,Rgb<0,26,60>>>,TrFade<400>,Stripes<3000,-3500,Rgb<90,180,255>,RandomPerLEDFlicker<Rgb<0,26,60>,Black>,BrownNoiseFlicker<Rgb<90,180,255>,Rgb<0,26,60>,200>,RandomPerLEDFlicker<Rgb<0,42,128>,Rgb<0,26,60>>>,TrFade<450>,HumpFlickerL<AlphaL<Rgb<90,180,255>,Int<19000>>,25>,TrFade<2875>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrFade<1125>,Rgb<90,180,255>,TrInstant>,EFFECT_RETRACTION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipe<500>,TrWipeIn<1125>>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrDelay<2000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrFade<1000>>,EFFECT_BATTERY_LEVEL>,
  TransitionEffectL<TrConcat<TrFade<450>,AlphaL<HumpFlickerL<RgbArg<PREON_COLOR_ARG,DeepSkyBlue>,10>,Bump<Int<0>,Int<3000>>>,TrFade<350>,AlphaL<HumpFlickerL<DeepSkyBlue,15>,Bump<Int<0>,Int<5000>>>,TrFade<450>,AlphaL<HumpFlickerL<DeepSkyBlue,20>,Bump<Int<0>,Int<7000>>>,TrFade<500>,AlphaL<HumpFlickerL<DeepSkyBlue,25>,Bump<Int<0>,Int<10500>>>,TrBoing<150,1>>,EFFECT_PREON>>>(),

  /* Accent LED Switches */

  StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),


  /* copyright Fett263 (Accent LED / PCB) OS6 Style
  https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
  OS6.5 v2.0
  Single Style
  On Behavior: Fast Turbine
  Off Behavior: Luke ROTJ (Green Arrow)

  --Effects Included--
  Ignition Effect: Instant
  Retraction Effect: Instant
  */
  //StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),
  StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(), "CODA" },


// GreyScale_Galvanic
{"Galvanic_Proffie;common", "tracks/inflection.wav",
StylePtr<Layers<
  StripesX<Sin<Int<4>,Int<800>,Int<2000>>,Scale<TwistAngle<>,Int<-50>,Int<-100>>,StripesX<Sin<Int<3>,Int<500>,Int<1500>>,Scale<TwistAngle<>,Int<25>,Int<80>>,Pulsing<RgbArg<BASE_COLOR_ARG,Rgb<50,130,255>>,Rgb<0,73,225>,3000>,Mix<Sin<Int<2>>,Rgb<0,73,225>,Rgb<80,100,150>>>,Rgb<0,75,195>,Pulsing<Rgb<0,56,90>,StripesX<Sin<Int<2>,Int<900>,Int<1750>>,Sin<Int<2>,Int<25>,Int<75>>,Mix<Sin<Int<4>>,DeepSkyBlue,Rgb<50,130,255>>,Rgb<0,50,115>>,2000>,Pulsing<Rgb<0,40,128>,Rgb<20,86,150>,3000>>,
  AlphaL<StripesX<Sin<Int<8>,Int<800>,Int<2000>>,Scale<TwistAngle<>,Int<60>,Int<140>>,StripesX<Sin<Int<6>,Int<500>,Int<1500>>,Scale<TwistAngle<>,Int<-25>,Int<-80>>,Pulsing<Mix<Sin<Int<4>>,DeepSkyBlue,Rgb<0,130,255>>,Rgb<20,100,150>,4000>,Mix<Sin<Int<2>>,Rgb<0,130,255>,Black>>,Rgb<20,100,175>,Pulsing<Rgb<0,36,80>,StripesX<Sin<Int<2>,Int<900>,Int<1750>>,Sin<Int<2>,Int<-25>,Int<-75>>,Mix<Sin<Int<4>>,DeepSkyBlue,Rgb<0,130,255>>,Rgb<0,30,96>>,2000>,Pulsing<Rgb<0,80,148>,Rgb<0,16,50>,3000>>,Int<10000>>,
  AlphaL<BrownNoiseFlicker<Rgb16<17521,5115,65535>,Black,300>,SwingSpeed<315>>,
  AlphaL<AlphaL<Stripes<2000,-4500,Rgb16<7465,49761,65535>,Rgb<0,36,60>,Pulsing<Rgb<0,17,30>,Black,800>>,Scale<IsLessThan<SwingSpeed<850>,Int<13600>>,Scale<SwingSpeed<700>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Int<13333>,Int<16000>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,225,0>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<250>,AlphaL<Strobe<White,AudioFlicker<White,Blue>,50,1>,LayerFunctions<Bump<Scale<SlowNoise<Scale<BladeAngle<24000>,Int<2100>,Int<1000>>>,Scale<BladeAngle<24000>,Int<3000>,Int<10000>>,Int<16000>>,Scale<BrownNoiseF<Int<10>>,Scale<TwistAngle<>,Int<4000>,Int<10000>>,Scale<TwistAngle<>,Int<9000>,Int<14000>>>>,Bump<Scale<SlowNoise<Int<2200>>,Scale<BladeAngle<24000>,Int<26000>,Int<18000>>,Int<8000>>,Scale<NoisySoundLevel,Scale<TwistAngle<>,Int<6000>,Int<10000>>,Scale<TwistAngle<>,Int<10000>,Int<14000>>>>,Bump<Scale<SlowNoise<Int<2300>>,Scale<BladeAngle<24000>,Int<20000>,Int<16000>>,Scale<BladeAngle<24000>,Int<30000>,Int<24000>>>,Scale<IsLessThan<SlowNoise<Int<2000>>,Int<12000>>,Scale<NoisySoundLevel,Scale<TwistAngle<>,Int<9000>,Int<5000>>,Int<0>>,Int<0>>>>>,TrFade<375>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  AlphaL<Rgb<90,180,255>,SmoothStep<Scale<SlowNoise<Int<300>>,Int<1500>,Int<5000>>,Int<-4000>>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Yellow>>,
  TransitionEffectL<TrConcat<TrDelay<100>,Layers<
    AlphaL<TransitionLoopL<TrConcat<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Int<300>,Int<400>,Int<300>,Int<32768>>>>,SmoothStep<Int<16384>,Int<-100>>>,
    AlphaL<TransitionLoopL<TrConcat<TrWaveX<White,Int<300>,Int<400>,Int<300>,Int<0>>>>,SmoothStep<Int<16384>,Int<100>>>>,TrDelay<300>>,EFFECT_BLAST>,
  TransitionEffectL<TrConcat<TrDelay<200>,Layers<
    AlphaL<TransitionLoopL<TrConcat<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Int<300>,Int<400>,Int<300>,Int<32768>>>>,SmoothStep<Int<16384>,Int<-100>>>,
    AlphaL<TransitionLoopL<TrConcat<TrWaveX<White,Int<300>,Int<400>,Int<300>,Int<0>>>>,SmoothStep<Int<16384>,Int<100>>>>,TrDelay<300>>,EFFECT_BLAST>,
  ResponsiveBlastL<SparkleL<RgbArg<BLAST_COLOR_ARG,White>,750,750>,Int<1100>,Int<250>,Int<10000>>,
  EffectSequence<EFFECT_BLAST,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,LocalizedClashL<RgbArg<BLAST_COLOR_ARG,White>,80,30,EFFECT_BLAST>,ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,BlastL<RgbArg<BLAST_COLOR_ARG,White>,200,200>,ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>>,
  ResponsiveClashL<AlphaL<Strobe<RgbArg<CLASH_COLOR_ARG,White>,AudioFlicker<White,Blue>,50,1>,LayerFunctions<Bump<Scale<SlowNoise<Scale<BladeAngle<24000>,Int<2100>,Int<1000>>>,Scale<BladeAngle<24000>,Int<3000>,Int<10000>>,Int<16000>>,Scale<BrownNoiseF<Int<10>>,Scale<TwistAngle<>,Int<4000>,Int<10000>>,Scale<TwistAngle<>,Int<9000>,Int<14000>>>>,Bump<Scale<SlowNoise<Int<2200>>,Scale<BladeAngle<24000>,Int<26000>,Int<18000>>,Int<8000>>,Scale<NoisySoundLevel,Scale<TwistAngle<>,Int<6000>,Int<10000>>,Scale<TwistAngle<>,Int<10000>,Int<14000>>>>,Bump<Scale<SlowNoise<Int<2300>>,Scale<BladeAngle<24000>,Int<20000>,Int<16000>>,Scale<BladeAngle<24000>,Int<30000>,Int<24000>>>,Scale<IsLessThan<SlowNoise<Int<2000>>,Int<12000>>,Scale<NoisySoundLevel,Scale<TwistAngle<>,Int<9000>,Int<5000>>,Int<0>>,Int<0>>>>>,TrInstant,TrFade<1100>,Int<15000>,Int<4000>,Int<32000>>,
  ResponsiveClashL<TransitionEffect<RgbArg<CLASH_COLOR_ARG,Rgb<255,225,0>>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<500>,HumpFlickerL<Rgb<100,100,150>,20>,TrFade<1300>,Rgb<75,80,110>,TrFade<400>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrFade<1000>,Rgb<100,100,150>,TrInstant>,EFFECT_RETRACTION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipe<125>,TrWipeIn<1000>>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrDelay<2000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrFade<1000>>,EFFECT_BATTERY_LEVEL>>>(),
  
    /* Accent LED Switches */

  StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),


  /* copyright Fett263 (Accent LED / PCB) OS6 Style
  https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
  OS6.5 v2.0
  Single Style
  On Behavior: Fast Turbine
  Off Behavior: Luke ROTJ (Green Arrow)

  --Effects Included--
  Ignition Effect: Instant
  Retraction Effect: Instant
  */
  //StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),
  StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(), "GALVANIC" },
  
 
 // GreyScale Omen
 {"Omen_Proffie;common", "tracks/fate_fortune.wav",
 StylePtr<Layers<
  AudioFlicker<RgbArg<BASE_COLOR_ARG,Rgb<130,0,215>>,Rgb<78,0,131>>,
  AlphaL<Stripes<2500,2000,BrownNoiseFlicker<Magenta,Black,300>,BrownNoiseFlicker<Magenta,Black,300>,DeepPink,BrownNoiseFlicker<DeepPink,Black,300>>,SwingSpeed<365>>,
  ColorSelect<WavNum<EFFECT_LOCKUP_END>,TrInstant,LockupTrL<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>>>,TrConcat<TrExtend<50,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrExtend<3000,TrFade<300>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrFade<3000>>,TrConcat<TrInstant,White,TrFade<320>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<240>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<127>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<188>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<438>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<100>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>>>,TrConcat<TrExtend<50,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrExtend<3000,TrFade<300>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrFade<3000>>,TrConcat<TrInstant,White,TrFade<315>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<DeepPink,Black,300>,TrFade<263>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<110>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<313>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<188>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<100>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>>>,TrConcat<TrExtend<50,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrExtend<3000,TrFade<300>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrFade<3000>>,TrConcat<TrInstant,White,TrFade<250>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Red,Black,300>,TrFade<312>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<DeepPink,Black,300>,TrFade<125>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<DeepPink,Black,300>,TrFade<375>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<DeepPink,Black,300>,TrFade<312>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<DeepPink,Black,300>,TrFade<100>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>>>,TrConcat<TrExtend<50,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrExtend<3000,TrFade<300>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,NavajoWhite>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrFade<3000>>,TrConcat<TrInstant,White,TrFade<250>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Magenta,Black,300>,TrFade<312>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<125>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<312>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<250>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,TrInstant,BrownNoiseFlicker<Rgb16<64971,17247,59477>,Black,300>,TrFade<100>>,SaberBase::LOCKUP_NORMAL>>,
  ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,White>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,White>,Int<16000>>,30>,TrSmoothFade<600>>>,
  AlphaL<DeepPink,SmoothStep<Scale<NoisySoundLevel,Int<1500>,Int<7500>>,Int<-4000>>>,
  ResponsiveStabL<AudioFlickerL<RgbArg<STAB_COLOR_ARG,Red>>,TrWipeInX<Percentage<WavLen<EFFECT_STAB>,50>>,TrFadeX<Percentage<WavLen<EFFECT_STAB>,50>>>,
  EffectSequence<EFFECT_BLAST,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,LocalizedClashL<RgbArg<BLAST_COLOR_ARG,White>,80,30,EFFECT_BLAST>,ResponsiveBlastWaveL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<500>,Int<200>>,Scale<SwingSpeed<400>,Int<100>,Int<400>>>,BlastL<RgbArg<BLAST_COLOR_ARG,White>,200,200>,ResponsiveBlastFadeL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<6000>,Int<12000>>,Scale<SwingSpeed<400>,Int<400>,Int<100>>>,ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Scale<SwingSpeed<400>,Int<400>,Int<100>>,Scale<SwingSpeed<400>,Int<200>,Int<100>>,Scale<SwingSpeed<400>,Int<400>,Int<200>>>>,
  Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,NavajoWhite>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,NavajoWhite>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlicker<BrownNoiseFlicker<DeepPink,Black,225>,AudioFlicker<Rgb<125,0,205>,Rgb<53,0,101>>,35>,TrDelayX<Percentage<WavLen<>,49>>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrInstant,Stripes<3000,-3500,Rgb<160,60,255>,RandomPerLEDFlicker<Rgb<21,0,52>,Black>,BrownNoiseFlicker<Rgb<160,60,255>,Rgb<21,0,52>,200>,RandomPerLEDFlicker<Rgb<42,0,105>,Rgb<21,0,52>>>,TrFadeX<Percentage<WavLen<>,49>>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<Rgb<160,60,255>,40>,TrFadeX<Percentage<WavLen<>,200>>>,EFFECT_RETRACTION>,
  LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,White>>,SmoothStep<IntArg<DRAG_SIZE_ARG,27500>,Int<5000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,29250>,Int<5000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,OrangeRed,DarkOrange>,Mix<TwistAngle<>,OrangeRed,Orange>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,26000>,Int<6000>>>,TrConcat<TrWipeIn<100>,AlphaL<Red,SmoothStep<Int<29000>,Int<8000>>>,TrExtend<2000,TrFade<300>>,AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<29000>,Int<8000>>>,TrFade<3000>>,TrFade<250>,SaberBase::LOCKUP_MELT>,
  EffectSequence<EFFECT_POWERSAVE,AlphaL<Black,Int<8192>>,AlphaL<Black,Int<16384>>,AlphaL<Black,Int<24576>>,AlphaL<Black,Int<0>>>,
  InOutTrL<TrWipeInX<Percentage<WavLen<EFFECT_IGNITION>,4>>,TrWipeX<WavLen<EFFECT_RETRACTION>>>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<BrownNoiseFlicker<Black,Rgb<125,0,205>,150>,SmoothStep<Scale<NoisySoundLevel,Int<-1500>,Int<20000>>,Int<-4000>>>,TrFadeX<WavLen<EFFECT_POSTOFF>>>,EFFECT_RETRACTION>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Rgb<125,0,205>,Bump<Scale<Trigger<EFFECT_POSTOFF,Int<0>,Int<0>,Percentage<WavLen<EFFECT_POSTOFF>,4>>,Int<0>,Int<32768>>,Int<15000>>>,TrFadeX<Percentage<WavLen<EFFECT_POSTOFF>,15>>>,EFFECT_RETRACTION>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrDelay<2000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<BatteryLevel,Int<10000>>>,TrFade<1000>>,EFFECT_BATTERY_LEVEL>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<Trigger<EFFECT_PREON,Percentage<WavLen<>,110>,Percentage<WavLen<>,50>,Percentage<WavLen<>,50>>,BrownNoiseFlicker<RgbArg<PREON_COLOR_ARG,Black>,Rgb<125,0,205>,100>,RandomPerLEDFlicker<Magenta,Rgb16<14386,0,14386>>,StyleFire<Gradient<Rgb<125,0,205>,Magenta,DeepPink,DeepPink>,Rgb<60,0,100>,0,2,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>,FireConfig<0,2000,5>>>,SmoothStep<Scale<NoisySoundLevel,Int<-1000>,Int<20000>>,Int<-4000>>>,TrDelayX<Percentage<WavLen<>,110>>>,EFFECT_PREON>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<PREON_COLOR_ARG,Rgb<125,0,205>>,Bump<Scale<Trigger<EFFECT_PREON,WavLen<>,Percentage<WavLen<>,50>,Percentage<WavLen<>,50>>,Int<0>,Int<33768>>,Int<8000>>>,TrDelayX<WavLen<>>>,EFFECT_PREON>>>(),
  
  
    /* Accent LED Switches */

  StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),


  /* copyright Fett263 (Accent LED / PCB) OS6 Style
  https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
  OS6.5 v2.0
  Single Style
  On Behavior: Fast Turbine
  Off Behavior: Luke ROTJ (Green Arrow)

  --Effects Included--
  Ignition Effect: Instant
  Retraction Effect: Instant
  */
  //StylePtr<Layers<ColorCycle<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,300,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,25,100,4000>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<0,0,255>>,TrDelay<2000>>>>>>(),
  StylePtr<Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrBoing<3000,9>,RgbArg<OFF_COLOR_ARG,Rgb<255,0,0>>,TrDelay<2000>>>>>>(), "OMEN" },
  
 

};

BladeConfig blades[] = {
  { 0, WS281XBladePtr<136, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    SimpleBladePtr<CH3LED, NoLED, NoLED, NoLED, bladePowerPin4, -1, -1, -1>(),
    SimpleBladePtr<CH3LED, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(),
    CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
