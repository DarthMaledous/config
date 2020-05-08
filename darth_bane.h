#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 1
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
{ "Korriban_SS", "tracks/SW_AST2.wav",
StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<HumpFlicker<Orange,Red,50>,Cylon<GhostWhite,50,100,RandomPerLEDFlicker<Magenta,Cyan>,40,25,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,White,800>,190,500>>(), "red_orange"},
 
 
 { "Energy", "tracks/Energy_Saber.wav",
 StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<RandomFlicker<Rgb<200,5,255>,Black>,Cylon<GhostWhite,50,100,Blinking<RandomPerLEDFlicker<GreenYellow,Red>,BrownNoiseFlicker<Pink,OrangeRed,50>,100,500>,25,37,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,BrownNoiseFlicker<GhostWhite,Black,75>,1200>,190,500>>(), "purple"},
   

{ "The_Counts_Claw", "tracks/Immortal_Emperor.wav",
 StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<RandomFlicker<Red,Tomato>,Cylon<GhostWhite,50,100,Blinking<RandomPerLEDFlicker<GreenYellow,Red>,BrownNoiseFlicker<Pink,OrangeRed,50>,100,500>,25,37,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,White,800>,190,500>>(), "red"},
	

{ "Jedi_Killer", "tracks/kylo2.wav",
StylePtr<InOutHelper<OriginalBlast<SimpleClash<Lockup<Pulsing<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,200>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,150>,50>,BrownNoiseFlicker<RandomPerLEDFlicker<Tomato,Black>,Black,150>,2100>,Pulsing<Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,3500>,RandomPerLEDFlicker<Red,White>>,Red,80>,Magenta>,200,500>>(), "fire"},
 
  
{ "cyber", "tracks/Darth_Bane.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Pulsing<Gradient<Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>>,Pulsing<Gradient<Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>>,Gradient<Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>,Strobe<Orange,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<BrownNoiseFlicker<Magenta,Rgb16<9899,216,49276>,90>,BrownNoiseFlicker<PapayaWhip,Rgb16<9899,216,49276>,50>,2000>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,AudioFlicker<Yellow,Orange>,120>,AudioFlicker<GreenYellow,Green>>,Gradient<HumpFlicker<Rgb16<25151,1,1>,Red,50>,RandomFlicker<DodgerBlue,Cyan>>,1500>,200,500>>(), "purple_jedi_killer"},
 
 
 {"Corellian_SS", "tracks/DarkSideFate.wav",
StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<RandomFlicker<Red,Tomato>,Cylon<GhostWhite,50,100,Blinking<RandomPerLEDFlicker<GreenYellow,Red>,BrownNoiseFlicker<Pink,OrangeRed,50>,100,500>,25,37,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,White,800>,190,500>>(), "red"},


{"Control", "tracks/Vaders_Revenge.wav",
StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<HumpFlicker<Orange,Red,50>,Cylon<GhostWhite,50,100,RandomPerLEDFlicker<Magenta,Cyan>,40,25,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,White,800>,190,500>>(), "red_orange"},


{"Ksith_Vengeance_SS", "tracks/Darth_Maul_1.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<Gradient<Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Strobe<Yellow,BrownNoiseFlicker<Red,White,100>,50,1>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>>,Gradient<Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Strobe<Yellow,BrownNoiseFlicker<Red,White,100>,50,1>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>>,3500>,RandomPerLEDFlicker<Red,White>>,AudioFlicker<Yellow,LightYellow>,90,95>,White>,White,800>,200,500>>(), "maul"},

 
   { "SmthJedi", "tracks/mars.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<118, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
