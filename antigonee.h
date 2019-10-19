#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2300
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVED_PRESET
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "Control", "tracks/venus.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Pulsing<Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,Pulsing<Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,BrownNoiseFlicker<Magenta,DodgerBlue,200>,100,85>,RandomPerLEDFlicker<DodgerBlue,Magenta>,800>,RandomPerLEDFlicker<DarkOrange,Black>,1600>,200,500>>(), "cyan"},
 
 
 { "Energy", "tracks/energy.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>,Pulsing<Gradient<RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>,RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>,Strobe<White,BrownNoiseFlicker<Magenta,Tomato,100>,50,1>,RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>,RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>>,Gradient<RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>,RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>,RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>,Strobe<White,BrownNoiseFlicker<Magenta,LightCyan,200>,50,1>,RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>,RandomFlicker<RandomPerLEDFlicker<DarkOrange,Rgb16<45951,45951,0>>,RandomPerLEDFlicker<Rgb16<45951,45951,0>,Black>>>,3500>,RandomPerLEDFlicker<Red,White>>,Rgb16<35507,0,11>,120,85>,Rgb16<11805,2716,35507>>,HumpFlicker<Black,Rgb16<35103,35103,35103>,3>,1600>,200,500>>(), "blue"},
   

{ "FallenOrder", "tracks/immortal_emperor.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>,Pulsing<Gradient<Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>,Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>,Strobe<Yellow,BrownNoiseFlicker<Green,White,100>,50,1>,Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>,Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>>,Gradient<Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>,Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>,Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>,Strobe<Yellow,BrownNoiseFlicker<Green,White,100>,50,1>,Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>,Gradient<Pulsing<Rgb16<35103,35103,35103>,Ivory,3200>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<57880,25826,61643>>,RandomFlicker<Rgb16<7994,507,50739>,Rgb16<11805,2716,35507>>>>,3500>,RandomPerLEDFlicker<Green,White>>,DarkOrange,120,85>,HumpFlicker<Yellow,Rgb16<24816,0,0>,8>,600>,White,1600>,200,500>>(), "fire"},
	

{ "Unlightstable", "tracks/kylo2.wav",
 StylePtr<InOutHelper<OriginalBlast<SimpleClash<Lockup<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,Pulsing<Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,3500>,RandomPerLEDFlicker<Red,White>>,Red,80>,Magenta>,200,500>>(), "red"},
 
 
 
{ "Count", "tracksThe_Count.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Pulsing<Gradient<Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Strobe<Ivory,BrownNoiseFlicker<Red,SteelBlue,100>,50,1>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Strobe<Ivory,BrownNoiseFlicker<Red,SteelBlue,100>,50,1>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>>,Pulsing<Gradient<Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Strobe<Ivory,BrownNoiseFlicker<Red,SteelBlue,100>,50,1>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Strobe<Ivory,BrownNoiseFlicker<Red,SteelBlue,100>,50,1>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Strobe<Ivory,BrownNoiseFlicker<Red,SteelBlue,100>,50,1>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>>,Gradient<Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Strobe<Ivory,BrownNoiseFlicker<Red,SteelBlue,100>,50,1>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>,Strobe<Rgb16<29351,23182,2334>,BrownNoiseFlicker<Red,SteelBlue,100>,50,1>,Gradient<AudioFlicker<Pulsing<Rgb16<49276,28626,468>,Red,2800>,RandomPerLEDFlicker<Rgb16<49276,28626,468>,Black>>,RandomFlicker<Red,Tomato>,RandomFlicker<Red,Rgb16<24816,0,0>>,RandomFlicker<Red,Rgb16<24816,0,0>>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,120,95>,Chartreuse,600>,White,400>,200,500>>(), "blue fire"},
 
 
 
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
   { "TeensySF", "tracks/mercury.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), "white"},
   { "SmthJedi", "tracks/uranus.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), "yellow"},
   { "SmthGrey", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "magenta"},
   { "SmthFuzz", "tracks/mars.wav",
    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(), "gradient"},
   { "RgueCmdr", "tracks/mercury.wav",
    StyleRainbowPtr<300, 800>(), "rainbow"},
   { "TthCrstl", "tracks/uranus.wav",
    StyleStrobePtr<WHITE, Rainbow, 15, 300, 800>(), "strobe"},
   { "TeensySF", "tracks/venus.wav",
    &style_pov, "POV"},
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
