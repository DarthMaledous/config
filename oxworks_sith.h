#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 1
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define COLOR_CHANGE_DIRECT
#define IDLE_OFF_TIME 90 * 1000
#define SA22C_TWIST_ON
#define SA22C_TWIST_OFF
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
//MAIN BLADE
{"Transfer_Blade", "tracks/",
StylePtr<Layers<
  RandomFlicker<Rgb<130,40,230>,Rgb<95,0,210>>,
  TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
  ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveBlastWaveL<Yellow,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveClashL<Yellow,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<RotateColorsX<Variation,Rgb<160,60,255>>,40>,TrFade<1200>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<RotateColorsX<Variation,Rgb<160,60,255>>,40>,TrFade<1200>>,EFFECT_RETRACTION>,
  ResponsiveStabL<Red>,
  ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(),

//ACCENT LED's
StylePtr<IgnitionDelay<1000,Layers<
  Yellow,
  BlastL<Blinking<Yellow,Black,70,500>>,
  LockupL<AudioFlicker<Blue,White>>,
  SimpleClashL<Blinking<Black,Yellow,150,500>>,
InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Pulsing<Black,Yellow,5000>>>>>(),

//SWITCH LED
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,75,37,0b1010100011100,0b111000111000101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Blinking<Red,Black,2000,200>>>>(), "Preset1"},
///////////////////////////////////////////////////////////////////////////////////////////////////


//MAIN BLADE
{"Rule_Of_Two", "tracks/",
StylePtr<Layers<Stripes<2000,-2500,RotateColorsX<Variation,Red>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<60,0,0>>,Black>,BrownNoiseFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<30,0,0>>,200>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<80,0,0>>,RotateColorsX<Variation,Rgb<30,0,0>>>>,TransitionLoopL<TrConcat<TrWaveX<RandomFlicker<RotateColorsX<Variation,Red>,BrownNoiseFlicker<RotateColorsX<Variation,Rgb<80,0,0>>,Black,300>>,Int<400>,Int<100>,Int<200>,Int<0>>,AlphaL<Red,Int<0>>,TrDelayX<Scale<SlowNoise<Int<1500>>,Int<200>,Int<1200>>>>>,AlphaL<Mix<SwingSpeed<500>,Red,Orange,White>,Scale<SwingSpeed<400>,Int<0>,Int<32768>>>,TransitionEffectL<TrConcat<TrInstant,White,TrFade<800>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<RotateColorsX<Variation,Rgb<255,150,150>>,Bump<Int<0>,Int<8000>>>,SparkleL<White,100,400>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>,40>,TrFade<1200>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>,40>,TrFade<1200>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,150>,TrWipeIn<600>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

//ACCENT LED's
StylePtr<IgnitionDelay<1000,Layers<
  Yellow,
  BlastL<Blinking<Yellow,Black,70,500>>,
  LockupL<AudioFlicker<Blue,White>>,
  SimpleClashL<Blinking<Black,Yellow,150,500>>,
InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Pulsing<Black,Yellow,5000>>>>>(), 

//SWITCH LED
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,75,37,0b1010100011100,0b111000111000101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Blinking<Red,Black,2000,200>>>>(), "Preset2"},
///////////////////////////////////////////////////////////////////////////////////////////////////

//MAIN BLADE
{"Ignition", "tracks/",
StylePtr<Layers<
  BrownNoiseFlicker<Orange,Rgb<150,50,10>,50>,
  AlphaL<RandomPerLEDFlickerL<Black>,SwingSpeed<400>>,
  TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
  ResponsiveLockupL<Strobe<Yellow,BrownNoiseFlicker<White,Chartreuse,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  ResponsiveBlastWaveL<Chartreuse,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveBlastWaveL<Chartreuse,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<1000>>,EFFECT_RETRACTION>,
  ResponsiveStabL<Red>,
  ResponsiveDragL<BrownNoiseFlickerL<Chartreuse,Int<300>>,TrWipeIn<400>,TrFade<400>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,
  InOutTrL<TrConcat<TrWipe<200>,StyleFire<Stripes<2500,5000,BrownNoiseFlicker<RotateColorsX<Variation,DarkOrange>,Black,20>,RotateColorsX<Variation,Rgb<10,1,0>>,BrownNoiseFlicker<Black,RotateColorsX<Variation,Rgb<255,59,25>>,70>,RotateColorsX<Variation,Rgb<128,34,0>>>,RotateColorsX<Variation,Rgb<80,11,0>>,0,5,FireConfig<2,3000,0>,FireConfig<2,3000,0>,FireConfig<2,3000,0>,FireConfig<2,3000,0>>,TrWipe<100>,Black,TrBoing<300,3>>,TrWipeInSparkTip<White,1000>>,
  TransitionEffectL<TrConcat<TrInstant,StyleFire<White,Rgb<50,50,50>,0,6,FireConfig<2,1200,5>,FireConfig<0,0,0>,FireConfig<0,0,0>,FireConfig<2,1200,5>>,TrWipe<200>,StyleFire<White,Rgb<50,50,50>,0,6,FireConfig<2,1200,5>,FireConfig<0,0,0>,FireConfig<0,0,0>,FireConfig<2,1200,5>>,TrBoing<600,3>>,EFFECT_PREON>>>(),
  
//ACCENT LED's
StylePtr<IgnitionDelay<1000,Layers<
  Yellow,
  BlastL<Blinking<Yellow,Black,70,500>>,
  LockupL<AudioFlicker<Blue,White>>,
  SimpleClashL<Blinking<Black,Yellow,150,500>>,
InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Pulsing<Black,Yellow,5000>>>>>(), 

//SWITCH LED
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,75,37,0b1010100011100,0b111000111000101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Blinking<Red,Black,2000,200>>>>(), "Preset3"},
///////////////////////////////////////////////////////////////////////////////////////////////////


