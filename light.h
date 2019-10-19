#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 2
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
//5 LED
{"Unstable","tracks/kylo1.wav",
StylePtr<InOutHelper<EasyBlade<OnSpark<ColorSequence<2500,Cylon<Red,5,20,Red,5,30,1>,Cylon<Orange,5,20,Orange,5,30,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,30,1>>,AudioFlicker<Orange,LightYellow>,400>,White>,300,800,Pulsing<Cylon<Orange,5,20,Red,5,20,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,20,1>,4500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OriginalBlast<SimpleClash<Lockup<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,Pulsing<Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,3500>,RandomPerLEDFlicker<Red,White>>,Red,80>,Magenta>,200,500>>(), "preset6"},

// 5 LED
{"Ksith_Vengeance_SS", "tracks/KyloTheme.wav",
StylePtr<InOutHelper<EasyBlade<OnSpark<ColorSequence<2500,Cylon<Red,5,20,Red,5,30,1>,Cylon<Orange,5,20,Orange,5,30,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,30,1>>,AudioFlicker<Orange,LightYellow>,400>,White>,300,800,Pulsing<Cylon<Orange,5,20,Red,5,20,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,20,1>,4500>>>(),

//MAIN BLADE
StylePtr<InOutSparkTip<OnSpark<OriginalBlast<LocalizedClash<Lockup<AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,Pulsing<Gradient<AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>>,Pulsing<Gradient<AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>>,Gradient<AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<3694,0,27558>,Rgb16<18358,7,65535>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,RandomFlicker<Yellow,Orange>,80>,BrownNoiseFlicker<Green,OrangeRed,50>>,HumpFlicker<Green,Magenta,50>,800>,200,500>>(), "preset2"},

//5 LED

{"Dark", "tracks/MSV.wav",
StylePtr<InOutHelper<EasyBlade<OnSpark<ColorSequence<2500,Cylon<Red,5,20,Red,5,30,1>,Cylon<Orange,5,20,Orange,5,30,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,30,1>>,AudioFlicker<Orange,LightYellow>,400>,White>,300,800,Pulsing<Cylon<Orange,5,20,Red,5,20,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,20,1>,4500>>>(),

//MAIN BLADE
StylePtr<InOutSparkTip<OnSpark<OriginalBlast<LocalizedClash<Lockup<AudioFlicker<Orange,Rgb16<23504,14386,93>>,Pulsing<Gradient<AudioFlicker<Orange,Rgb16<23504,14386,93>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,AudioFlicker<Orange,Rgb16<23504,14386,93>>>,Pulsing<Gradient<AudioFlicker<Orange,Rgb16<23504,14386,93>>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Orange,Rgb16<23504,14386,93>>>,Gradient<AudioFlicker<Orange,Rgb16<23504,14386,93>>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,AudioFlicker<Orange,Rgb16<23504,14386,93>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Orange,Rgb16<23504,14386,93>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,80>,White>,AudioFlicker<PeachPuff,Green>,1000>,200,500,Red>>(), "preset3"},

//5 LED
{"cyber", "tracks/darth_nihilus.wav",
StylePtr<InOutHelper<EasyBlade<OnSpark<ColorSequence<2500,Cylon<Red,5,20,Red,5,30,1>,Cylon<Orange,5,20,Orange,5,30,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,30,1>>,AudioFlicker<Orange,LightYellow>,400>,White>,300,800,Pulsing<Cylon<Orange,5,20,Red,5,20,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,20,1>,4500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Pulsing<Gradient<AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>>,Pulsing<Gradient<AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>>,Gradient<AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,NavajoWhite,80>,NavajoWhite>,Gradient<HumpFlicker<Rgb16<38826,27207,57880>,Snow,50>,HumpFlicker<Rgb16<24485,0,65535>,Snow,50>,BrownNoiseFlicker<Rgb16<17247,0,46419>,Snow,50>>,1500>,200,500>>(), "preset4"},

//5 LED
{"JediKiller", "tracks/jedikiller.wav",
StylePtr<InOutHelper<EasyBlade<OnSpark<ColorSequence<2500,Cylon<Red,5,20,Red,5,30,1>,Cylon<Orange,5,20,Orange,5,30,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,30,1>>,AudioFlicker<Orange,LightYellow>,400>,White>,300,800,Pulsing<Cylon<Orange,5,20,Red,5,20,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,20,1>,4500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OriginalBlast<SimpleClash<Lockup<Pulsing<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,200>,BrownNoiseFlicker<Red,Black,150>,100>,BrownNoiseFlicker<BrownNoiseFlicker<Rgb16<19506,0,0>,Black,195>,Black,150>,4200>,Pulsing<Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,3500>,RandomPerLEDFlicker<Red,White>>,Red,80>,Magenta>,200,500>>(),"preset5"},


//5 LED
{"Ascendant", "tracks/Vaders_Revenge.wav",
StylePtr<InOutHelper<EasyBlade<OnSpark<Gradient<Pulsing<Rgb16<19506,0,0>,Red,1800>,Pulsing<Rgb16<25487,25487,0>,Orange,1400>,Pulsing<DarkOrange,Rgb16<19506,0,0>,1800>>,AudioFlicker<Orange,LightYellow>,400>,White>,300,800,Pulsing<RandomPerLEDFlicker<Red,Black>,BrownNoiseFlicker<Rgb16<28626,8542,0>,Yellow,300>,4000>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OriginalBlast<SimpleClash<Lockup<Pulsing<AudioFlicker<RandomPerLEDFlicker<Rgb16<19506,0,0>,Rgb16<25487,25487,0>>,BrownNoiseFlicker<Rgb16<19506,0,0>,Red,300>>,HumpFlicker<BrownNoiseFlicker<Rgb16<19506,0,0>,Black,200>,BrownNoiseFlicker<Coral,Black,250>,50>,4200>,Pulsing<Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,3500>,RandomPerLEDFlicker<Red,White>>,Red,80>,Magenta>,200,500>>(),"preset6"},



   { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
	{ 0,
		SubBlade(0, 4, WS2811BladePtr<123, WS2811_ACTUALLY_800kHz | WS2811_GRB>()),
		SubBlade(5, 122, NULL),
		CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif