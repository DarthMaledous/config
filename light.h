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
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
//5 LED
{"Unstable","tracks/kylo1.wav",
StylePtr<InOutHelper<EasyBlade<OnSpark<ColorSequence<2500,Cylon<Red,5,20,Red,5,30,1>,Cylon<Orange,5,20,Orange,5,30,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,30,1>>,AudioFlicker<Orange,LightYellow>,400>,White>,300,800,Pulsing<Cylon<Orange,5,20,Red,5,20,1>,Cylon<Rgb16<35103,12029,46888>,5,20,Rgb16<35103,12029,46888>,5,20,1>,4500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OriginalBlast<SimpleClash<Lockup<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,Pulsing<Gradient<HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>,HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>,HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>>,Gradient<HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>,HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>,HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>,HumpFlicker<BrownNoiseFlicker<LightYellow,OrangeRed,80>,BrownNoiseFlicker<Red,DeepSkyBlue,90>,50>>,3500>,RandomPerLEDFlicker<Red,White>>,Red,80>,Magenta>,200,500>>(), "preset1"},

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
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<AudioFlicker<OrangeRed,Orange>,Pulsing<Gradient<AudioFlicker<OrangeRed,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<OrangeRed,Orange>,AudioFlicker<OrangeRed,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<OrangeRed,Orange>,AudioFlicker<OrangeRed,Orange>>,Pulsing<Gradient<AudioFlicker<OrangeRed,Orange>,AudioFlicker<OrangeRed,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<OrangeRed,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<OrangeRed,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<OrangeRed,Orange>>,Gradient<AudioFlicker<OrangeRed,Orange>,AudioFlicker<OrangeRed,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<OrangeRed,Orange>,AudioFlicker<OrangeRed,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<OrangeRed,Orange>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Green,80>,Cyan>,White,400>,200,500>>(), "preset4"},



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