//MAIN BLADE
{"PhotonbladeV2", "tracks/",
StylePtr<Layers<ColorChange<TrWipeIn<500>,HumpFlicker<Rgb<95,0,210>,Rgb<21,0,52>,40>,AudioFlicker<Red,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<AlphaL<Stripes<1000,-2000,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,Black>,Black,RotateColorsX<Variation,Rgb<95,0,210>>,Black>,SwingSpeed<600>>,SmoothStep<Scale<SwingSpeed<600>,Int<28000>,Int<14000>>,Int<16000>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastFadeL<Rgb<255,225,0>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<NavajoWhite,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrJoin<TrWipe<500>,TrWipeIn<500>>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

//ACCENT LED's
StylePtr<IgnitionDelay<1000,Layers<
  Yellow,
  BlastL<Blinking<Yellow,Black,70,500>>,
  LockupL<AudioFlicker<Blue,White>>,
  SimpleClashL<Blinking<Black,Yellow,150,500>>,
InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Pulsing<Black,Yellow,5000>>>>>(), 

//SWITCH LED
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,75,37,0b1010100011100,0b111000111000101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Blinking<Red,Black,2000,200>>>>(), "Preset4"},
///////////////////////////////////////////////////////////////////////////////////////////////////


//MAIN BLADE
{"FallenOrder", "tracks/",
StylePtr<Layers<Stripes<6000,-3000,RotateColorsX<Variation,Rgb<48,0,105>>,RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<22,0,49>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,AlphaL<AlphaL<Stripes<1000,-2000,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,Black>,Black,RotateColorsX<Variation,Rgb<95,0,210>>,Black>,SwingSpeed<600>>,SmoothStep<Scale<SwingSpeed<600>,Int<28000>,Int<14000>>,Int<16000>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Azure>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Azure,White,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<White,Azure,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>,Stripes<1500,-2500,TransitionEffect<White,Azure,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastFadeL<Azure,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<White,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<200>,Int<350>>>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

//ACCENT LED's
StylePtr<IgnitionDelay<1000,Layers<
  Yellow,
  BlastL<Blinking<Yellow,Black,70,500>>,
  LockupL<AudioFlicker<Blue,White>>,
  SimpleClashL<Blinking<Black,Yellow,150,500>>,
InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Pulsing<Black,Yellow,5000>>>>>(), 

//SWITCH LED
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,75,37,0b1010100011100,0b111000111000101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Blinking<Red,Black,2000,200>>>>(), "Preset5"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{"troy", "tracks/",
StylePtr<Layers<
  Layers<
    Mix<Int<16384>,Rgb<95,0,210>,White>,
    HumpFlickerL<Mix<Int<4096>,Rgb<130,40,230>,Rgb<42,0,110>>,25>>,
  BlastL<Yellow>,
  LockupL<AudioFlicker<Blue,White>,AudioFlicker<Blue,White>,Int<32768>,SmoothStep<Int<28671>,Int<4096>>,LayerFunctions<Bump<Scale<SlowNoise<Int<20000>>,Int<3000>,Int<16000>>,Scale<BrownNoiseF<Int<10>>,Int<14000>,Int<8000>>>,Bump<Scale<SlowNoise<Int<2300>>,Int<26000>,Int<8000>>,Scale<NoisySoundLevel,Int<5000>,Int<10000>>>,Bump<Scale<SlowNoise<Int<2300>>,Int<20000>,Int<30000>>,Scale<IsLessThan<SlowNoise<Int<1500>>,Int<8000>>,Scale<NoisySoundLevel,Int<5000>,Int<0>>,Int<0>>>>>,
  ResponsiveBlastFadeL<Blinking<White,Chartreuse,300,650>,Int<8000>,Int<400>,Int<28000>,Int<8000>,EFFECT_CLASH>,
  TransitionEffectL<TrConcat<TrFade<300>,Gradient<Black,White,Black>,TrFade<1200>>,EFFECT_IGNITION>,
  InOutHelperL<InOutFuncX<Int<200>,Int<800>>>,
  TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

//ACCENT LED's
StylePtr<IgnitionDelay<1000,Layers<
  Yellow,
  BlastL<Blinking<Yellow,Black,70,500>>,
  LockupL<AudioFlicker<Blue,White>>,
  SimpleClashL<Blinking<Black,Yellow,150,500>>,
InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Pulsing<Black,Yellow,5000>>>>>(), 

//SWITCH LED
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,75,37,0b1010100011100,0b111000111000101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Blinking<Red,Black,2000,200>>>>(), "Preset6"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{"Prodigal_Butcher", "tracks/track4.wav",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<42,0,110>>>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<160,60,255>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<160,60,255>>>,TrFade<800>>,EFFECT_FORCE>,AlphaL<NavajoWhite,SwingSpeed<600>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,225,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<NavajoWhite,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>,Stripes<1500,-2500,TransitionEffect<NavajoWhite,Rgb<255,225,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<95,0,210>>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveBlastL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<400>,Int<100>,Int<400>,Int<28000>,Int<8000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<RotateColorsX<Variation,Rgb<160,60,255>>,40>,TrFade<1200>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoin<TrWipe<300>,TrWipeIn<300>>,TrJoinR<TrWipe<500>,TrWipeIn<500>>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(), 

//ACCENT LED's
StylePtr<IgnitionDelay<1000,Layers<
  Yellow,
  BlastL<Blinking<Yellow,Black,70,500>>,
  LockupL<AudioFlicker<Blue,White>>,
  SimpleClashL<Blinking<Black,Yellow,150,500>>,
InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Pulsing<Black,Yellow,5000>>>>>(), 

//SWITCH LED
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,75,37,0b1010100011100,0b111000111000101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Blinking<Red,Black,2000,200>>>>(), "Preset7"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{"ROTS", "tracks/darth_sidious.wav",
StylePtr<Layers<
  Layers<
    RandomFlicker<Red,Rgb<200,0,0>>>,
  ResponsiveBlastWaveL<MultiTransitionEffect<GreenYellow,LightYellow,TrWipe<50>,TrWipe<50>,EFFECT_BLAST>>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  ResponsiveLightningBlockL<Gradient<White,Blue,White>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Orange,Yellow>,TrInstant,TrInstant>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>,Int<6000>,Int<20000>>,
  TransitionEffectL<TrConcat<TrFade<1000>,Gradient<Black,Pulsing<Snow,Red,1600>,Pulsing<Snow,Tomato,1400>,Black>,TrFade<300>>,EFFECT_IGNITION>,
  InOutHelperL<InOutFuncX<Int<200>,Int<650>>>>>(),
  
//ACCENT LED's
StylePtr<IgnitionDelay<1000,Layers<
  Yellow,
  BlastL<Blinking<Yellow,Black,70,500>>,
  LockupL<AudioFlicker<Blue,White>>,
  SimpleClashL<Blinking<Black,Yellow,150,500>>,
InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Pulsing<Black,Yellow,5000>>>>>(), 

//SWITCH LED
StylePtr<Layers<
  Layers<
    Black,
    SequenceL<Red,75,37,0b1010100011100,0b111000111000101,0b100000000000000>>,
  InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Blinking<Red,Black,2000,200>>>>(), "Preset8"},
///////////////////////////////////////////////////////////////////////////////////////////////////  

{ "Calibrate", "tracks/Battery_Charge1.wav",
&style_charging,
StyleNormalPtr<Pulsing<Black,RandomFlicker<Yellow,Black>,5000>,Black,300,800>(), 
StyleNormalPtr<Pulsing<Black,RandomFlicker<Red,Black>,2500>,Black,300,800>(), "Battery\nLevel"}
};

// Yellow LED map
struct YELLOWLED {
static constexpr float MaxAmps = 1.0;
static constexpr float MaxVolts = 1000.0;
static constexpr float P2Amps = 0.0;
static constexpr float P2Volts = 0.0;
static constexpr float R = 0.0;
static const int Red = 255;
static const int Green = 255;
static const int Blue = 0;
};

BladeConfig blades[] = {
 { 0, WS281XBladePtr<122, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
 SimpleBladePtr<YELLOWLED, NoLED, NoLED, NoLED, bladePowerPin4, -1, -1, -1>(),
 SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(),
 CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
