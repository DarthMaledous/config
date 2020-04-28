#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 5
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVED_PRESET
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
//RED BLADESTYLES
{ "RED", "tracks/",
//ON BOARD LED's
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Rgb<100,0,0>,Red,3200>>>(),

//MAIN BLADE
StylePtr<InOutSparkTip<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<HumpFlicker<Red,Rgb<100,0,0>,200>,Gradient<StyleFire<Red,White>,Strobe<Black,White,10,25>,Stripes<1000,5000,Red,Black,Red,White>>,TrInstant,TrSmoothFade<500>,EFFECT_LOCKUP_END>,Gradient<Strobe<Black,StyleFire<BrownNoiseFlicker<Red,White,50>,Orange,0,3>,45,25>,Pulsing<White,Red,1600>,Pulsing<White,Red,1200>,StyleFire<BrownNoiseFlicker<Red,White,50>,Orange,0,3>>,TrInstant,TrSmoothFade<800>,EFFECT_IGNITION>,Pulsing<Gradient<HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>>,Pulsing<Gradient<HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>>,Gradient<HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,95,70>,ColorSequence<500,Blinking<GreenYellow,Yellow,1000,500>,Strobe<Black,GhostWhite,15,20>,Yellow>>,200,500,Snow>>(),

//UPPER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Red>,Red,AudioFlicker<Blue,White>>,Red>,300,800>>(),

//REVEAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<TransitionEffect<BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,Blinking<Black,Red,150,500>,TrInstant,TrSmoothFade<4500>,EFFECT_IGNITION>,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),

//LOWER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),"RED" },
///////////////////////////////////////////////////////////////////////////////////////////////////


{"Pitch_Black", "tracks/",
//ON BOARD LED's
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Rgb<100,0,0>,Red,3200>>>(),

//MAIN BLADE
StylePtr<InOutSparkTip<OnSpark<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<RandomFlicker<Red,Rgb<180,0,0>>,Strobe<Red,BrownNoiseFlicker<Snow,Red,50>,15,1>,TrInstant,TrSmoothFade<500>,EFFECT_IGNITION>,Gradient<StyleFire<Red,White>,Strobe<Black,White,15,1>,StyleFire<White,Red>>,TrInstant,TrSmoothFade<300>,EFFECT_LOCKUP_END>,Pulsing<Gradient<RandomFlicker<Red,Rgb<180,0,0>>,RandomFlicker<Red,Rgb<180,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<180,0,0>>,RandomFlicker<Red,Rgb<180,0,0>>>,Gradient<RandomFlicker<Red,Rgb<180,0,0>>,RandomFlicker<Red,Rgb<180,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<180,0,0>>,RandomFlicker<Red,Rgb<180,0,0>>,RandomFlicker<Red,Rgb<180,0,0>>>,3500>,RandomPerLEDFlicker<Red,White>>,ColorSequence<500,Yellow,Snow>,120,65>,ColorSequence<500,Cyan,Green,Strobe<Black,White,15,1>>,40000>,Strobe<Red,BrownNoiseFlicker<Snow,Red,50>,15,1>,500>,200,500>>(),

//UPPER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Red>,Red,AudioFlicker<Blue,White>>,Red>,300,800>>(),

//REVEAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<TransitionEffect<BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,Blinking<Black,Red,150,500>,TrInstant,TrSmoothFade<4500>,EFFECT_IGNITION>,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),

//LOWER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(), "Pitch Black" },
///////////////////////////////////////////////////////////////////////////////////////////////////


{"The_Second", "tracks/",
//ON BOARD LED's
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Rgb<100,0,0>,Red,3200>>>(),

//MAIN BLADE
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<TransitionEffect<TransitionEffect<RandomFlicker<Red,Rgb<150,0,0>>,Gradient<StyleFire<Red,Orange,0,3>,Pulsing<Red,White,1200>,StyleFire<Orange,Red,0,3>>,TrInstant,TrSmoothFade<1600>,EFFECT_IGNITION>,Gradient<Stripes<1700,2000,Red,Yellow,Red,NavajoWhite>,Strobe<Black,White,25,1>,StyleFire<Orange,Yellow,0,3>>,TrInstant,TrSmoothFade<400>,EFFECT_LOCKUP_END>,ColorSequence<500,Yellow,Strobe<Black,Yellow,85,1>,Chartreuse>,400,100,4000>,Pulsing<Gradient<Strobe<Black,Red,50,1>,Red,White,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,White,White>,Gradient<Strobe<Black,Red,50,1>,Red,White,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Red,BrownNoiseFlicker<White,Red,50>>,3500>,Yellow>,White,90,70>,200,500>>(),

//UPPER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Red>,Red,AudioFlicker<Blue,White>>,Red>,300,800>>(),

//REVEAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<TransitionEffect<BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,Blinking<Black,Red,150,500>,TrInstant,TrSmoothFade<4500>,EFFECT_IGNITION>,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),

//LOWER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(), "The Second" },
///////////////////////////////////////////////////////////////////////////////////////////////////

{"Ascendant", "tracks/",
//ON BOARD LED's
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Rgb<100,0,0>,Red,3200>>>(),

//MAIN BLADE
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<Mix<SwingSpeed<300>,AudioFlicker<Red,Rgb<128,0,0>>,Mix<SwingSpeed<500>,AudioFlicker<Red,White>,HumpFlicker<Black,Red,50>>>,StyleFire<White,Red,0,6>,TrInstant,TrSmoothFade<1600>,EFFECT_IGNITION>,Mix<Bump<Int<32768>,Int<16000>>,AudioFlicker<Red,Rgb<128,0,0>>,RandomPerLEDFlicker<OrangeRed,White>>,TrConcat<TrWipeIn<600>,Mix<Bump<Int<32768>,Int<16000>>,AudioFlicker<Red,Rgb<128,0,0>>,RandomPerLEDFlicker<Orange,White>>,TrWipe<600>>,TrInstant,EFFECT_STAB>,White,TrInstant,TrSmoothFade<200>,EFFECT_LOCKUP_BEGIN>,StyleFire<Red,White,0,6>,TrInstant,TrSmoothFade<500>,EFFECT_LOCKUP_END>,Mix<Bump<Int<32768>,Int<10000>>,AudioFlicker<Red,Rgb<128,0,0>>,White>,TrInstant,TrFade<200>,EFFECT_DRAG_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,AudioFlicker<Red,Rgb<128,0,0>>,White>,TrInstant,TrFade<300>,EFFECT_DRAG_END>,Black,TrConcat<TrInstant,HumpFlicker<White,Red,40>,TrColorCycle<600>>,TrInstant,EFFECT_RETRACTION>,Pulsing<Gradient<Red,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>>,Gradient<BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,Red>,3500>,RandomPerLEDFlicker<Red,White>,Bump<Int<16000>,Int<20000>>,Bump<Int<32768>,Int<10000>>>>,White>,300,500>>(),

//UPPER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Red>,Red,AudioFlicker<Blue,White>>,Red>,300,800>>(),

//REVEAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<TransitionEffect<BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,Blinking<Black,Red,150,500>,TrInstant,TrSmoothFade<4500>,EFFECT_IGNITION>,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,25>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),

//LOWER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>>,Blinking<Black,BrownNoiseFlicker<Red,Rgb<100,0,0>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(), "The Second" },
///////////////////////////////////////////////////////////////////////////////////////////////////



//BLUE BLADESTYLES//

{"SK_DarkSith1", "tracks/",
// ON BOARD LED's
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<DodgerBlue,Rgb<0,0,128>,50>,BrownNoiseFlicker<DodgerBlue,Rgb<0,0,128>,50>>,Blinking<Black,BrownNoiseFlicker<DodgerBlue,Rgb<0,0,128>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Black,DodgerBlue,3200>>>(),

//MAIN BLADE
StylePtr<InOutSparkTip<OnSpark<Blast<LocalizedClash<Lockup<HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,Pulsing<Gradient<HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>>,Pulsing<Gradient<HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>>,Gradient<HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DodgerBlue,Rgb<0,0,180>,100>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,ColorSequence<500,Snow,Yellow>,120,65>,ColorSequence<500,Red,Orange,Strobe<Black,Snow,55,10>>,400>,Gradient<StyleFire<DeepSkyBlue,Strobe<Black,Snow,30,1>>,Strobe<Black,SteelBlue,50,1>,Strobe<Black,Stripes<1000,5000,DodgerBlue,Snow,DeepSkyBlue,Blue>,50,1>>,650>,200,500>>(),


//UPPER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<DodgerBlue,DodgerBlue>,DodgerBlue,AudioFlicker<Blue,White>>,DodgerBlue>,300,800>>(),

//REVEAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<TransitionEffect<BrownNoiseFlicker<DodgerBlue,Rgb<0,30,200>,25>,Blinking<Black,DodgerBlue,150,500>,TrInstant,TrSmoothFade<4500>,EFFECT_IGNITION>,BrownNoiseFlicker<DodgerBlue,Rgb<0,30,200>,50>>,Blinking<Black,BrownNoiseFlicker<DodgerBlue,Rgb<0,30,200>,50>,100,400>,AudioFlicker<Blue,White>>,DodgerBlue>,300,800,Sequence<Black,DodgerBlue,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),

//LOWER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<DodgerBlue,Rgb<0,30,200>,50>,BrownNoiseFlicker<DodgerBlue,Rgb<0,30,200>,50>>,Blinking<Black,BrownNoiseFlicker<DodgerBlue,Rgb<0,30,200>,50>,100,400>,AudioFlicker<Blue,White>>,DodgerBlue>,300,800,Sequence<Black,DodgerBlue,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),"SK Dark Sith 1"},
///////////////////////////////////////////////////////////////////////////////////////////////////



{"KSith_Ascension", "tracks/",
// ON BOARD LED's
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<DodgerBlue,Rgb<0,0,128>,50>,BrownNoiseFlicker<DodgerBlue,Rgb<0,0,128>,50>>,Blinking<Black,BrownNoiseFlicker<DodgerBlue,Rgb<0,0,128>,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Black,DodgerBlue,3200>>>(),

//MAIN BLADE
StylePtr<InOutSparkTip<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<AudioFlicker<DeepSkyBlue,Snow>,Gradient<Stripes<1000,-5000,AudioFlicker<DeepSkyBlue,Blue>,Snow,DeepSkyBlue,Blue>,Pulsing<Black,AliceBlue,1600>,StyleFire<AudioFlicker<DeepSkyBlue,Blue>,GhostWhite>,Stripes<1000,5000,AudioFlicker<DeepSkyBlue,Blue>,Snow,DeepSkyBlue,Blue>>,TrInstant,TrSmoothFade<500>,EFFECT_IGNITION>,Gradient<Stripes<1000,-5000,AudioFlicker<DeepSkyBlue,Blue>,Snow,DeepSkyBlue,Blue>,AudioFlicker<Black,DeepSkyBlue>,Stripes<1000,3000,White,DeepSkyBlue,SteelBlue,Blue>>,TrInstant,TrSmoothFade<800>,EFFECT_LOCKUP_END>,Pulsing<Gradient<AudioFlicker<DeepSkyBlue,Snow>,AudioFlicker<DeepSkyBlue,Snow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,Snow>,AudioFlicker<DeepSkyBlue,Snow>>,Gradient<AudioFlicker<DeepSkyBlue,Snow>,AudioFlicker<DeepSkyBlue,Snow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,Snow>,AudioFlicker<DeepSkyBlue,Snow>,AudioFlicker<DeepSkyBlue,Snow>>,3500>,RandomPerLEDFlicker<Red,White>>>,White>,200,500,Snow>>(),

//UPPER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<DeepSkyBlue,Blue,50>,BrownNoiseFlicker<DeepSkyBlue,Blue,50>>,Blinking<Black,BrownNoiseFlicker<DeepSkyBlue,Blue,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Black,DeepSkyBlue,3200>>>(),

// REVEAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<TransitionEffect<BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,25>,Blinking<Black,DeepSkyBlue,150,500>,TrInstant,TrSmoothFade<4500>,EFFECT_IGNITION>,BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>>,Blinking<Black,BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>,100,400>,AudioFlicker<Blue,White>>,DeepSkyBlue>,300,800,Sequence<Black,DeepSkyBlue,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),

//LOWER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>,BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>>,Blinking<Black,BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>,100,400>,AudioFlicker<Blue,White>>,DeepSkyBlue>,300,800,Sequence<Black,DeepSkyBlue,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(), "Ascension"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{"Fallen_Order", "tracks/",
//ON BOARD LED's
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<DeepSkyBlue,Blue,50>,BrownNoiseFlicker<DeepSkyBlue,Blue,50>>,Blinking<Black,BrownNoiseFlicker<DeepSkyBlue,Blue,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Black,DeepSkyBlue,3200>>>(),

//MAIN BLADE
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<TransitionEffect<TransitionEffect<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Gradient<BrownNoiseFlicker<SteelBlue,Azure,50>,White,StyleFire<SteelBlue,Blue,0,4>>,TrInstant,TrSmoothFade<1200>,EFFECT_IGNITION>,Gradient<Stripes<800,-5000,DodgerBlue,White,DeepSkyBlue,White>,Strobe<Black,White,15,1>,Stripes<1000,5000,DodgerBlue,White,DeepSkyBlue,White>>,TrInstant,TrSmoothFade<300>,EFFECT_LOCKUP_END>,White>,Pulsing<Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,Pulsing<Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,1500>,2000>,AudioFlicker<Blue,White>>>,200,500>>(),

//UPPER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<DeepSkyBlue,Blue,50>,BrownNoiseFlicker<DeepSkyBlue,Blue,50>>,Blinking<Black,BrownNoiseFlicker<DeepSkyBlue,Blue,50>,100,400>,AudioFlicker<Blue,White>>,Red>,300,800,Pulsing<Black,DeepSkyBlue,3200>>>(),

// REVEAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<TransitionEffect<BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,25>,Blinking<Black,DeepSkyBlue,150,500>,TrInstant,TrSmoothFade<4500>,EFFECT_IGNITION>,BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>>,Blinking<Black,BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>,100,400>,AudioFlicker<Blue,White>>,DeepSkyBlue>,300,800,Sequence<Black,DeepSkyBlue,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(),

//LOWER CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>,BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>>,Blinking<Black,BrownNoiseFlicker<DeepSkyBlue,Rgb<0,30,200>,50>,100,400>,AudioFlicker<Blue,White>>,DeepSkyBlue>,300,800,Sequence<Black,DeepSkyBlue,500,37,0b1010100011100,0b111000111000101,0b100000000000000>>>(), "Fallen Order"},
///////////////////////////////////////////////////////////////////////////////////////////////////


{ "Calibrate", "tracks/Battery_Charge22.wav",
 &style_charging,
 StyleNormalPtr<BLACK, BLACK, 300, 800>(), 
 StyleNormalPtr<Pulsing<Red, Rgb<50,0,0>, 5000>, White, 300, 800, Red>(), 
 StyleNormalPtr<Sequence<Red,Black,100,37,0b1010100011100,0b111000111000101,0b100000000000000>,White,300,800,Red>(), 
 StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};


BladeConfig blades[] = {
	{ 0,
// 5 ACCENT LED', MAIN BLADE & UPPER CRYSTAL CHAMBER
		SubBlade(0, 4, WS281XBladePtr<130, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()),
		SubBlade(5, 129, NULL),
//		SubBlade(130, 130, NULL),

// UPPER CRYSTAL CHAMBER
		WS281XBladePtr<1, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin6> >(),

// REVEAL & LOWERCRYSTAL CHAMBER LED's
		SubBlade(0, 0, WS281XBladePtr<2, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin4, bladePowerPin5> >()),
		SubBlade(1,1, NULL),
	CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
