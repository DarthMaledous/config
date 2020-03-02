#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 2200
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVED_PRESET
#define NO_COLOR_SWING
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{"The_Return", "tracks/Final_Duel.wav",
//CRYSTAL CHAMBER
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

// PCB LED's
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Green,GreenYellow>,Pulsing<Gradient<RandomFlicker<Green,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Green,GreenYellow>,RandomFlicker<Green,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Green,GreenYellow>,RandomFlicker<Green,GreenYellow>>,Pulsing<Gradient<RandomFlicker<Green,GreenYellow>,RandomFlicker<Green,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Green,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Green,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Green,GreenYellow>>,Gradient<RandomFlicker<Green,GreenYellow>,RandomFlicker<Green,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Green,GreenYellow>,RandomFlicker<Green,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Green,GreenYellow>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,80,70>,Red>,GhostWhite,650>,200,500>>(), "The Return"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{"BEspin_CFX_SS", "tracks/sw_jedi_theme1.wav",
//CRYSTAL CHAMBER
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

// PCB LED's
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Green,Rgb<5,185,0>>, Pulsing<Gradient<AudioFlicker<Green,Rgb<5,185,0>>, Strobe<White, BrownNoiseFlicker<White,Red,150>,50,1>,AudioFlicker<Green,Rgb<5,185,0>>, AudioFlicker<Green,Rgb<5,185,0>>, Strobe<White, BrownNoiseFlicker<White,Red,150>,50,1>,AudioFlicker<Green,Rgb<5,185,0>>, AudioFlicker<Green,Rgb<5,185,0>>>, Pulsing<Gradient<AudioFlicker<Green,Rgb<5,185,0>>, AudioFlicker<Green,Rgb<5,185,0>>, Strobe<White, BrownNoiseFlicker<White,Red,150>,50,1>,AudioFlicker<Green,Rgb<5,185,0>>, Strobe<White, BrownNoiseFlicker<White,Red,150>,50,1>,AudioFlicker<Green,Rgb<5,185,0>>, Strobe<White, BrownNoiseFlicker<White,Red,150>,50,1>,AudioFlicker<Green,Rgb<5,185,0>>>,Gradient<AudioFlicker<Green,Rgb<5,185,0>>, AudioFlicker<Green,Rgb<5,185,0>>, Strobe<White, BrownNoiseFlicker<White,Red,150>,50,1>,AudioFlicker<Green,Rgb<5,185,0>>, AudioFlicker<Green,Rgb<5,185,0>>, Strobe<White, BrownNoiseFlicker<White,Red,150>,50,1>,AudioFlicker<Green,Rgb<5,185,0>>>,1500>,2000>, RandomPerLEDFlicker<Red,White>>, White, 90, 80>, GhostWhite, 600, 100, 400>, White, 400>, 200, 500, Black>>(), "BEspin_CFX_SS"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{"Hero_CFX_SS", "tracks/TLJ_Spark.wav",
//CRYSTAL CHAMBER
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

// PCB LED's
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,Pulsing<Gradient<AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>>,Pulsing<Gradient<AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>>,Gradient<AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Gradient<GreenYellow,Chartreuse>,Gradient<Chartreuse,Green>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,90,70>,ColorSequence<1000,Red,Rgb<155,0,255>,GhostWhite,Orange>,400>,White,650>,200,500>>(), "Hero_CFX_SS"},
///////////////////////////////////////////////////////////////////////////////////////////////////


{"Mantle_of_the_Force", "tracks/JFO13.wav",
//CRYSTAL CHAMBER
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

// PCB LED's
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Pulsing<Gradient<Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>>,Pulsing<Gradient<Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>>,Gradient<Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Blue>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,Rgb<5,185,0>,4200>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>,AudioFlicker<Green,Rgb<5,185,0>>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,90,80>,ColorSequence<1000,Red,Rgb<155,0,255>,GhostWhite>,400>,White,400>,200,500>>(), "Mantle of the Force"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{"Ksith_LS6_SS", "tracks/rotj.wav",
//CRYSTAL CHAMBER
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

// PCB LED's
StylePtr<InOutHelper<OnSpark<Green,AudioFlicker<White,GreenYellow>,650>,200,500,Pulsing<Black,Green,4200>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Green,Pulsing<Gradient<Green,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Green,Green,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Green,Green>,Pulsing<Gradient<Green,Green,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Green,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Green,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Green>,Gradient<Green,Green,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Green,Green,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Green>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,90,80>,ColorSequence<1000,Red,Rgb<155,0,255>,GhostWhite>,400,75,4000000>,Aquamarine,400>,200,500>>(), "Ksith LS6 SS"},
///////////////////////////////////////////////////////////////////////////////////////////////////

 
{ "Calibrate", "tracks/battery_charge1.wav",
 &style_charging,
  StyleNormalPtr<BLACK, BLACK, 300, 800>(),
  StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
///////////////////////////////////////////////////////////////////////////////////////////////////

BladeConfig blades[] = {
 { 0, 
    SubBlade(0, 0, WS2811BladePtr<130, WS2811_ACTUALLY_800kHz | WS2811_GRB>()),
	SubBlade(1, 4, NULL),
	SubBlade(5, 129, NULL),
    CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
