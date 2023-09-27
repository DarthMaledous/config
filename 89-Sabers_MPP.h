#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2200
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
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

/* Main Blade */
{"The_Dark_Lord;common", "tracks/fate_fortune.wav",
StylePtr<Layers<
  Stripes<10000,-1700,RgbArg<BASE_COLOR_ARG,Rgb<80,0,0>>,Red,Rgb<128,0,0>,Rgb<50,0,0>,Red>,
  TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,
  AlphaL<AlphaL<NavajoWhite,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Scale<Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>,Int<28000>,Int<14000>>,Int<16000>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,150,0>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<RgbArg<LB_COLOR_ARG,Rgb<125,125,225>>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Orange>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveBlastWaveL<TransitionEffect<RgbArg<BLAST_COLOR_ARG,Rgb<255,225,0>>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,
  TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>>,
  TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RgbArg<PREON_COLOR_ARG,Rgb<120,120,165>>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(), "Preset 1"},
 

//////////////////////////////////////////////////////////////////////////////////////////////

/* Main Blade */
{"Masterless;common", "tracks/Dark_Deeds_SWTOR.wav",
StylePtr<Layers<
  Stripes<16000,-1000,RgbArg<BASE_COLOR_ARG,Red>,Pulsing<Rgb<90,0,0>,Red,800>,Red>,
  TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<Red,Rgb<160,0,0>>,TrDelay<30000>,Red,TrFade<800>>,EFFECT_FORCE>,
  TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,
  AlphaL<AlphaL<NavajoWhite,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Scale<Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>,Int<28000>,Int<14000>>,Int<16000>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,150,0>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<RgbArg<LB_COLOR_ARG,Rgb<125,125,225>>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Orange>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveBlastWaveL<TransitionEffect<RgbArg<BLAST_COLOR_ARG,Rgb<255,225,0>>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,
  TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipeX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<200>,Int<500>>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>>,
  TransitionEffectL<TrConcat<TrFade<1500>,AlphaL<Pulsing<RgbArg<PREON_COLOR_ARG,Red>,Red,500>,Bump<Int<0>,Int<5000>>>,TrBoing<3000,5>,AlphaL<Pulsing<Red,Red,500>,Bump<Int<0>,Int<6000>>>,TrBoing<3500,10>>,EFFECT_PREON>>>(), "Preset 2"},


//////////////////////////////////////////////////////////////////////////////////////////////

/* Main Blade */
{"RogueVader;common", "tracks/vader-r1.wav",
StylePtr<Layers<
  Stripes<10000,-1700,RgbArg<BASE_COLOR_ARG,Rgb<80,0,0>>,Red,Rgb<128,0,0>,Rgb<50,0,0>,Red>,
  TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,
  AlphaL<AlphaL<NavajoWhite,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Scale<Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>,Int<28000>,Int<14000>>,Int<16000>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,150,0>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<RgbArg<LB_COLOR_ARG,Rgb<125,125,225>>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Orange>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveBlastWaveL<TransitionEffect<RgbArg<BLAST_COLOR_ARG,Rgb<255,225,0>>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,
  TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>>,
  TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RgbArg<PREON_COLOR_ARG,Rgb<120,120,165>>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(), "Preset 3"},
 

//////////////////////////////////////////////////////////////////////////////////////////////

/* Main Blade */
	{"Black_Bishop;common", "tracks/darth_sidious.wav",
StylePtr<Layers<
  Stripes<10000,-1700,RgbArg<BASE_COLOR_ARG,Rgb<80,0,0>>,Red,Rgb<128,0,0>,Rgb<50,0,0>,Red>,
  TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,
  AlphaL<AlphaL<NavajoWhite,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Scale<Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>,Int<28000>,Int<14000>>,Int<16000>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,150,0>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<RgbArg<LB_COLOR_ARG,Rgb<125,125,225>>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Orange>>,
  ResponsiveBlastL<RgbArg<BLAST_COLOR_ARG,White>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveBlastWaveL<TransitionEffect<RgbArg<BLAST_COLOR_ARG,Rgb<255,225,0>>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,
  TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>>,
  TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RgbArg<PREON_COLOR_ARG,Rgb<120,120,165>>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(), "Preset 4"},


//////////////////////////////////////////////////////////////////////////////////////////////

/* Main Blade */
	{"vader_Proffie;common", "tracks/aspirations.wav",
StylePtr<Layers<
  RandomFlicker<RgbArg<BASE_COLOR_ARG,Red>,Rgb<200,0,0>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,225,0>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<RgbArg<STAB_COLOR_ARG,Orange>>,
  ResponsiveBlastWaveL<TransitionEffect<RgbArg<BLAST_COLOR_ARG,Rgb<255,225,0>>,NavajoWhite,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveClashL<TransitionEffect<RgbArg<CLASH_COLOR_ARG,Rgb<255,225,0>>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<Rgb<255,150,150>>,TrFade<1200>>,EFFECT_IGNITION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>>,
  TransitionEffectL<TrConcat<TrBoing<3000,5>,AlphaL<BrownNoiseFlickerL<RgbArg<PREON_COLOR_ARG,Red>,Int<100>>,Bump<Int<0>,Int<4000>>>,TrBoing<3000,3>,Black,TrBoing<1400,3>,AlphaL<BrownNoiseFlickerL<Red,Int<200>>,Bump<Int<0>,Int<6000>>>,TrBoing<550,3>>,EFFECT_PREON>>>(), "Preset 5"},
	 

//////////////////////////////////////////////////////////////////////////////////////////////


	 
  
  
  { "Calibrate", "tracks/Battery_Charge1.wav",
  	&style_charging, "Battery\nLevel"}
 
};

BladeConfig blades[] = {
  { 0, WS281XBladePtr<125, bladePin, Color8::GRB, PowerPINS<bladePowerPin4> >(),
  CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
 
 
  