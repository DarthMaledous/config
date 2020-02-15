#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2200
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
{ "Violence", "tracks/swtor_epic2.wav",
StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<HumpFlicker<Orange,Red,50>,Cylon<GhostWhite,50,100,RandomPerLEDFlicker<Magenta,Cyan>,40,25,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,White,800>,190,500>>(), "red_orange"},
 
 
 { "cyber", "tracks/swtor_darksidetheme5.wav",
 StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<RandomFlicker<Rgb<200,5,255>,Black>,Cylon<GhostWhite,50,100,Blinking<RandomPerLEDFlicker<GreenYellow,Red>,BrownNoiseFlicker<Pink,OrangeRed,50>,100,500>,25,37,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,BrownNoiseFlicker<GhostWhite,Black,75>,1200>,190,500>>(), "purple"},
   

{ "Menace", "tracks/MSV.wav",
 StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<RandomFlicker<Red,Tomato>,Cylon<GhostWhite,50,100,Blinking<RandomPerLEDFlicker<GreenYellow,Red>,BrownNoiseFlicker<Pink,OrangeRed,50>,100,500>,25,37,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,White,800>,190,500>>(), "red"},
	
   
{"Pitch-Black", "tracks/swtor_darksidetheme4.wav",
StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<RandomFlicker<Red,Tomato>,Cylon<GhostWhite,50,100,Blinking<RandomPerLEDFlicker<GreenYellow,Red>,BrownNoiseFlicker<Pink,OrangeRed,50>,100,500>,25,37,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,White,800>,190,500>>(), "red"},


{"Unlightstable", "tracks/swtor_darksidetheme2.wav",
StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<HumpFlicker<Orange,Red,50>,Cylon<GhostWhite,50,100,RandomPerLEDFlicker<Magenta,Cyan>,40,25,100>,1200,50>,Gradient<StyleFire<HumpFlicker<Green,Magenta,50>,RandomPerLEDFlicker<Black,Magenta>,0,2,FireConfig<0,2000,1>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,BrownNoiseFlicker<Pulsing<GhostWhite,Red,2800>,Pulsing<GhostWhite,Yellow,2800>,50>,BrownNoiseFlicker<Black,RandomPerLEDFlicker<Tomato,Magenta>,50>,StyleFire<HumpFlicker<Green,Magenta,50>,BrownNoiseFlicker<Black,Magenta,50>,0,2,FireConfig<0,2000,2>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,1>>>,AudioFlicker<Blue,White>>,Gradient<StyleFire<DarkOrange,Black>,BrownNoiseFlicker<White,Magenta,50>,StyleFire<Red,Red,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,2>>>,240>,White,800>,190,500>>(), "red_orange"},


{"Ksith_Vengeance_SS", "tracks/swtor_epic3.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<Gradient<Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Strobe<Yellow,BrownNoiseFlicker<Red,White,100>,50,1>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>>,Gradient<Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Strobe<Yellow,BrownNoiseFlicker<Red,White,100>,50,1>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>,Pulsing<RandomFlicker<Red,Rgb<255,65,5>>,AudioFlicker<Red,Black>,1000>>,3500>,RandomPerLEDFlicker<Red,White>>,AudioFlicker<Yellow,LightYellow>,90,95>,White>,White,800>,200,500>>(), "maul"},

{"The_Second", "tracks/swtor_epic1.wav",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Pulsing<Gradient<Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>>,Pulsing<Gradient<Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>>,Gradient<Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<Yellow,Black,200>,BrownNoiseFlicker<Red,Black,200>,3000>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,90,75>,RandomPerLEDFlicker<Cyan,LavenderBlush>>,White,400>,200,500>>(),"second"},
 
   { "Calibrate", "tracks/batteryhum.wav",
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
