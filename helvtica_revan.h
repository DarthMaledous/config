#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 2600
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVED_PRESET
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
// PRESET #1 MAIN BLADE
{ "Energy", "tracks/Energy_Saber.wav",
StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<RandomFlicker<Rgb<200,5,255>,Black>,Cylon<GhostWhite,50,100,Blinking<RandomPerLEDFlicker<GreenYellow,Red>,BrownNoiseFlicker<Pink,OrangeRed,50>,100,500>,25,37,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,BrownNoiseFlicker<GhostWhite,Black,75>,1200>,190,500>>(),

// PRESET #1 ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Energy"},


// PRESET #2 MAIN BLADE
{ "cyber", "tracks/Darth_Bane.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Pulsing<Gradient<Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>>,Pulsing<Gradient<Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>>,Gradient<Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,50>,2000>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,AudioFlicker<Yellow,Orange>,120>,AudioFlicker<GreenYellow,Green>>,Gradient<HumpFlicker<Rgb16<25151,1,1>,Red,50>,RandomFlicker<DodgerBlue,Cyan>>,1500>,200,500>>(),
 
 //PRESET #2 ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Cyber"},
 
  
 
 // PRESET #3 MAIN LEDs
 {"Korriban", "tracks/Malgus.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Rgb<90,0,255>,Pulsing<Gradient<Rgb<90,0,255>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<90,0,255>,Rgb<90,0,255>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<90,0,255>,Rgb<90,0,255>>,Pulsing<Gradient<Rgb<90,0,255>,Rgb<90,0,255>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<90,0,255>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<90,0,255>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<90,0,255>>,Gradient<Rgb<90,0,255>,Rgb<90,0,255>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<90,0,255>,Rgb<90,0,255>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<90,0,255>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,100,80>,BrownNoiseFlicker<Yellow,Black,10>,1500,150>,HumpFlicker<Black,LightCyan,50>,1500>,200,500>>(),
 
 
 // PRESET # 3 ACCENT LEDs
 StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Korriban"},
 
 
 
 
 
 // PRESET #4 MAIN LEDs
{"Ascendant", "tracks/darth_nihilus.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Rgb<211,65,253>,Pulsing<Gradient<Rgb<211,65,253>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<211,65,253>,Rgb<211,65,253>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<211,65,253>,Rgb<211,65,253>>,Pulsing<Gradient<Rgb<211,65,253>,Rgb<211,65,253>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<211,65,253>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<211,65,253>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<211,65,253>>,Gradient<Rgb<211,65,253>,Rgb<211,65,253>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<211,65,253>,Rgb<211,65,253>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Rgb<211,65,253>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,100,80>,LightCyan,1500>,White,1000>,200,500>>(),


// PRESET #4 ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Ascendant"},





// PRESET #5 MAIN LEDs
{"Darkness_Proffie", "tracks/SW_AST2.wav",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<Rgb<125,0,200>,Magenta>,Pulsing<Gradient<RandomFlicker<Rgb<125,0,200>,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,200>,Magenta>,RandomFlicker<Rgb<125,0,200>,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,200>,Magenta>,RandomFlicker<Rgb<125,0,200>,Magenta>>,Pulsing<Gradient<RandomFlicker<Rgb<125,0,200>,Magenta>,RandomFlicker<Rgb<125,0,200>,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,200>,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,200>,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,200>,Magenta>>,Gradient<RandomFlicker<Rgb<125,0,200>,Magenta>,RandomFlicker<Rgb<125,0,200>,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,200>,Magenta>,RandomFlicker<Rgb<125,0,200>,Magenta>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,200>,Magenta>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,AudioFlicker<Blue,White>,100,90>,White>,White,400>,185,500>>(),

//PRESET #5 ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Darkness_Proffie"},




// PRESET #6 MAIN LEDs
{"Sith_Lord", "tracks/Malgus.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,Pulsing<Gradient<AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb <211,65,253>
,Rgb<90,0,255>>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>>,Pulsing<Gradient<AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>>,Gradient<AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<211,65,253>,Rgb<90,0,255>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,NavajoWhite,80>,NavajoWhite>,Gradient<HumpFlicker<Rgb16<38826,27207,57880>,Snow,50>,HumpFlicker<Rgb<211,65,253>,Snow,50>,BrownNoiseFlicker<Rgb<90,0,255>,Snow,50>>,1500>,200,500>>(),


//PRESET #6 ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Sith_Lord"},
 
 
 
  
 // PRESET #7 MAIN LEDs
 {"KSith_Vengeance_SS", "tracks/Immortal_Emperor.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Pulsing<Gradient<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>>,Pulsing<Gradient<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>>,Gradient<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,100,80>,Yellow>,White,400>,200,500>>(),
 
 
 // PRESET #7 ACCENT LEDs
 StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Vengeance"},



// PRESET #8 MAIN LEDs
 {"Violence", "tracks/Valkorian.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Pulsing<Gradient<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>>,Pulsing<Gradient<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>>,Gradient<BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,2,255>,100>,50,1>,BrownNoiseFlicker<Magenta,Rgb<90,0,255>,90>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,100,80>,Yellow>,White,400>,200,500>>(),
  
 
 // PRESET #8 ACCENT LEDs
 StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Violence"},
 
 
 
 
 
 // PRESET #9 MAIN BLADE
 {"Bespin_SS", "",
 StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<RandomFlicker<Rgb<200,5,255>,Black>,Cylon<GhostWhite,50,100,Blinking<RandomPerLEDFlicker<GreenYellow,Red>,BrownNoiseFlicker<Pink,OrangeRed,50>,100,500>,25,37,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,BrownNoiseFlicker<GhostWhite,Black,75>,1200>,190,500>>(),
 
 
 
 // PRESET #9 ACCENT LEDs
 StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Bespin_SS"},
 
 
 
 
 
 //PRESET #10 MAIN LEDs
 {"Unlightstable", "tracks/KyloTheme.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Pulsing<Gradient<Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,100>,50,1>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,100>,50,1>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>>,Pulsing<Gradient<Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,100>,50,1>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,100>,50,1>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,100>,50,1>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>>,Gradient<Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,100>,50,1>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>,Strobe<White,BrownNoiseFlicker<PapayaWhip,Rgb<90,0,255>,100>,50,1>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,GhostWhite,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,75>,BrownNoiseFlicker<Rgb<211,65,253>,Black,50>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Orange,125,80>,Yellow>,White,400>,200,500>>(),
 
 
 
 //PRESET #10 ACCENT LEDs
 StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,35,1>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,Yellow>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Cylon<Black,10,17,Pulsing<Yellow,Red,350>,10,115,10>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,AudioFlicker<Blue,White>>,Gradient<AudioFlicker<Rgb<90,0,255>,FloralWhite>,Pulsing<BrownNoiseFlicker<Yellow,Orange,100>,BrownNoiseFlicker<White,Red,50>,250>,AudioFlicker<Rgb<90,0,255>,FloralWhite>>,120>,200,400,Cylon<Pulsing<Rgb<211,65,253>,Red,500>,10,17,Pulsing<Rgb<211,65,253>,Red,500>,10,17,1>>>(), "Unlightstable"},
 
 };
BladeConfig blades[] = {
 { 0, WS2811BladePtr<118, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
    WS2811BladePtr<6, WS2811_ACTUALLY_800kHz | WS2811_GRB, blade2Pin, PowerPINS<bladePowerPin4> >()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
 

 