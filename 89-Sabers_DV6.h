#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 4
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
//#define FETT263_SWING_ON_NO_BM
//#define FETT263_SWING_ON_PREON
//#define FETT263_TWIST_OFF
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {

// MAIN BLADE
{"The_Dark_Lord", "tracks/",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<AlphaL<NavajoWhite,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Scale<Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>,Int<28000>,Int<14000>>,Int<16000>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<200>,Int<500>>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>,Black>,TransitionEffectL<TrConcat<TrFade<1500>,AlphaL<Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Red>,500>,Bump<Int<0>,Int<5000>>>,TrBoing<3000,5>,AlphaL<Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Red>,500>,Bump<Int<0>,Int<6000>>>,TrBoing<3500,10>>,EFFECT_PREON>>>(),

// ACCENT LED's 
//Sub-blade #1 (first 2 pixels)	
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  //Sub-blade #2 (center 2 pixels)
  StylePtr<Layers<
  Layers<
    Chartreuse,
    PulsingL<Yellow,Int<800>>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Black,Chartreuse,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  
  //Sub-blade #3 (top 2 pixels)
  StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(), "preset1"},
/////////////////////////////////////////////////////////////////////


// MAIN BLADE
{"Legion", "tracks/",
StylePtr<Layers<Stripes<16000,-1000,RotateColorsX<Variation,Red>,Pulsing<RotateColorsX<Variation,Rgb<90,0,0>>,RotateColorsX<Variation,Red>,800>,RotateColorsX<Variation,Red>>,TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<160,0,0>>>,TrDelay<30000>,RotateColorsX<Variation,Red>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<AlphaL<NavajoWhite,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Scale<Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>,Int<28000>,Int<14000>>,Int<16000>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<200>,Int<500>>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>,Black>,TransitionEffectL<TrConcat<TrFade<1500>,AlphaL<Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Red>,500>,Bump<Int<0>,Int<5000>>>,TrBoing<3000,5>,AlphaL<Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Red>,500>,Bump<Int<0>,Int<6000>>>,TrBoing<3500,10>>,EFFECT_PREON>>>(),

// ACCENT LED's 
//Sub-blade #1 (first 2 pixels)	
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  //Sub-blade #2 (center 2 pixels)
  StylePtr<Layers<
  Layers<
    Chartreuse,
    PulsingL<Yellow,Int<800>>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Black,Chartreuse,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  
  //Sub-blade #3 (top 2 pixels)
  StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(), "preset2"},
/////////////////////////////////////////////////////////////////////  

//MAIN BLADE
{"RogueVader", "tracks/vader-r1.wav",
StylePtr<Layers<Stripes<10000,-1700,RotateColorsX<Variation,Rgb<80,0,0>>,RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>,RotateColorsX<Variation,Rgb<50,0,0>>,RotateColorsX<Variation,Red>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<AlphaL<NavajoWhite,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Scale<Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>,Int<28000>,Int<14000>>,Int<16000>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

// ACCENT LED's 
//Sub-blade #1 (first 2 pixels)	
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  //Sub-blade #2 (center 2 pixels)
  StylePtr<Layers<
  Layers<
    Chartreuse,
    PulsingL<Yellow,Int<800>>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Black,Chartreuse,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  
  //Sub-blade #3 (top 2 pixels)
  StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(), "preset3"},
/////////////////////////////////////////////////////////////////////


// MAIN BLADE
{"Black_Bishop", "tracks/darth_sidious.wav",
StylePtr<Layers<Stripes<10000,-1700,RotateColorsX<Variation,Rgb<80,0,0>>,RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>,RotateColorsX<Variation,Rgb<50,0,0>>,RotateColorsX<Variation,Red>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<AlphaL<NavajoWhite,Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>>,SmoothStep<Scale<Scale<IsLessThan<SwingSpeed<600>,Int<13600>>,Scale<SwingSpeed<600>,Int<-19300>,Int<32768>>,Int<0>>,Int<28000>,Int<14000>>,Int<16000>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

// ACCENT LED's 
//Sub-blade #1 (first 2 pixels)	
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  //Sub-blade #2 (center 2 pixels)
  StylePtr<Layers<
  Layers<
    Chartreuse,
    PulsingL<Yellow,Int<800>>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Black,Chartreuse,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  
  //Sub-blade #3 (top 2 pixels)
  StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(), "preset4"},
///////////////////////////////////////////////////////////////////// 

//MAIN BLADE
{"Vader_Proffie", "tracks/",
StylePtr<Layers<
  RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<200,0,0>>>,
  LockupTrL<Layers<
    AlphaL<AudioFlickerL<Rgb<255,225,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
    AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveStabL<Orange>,
  ResponsiveBlastWaveL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveClashL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrFade<1200>>,EFFECT_IGNITION>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<300>>>>,
  TransitionEffectL<TrConcat<TrBoing<3000,5>,AlphaL<BrownNoiseFlickerL<RotateColorsX<Variation,Red>,Int<100>>,Bump<Int<0>,Int<4000>>>,TrBoing<3000,3>,Black,TrBoing<1400,3>,AlphaL<BrownNoiseFlickerL<RotateColorsX<Variation,Red>,Int<200>>,Bump<Int<0>,Int<6000>>>,TrBoing<550,3>>,EFFECT_PREON>>>(),
  // ACCENT LED's 
//Sub-blade #1 (first 2 pixels)	
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  //Sub-blade #2 (center 2 pixels)
  StylePtr<Layers<
  Layers<
    Chartreuse,
    PulsingL<Yellow,Int<800>>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Black,Chartreuse,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(),
  
  
  //Sub-blade #3 (top 2 pixels)
  StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,95,37,0b1010101010101,0b110010110100101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,150,37,0b1010100011100,0b111000111000101,0b100000000000000>>>>(), "preset5"},
///////////////////////////////////////////////////////////////////// 
  

  { "Calibrate", "tracks/Battery_Charge1.wav",
    &style_charging,
    &style_charging, 
	&style_charging,
	&style_charging, "Battery\nLevel"}
 
};

BladeConfig blades[] = {
 { 0, 
		WS281XBladePtr<125, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
		SubBlade(0, 1, WS281XBladePtr<6, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin4> >()),
		SubBlade(2, 3, NULL),
		SubBlade(4, 5, NULL),
CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
