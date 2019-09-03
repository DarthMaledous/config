#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 2400
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {

{"The_Return", "tracks/Final_Duel.wav",
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<HumpFlicker<Green,GreenYellow,80>,Pulsing<Gradient<HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>>,Pulsing<Gradient<HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>>,Gradient<HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>,HumpFlicker<Green,GreenYellow,80>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Green,GreenYellow,80>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Rgb16<65535,6957,0>,120,75>,Magenta>,200,500>>(),

StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), "CreepyUncle"},
	
{ "Ksith_LS6_SS", "tracks/rotj.wav",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Pulsing<Gradient<AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>>, Pulsing<Gradient<AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>>,Gradient<AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>, AudioFlicker<Rgb<10,255,0>,NavajoWhite>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb<10,255,0>,NavajoWhite>>,1500>,2000>, RandomPerLEDFlicker<Red,White>>, Blue, 80, 75>, Red>, White, 200>, 180, 500, Black>>(),

StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), "CreepyUncle"},
	
{ "Ksith_Light_SS", "tracks/mars.wav",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,3000>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Pulsing<Gradient<Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>>,Pulsing<Gradient<Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>>,Gradient<Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Green,Rgb16<10936,21609,1818>,1600>,Pulsing<Green,Rgb16<10936,21609,1818>,3000>,AudioFlicker<Rgb16<10936,21609,1818>,Green>,AudioFlicker<Green,Rgb16<10936,21609,1818>>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,80,75>,PeachPuff>,LemonChiffon,400>,180,500,Black>>(),
 
StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), "CreepyUncle"},
 

{"The_Return", "tracks/Final_Duel.wav",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Pulsing<Gradient<HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>>,Pulsing<Gradient<HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>>,Gradient<HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>,Strobe<Orange,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Pulsing<Chartreuse,Green,2500>,Gradient<Green,Chartreuse>,80>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,80,75>,Magenta>,BrownNoiseFlicker<LightCyan,Chartreuse,150>,1500>,200,500>>(),

StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), "CreepyUncle"},


{ "Ksith_Vengeance_SS", "tracks/rotj2.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Pulsing<Rgb<10,255,0>,GreenYellow,2500>,HumpFlicker<Orange,Magenta,50>>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>>,HoneyDew,40>,180,800,Black>>(),
 
StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), "CreepyUncle"},
   
{ "noss/TERRAFORM_NEC", "tracks/mars.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Rgb<10,255,0>,100,800,4600>,Magenta,200,100,100000>,BrownNoiseFlicker<Yellow,OrangeRed,500>,BrownNoiseFlicker<Yellow,OrangeRed,500>>,LightCyan,40>,185,800,Black>>(),
 
StylePtr<InOutHelper<Sequence<Green,Black,500,80,0b1010101010101010,0b1010000000000000,0b10101010,0b1010101010100000,0b0>,1,1,Blinking<Green,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,500,80,0b0,0b101010101010,0b1010101000000000,0b1010,0b1010101010101010>,1,1>>(), "CreepyUncle"},
	
 
	
{ "SmthFuzz", "",
&style_charging,
StyleNormalPtr<BLACK, BLACK, 100,100>(),
StyleNormalPtr<BLACK, BLACK, 100,100>(),}


};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<118, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), 
      SimpleBladePtr<CreeXPE2GreenTemplate<13000>, NoLED, NoLED, NoLED, bladePowerPin4, -1, -1, -1>(),
      SimpleBladePtr<CreeXPE2RedTemplate<100000>, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(),
CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
