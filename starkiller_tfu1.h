#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 2500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
	{ "Vaders_Assassin", "tracks/SK1.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<HumpFlicker<White,Red,5>,Green>,AudioFlicker<RandomFlicker<GreenYellow,Magenta>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,RandomFlicker<Yellow,Blue>,75>,185,800,Black>>(),
	StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<HumpFlicker<White,Red,5>,Green>,AudioFlicker<RandomFlicker<GreenYellow,Magenta>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,RandomFlicker<Yellow,Blue>,75>,185,800,Black>>(), "TFU2.0"},

	
	StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<HumpFlicker<White,DeepSkyBlue,5>,Orange>,AudioFlicker<RandomFlicker<GreenYellow,Cyan>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,RandomFlicker<Cyan,Yellow>,75>,185,800,Black>>(),
StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<HumpFlicker<White,DeepSkyBlue,5>,Orange>,AudioFlicker<RandomFlicker<GreenYellow,Cyan>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,RandomFlicker<Cyan,Yellow>,75>,185,800,Pulsing<HumpFlicker<Red,Cyan,50>,Cyan,4800>>>(), TFU2.0"},
   
   { "TeensySF", "tracks/venus.wav",
    StyleNormalPtr<CYAN, WHITE, 300, 800>(),
    StyleNormalPtr<CYAN, WHITE, 300, 800>(), "cyan"},
  
  
  { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(),
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(), "blue"},
   
   
   { "SmthGrey", "tracks/mercury.wav",
    StyleFirePtr<RED, YELLOW, 0>(),
    StyleFirePtr<RED, YELLOW, 1>(), "fire"},
   
   
   { "SmthFuzz", "tracks/uranus.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(),
    StyleNormalPtr<RED, WHITE, 300, 800>(), "red"},
   
   
   { "RgueCmdr", "tracks/venus.wav",
    StyleFirePtr<BLUE, CYAN, 0>(),
    StyleFirePtr<BLUE, CYAN, 1>(), "blue fire"},
   
   
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(),
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},

	
	
   { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<144, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
    WS2811BladePtr<1, WS2811_580kHz, blade2Pin, PowerPINS<bladePowerPin4> >(),
	WS2811BladePtr<3, WS2811_580kHz, blade3Pin, PowerPINS<bladePowerPin5>>,
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
