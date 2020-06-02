#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 4
#define NUM_BUTTONS 2
#define VOLUME 2200
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
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
//ACCENT LED's
StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), 

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<RandomFlicker<Green,Rgb<40,100,5>>,RandomFlicker<Green,Rgb<40,100,5>>>,RandomFlicker<Green,Rgb<40,100,5>>,AudioFlicker<Blue,White>>,RandomFlicker<Green,Rgb<40,100,5>>>,300,800,Pulsing<Green,Rgb<0,40,10>,2500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<HumpFlicker<Green,GreenYellow,80>,Pulsing<Gradient<HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>>,Pulsing<Gradient<HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>>,Gradient<HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Rgb16<65535,6957,0>,120,75>,Magenta>,200,500>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{ "Ksith_LS6_SS", "tracks/rotj.wav",
//ACCENT LED's
StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), 

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<RandomFlicker<Green,Rgb<40,100,5>>,RandomFlicker<Green,Rgb<40,100,5>>>,RandomFlicker<Green,Rgb<40,100,5>>,AudioFlicker<Blue,White>>,RandomFlicker<Green,Rgb<40,100,5>>>,300,800,Pulsing<Green,Rgb<0,40,10>,2500>>>(),

//MAIN BLADE	
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Pulsing<Gradient<AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>>, Pulsing<Gradient<AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>>,Gradient<AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>>,1500>,2000>, RandomPerLEDFlicker<Red,White>>, Blue, 80, 75>, Red>, White, 200>, 180, 500, Black>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{ "MOTF", "tracks/mars.wav",
//ACCENT LED's
StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), 

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<RandomFlicker<Green,Rgb<40,100,5>>,RandomFlicker<Green,Rgb<40,100,5>>>,RandomFlicker<Green,Rgb<40,100,5>>,AudioFlicker<Blue,White>>,RandomFlicker<Green,Rgb<40,100,5>>>,300,800,Pulsing<Green,Rgb<0,40,10>,2500>>>(),

//MAIN BLADE	
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,3000>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Pulsing<Gradient<Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>>,Pulsing<Gradient<Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>>,Gradient<Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,80,75>,PeachPuff>,LemonChiffon,400>,180,500,Black>>(), "CreepyUncle"},
/////////////////////////////////////////////////////////////////////////////////////////////////// 

{"Hero_CF10", "tracks/Final_Duel.wav",
//ACCENT LED's
StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), 

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<RandomFlicker<Green,Rgb<40,100,5>>,RandomFlicker<Green,Rgb<40,100,5>>>,RandomFlicker<Green,Rgb<40,100,5>>,AudioFlicker<Blue,White>>,RandomFlicker<Green,Rgb<40,100,5>>>,300,800,Pulsing<Green,Rgb<0,40,10>,2500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Pulsing<Gradient<HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>>,Pulsing<Gradient<HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>>,Gradient<HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,80,75>,Magenta>,BrownNoiseFlicker<LightCyan,Chartreuse,150>,1500>,200,500>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////
   
{"Transform", "tracks/mars.wav",
//ACCENT LED's
StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), 

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<RandomFlicker<Green,Rgb<40,100,5>>,RandomFlicker<Green,Rgb<40,100,5>>>,RandomFlicker<Green,Rgb<40,100,5>>,AudioFlicker<Blue,White>>,RandomFlicker<Green,Rgb<40,100,5>>>,300,800,Pulsing<Green,Rgb<0,40,10>,2500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,Pulsing<Gradient<ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>>,Pulsing<Gradient<ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>>,Gradient<ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Orange,0,1,AudioFlicker<Rgb<10,255,0>,Rgb<150,255,0>>,100,800,4600>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>>,ColorSequence<1000,Red,Rgb<155,0,255>,GhostWhite>>,200,500>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////	


{ "Calibrate", "tracks/Battery_Charge_2.wav",
&style_charging,
StyleNormalPtr<BLACK, BLACK, 100,100>(),
StyleNormalPtr<BLACK, BLACK, 100,100>(),
StyleNormalPtr<BLACK, BLACK, 100,100>(), "Battery\nLevel"}

};
BladeConfig blades[] = {
 { 0, 
	SubBlade(0, 0, WS281XBladePtr<128, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
	SubBlade(1,1, NULL),
	SubBlade(2, 2, NULL),
	SubBlade(3, 127, NULL),
 CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
