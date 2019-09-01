#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 1
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
//SmoothSwing Font Section // 
// Vader DV6 / Sith Styles

// Basic Vader Red with Amber/Green FOC & Lockup
{ "RogueVader_SS_KS", "tracks/vader-r1.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Rgb16<65535,0,0>, Pulsing<Gradient<Rgb16<65535,0,0>, Strobe<Yellow, BrownNoiseFlicker<Green,White,100>,50,1>,Rgb16<65535,0,0>, Rgb16<65535,0,0>, Strobe<Yellow, BrownNoiseFlicker<Green,White,100>,50,1>,Rgb16<65535,0,0>, Rgb16<65535,0,0>>, Pulsing<Gradient<Rgb16<65535,0,0>, Rgb16<65535,0,0>, Strobe<Yellow, BrownNoiseFlicker<Green,White,100>,50,1>,Rgb16<65535,0,0>, Strobe<Yellow, BrownNoiseFlicker<Green,White,100>,50,1>,Rgb16<65535,0,0>, Strobe<Yellow, BrownNoiseFlicker<Green,White,100>,50,1>,Rgb16<65535,0,0>>,Gradient<Rgb16<65535,0,0>, Rgb16<65535,0,0>, Strobe<Yellow, BrownNoiseFlicker<Green,White,100>,50,1>,Rgb16<65535,0,0>, Rgb16<65535,0,0>, Strobe<Yellow, BrownNoiseFlicker<Green,White,100>,50,1>,Rgb16<65535,0,0>>,1500>,2000>, RandomPerLEDFlicker<Red,White>>, Rgb16<46419,44565,937>, 40, 50>, SpringGreen, 200, 100, 400>, Rgb16<47835,33514,0>, 400>, 200, 500, Black>>(), "Vader1"},

// Red Transformer Flicker
{ "Vaders_Assassin", "tracks/ro-vader.wav",
StylePtr<SimpleClash<Lockup<Blast<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,White,200,100,400>,AudioFlicker<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,White>,AudioFlicker<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,White>>,BrownNoiseFlicker<Green,Red,50>,40>>(), "Vader2"},

// Vader PulseFlicker
{ "Vengeance_KS_SS", "tracks/vader-march.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<HumpFlicker<Green,DarkOrange,50>,HumpFlicker<Yellow,Red,50>,2500>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,LocalizedClash<SpringGreen,White,40,25>,40>,200,800,Black>>(), "Vader3"},

//Vader / Red Sith with LocalizedClash
{ "noss/DVR1", "tracks/kylo1.wav",
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Red,White,200,100,400>,AudioFlicker<Red,GreenYellow>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,200,800,Black>>(), "Vader4"},

//Vader / Yellow_RedOrange with LocalizedClash and HumpFlicker
{ "RogueVader_SS_KS", "tracks/vader-r1.wav",
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<HumpFlicker<Red,Yellow,100>,Rgb16<21301,1899,65535>,200,100,400>,HumpFlicker<Green,Yellow,50>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,200,800,Black>>(), "Vader5"},

// Vader / Sith Red_Green HumpFlicker
{ "Vengeance_KS_SS", "tracks/ro-vader.wav",
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<HumpFlicker<Red,Green,150>,Rgb16<21301,1899,65535>,200,100,400>,HumpFlicker<Green,Yellow,50>,AudioFlicker<OrangeRed,White>>,Green,60,75>,200,800,Black>>(), "Vader6"},

  
// End of SmoothSwing Font Section //

	
// Begin default Proffie bladestyles //
	
    { "SmthFuzz", "tracks/uranus.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(), "red"},

   { "TeensySF", "tracks/mercury.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), "white"},

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
