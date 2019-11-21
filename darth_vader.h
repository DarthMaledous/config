#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.5
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
{ "Father", "tracks/darth_sidious.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Red,2500>,Pulsing<Gradient<Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Strobe<Green,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>>,Gradient<Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Strobe<Green,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>>,3500>,RandomPerLEDFlicker<Red,White>>,GreenYellow,80>,White>,MistyRose,1200>,200,500>>(), "Vader3"},

//Vader / Red Sith with LocalizedClash
{ "Black_Bishop", "tracks/Vaders_Revenge.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Red,Rgb16<34702,0,0>>,Pulsing<Gradient<AudioFlicker<Red,Rgb16<34702,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb16<34702,0,0>>,AudioFlicker<Red,Rgb16<34702,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb16<34702,0,0>>,AudioFlicker<Red,Rgb16<34702,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb16<34702,0,0>>,AudioFlicker<Red,Rgb16<34702,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb16<34702,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb16<34702,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb16<34702,0,0>>>,Gradient<AudioFlicker<Red,Rgb16<34702,0,0>>,AudioFlicker<Red,Rgb16<34702,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb16<34702,0,0>>,AudioFlicker<Red,Rgb16<34702,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb16<34702,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Green,80>,White>,RandomFlicker<Red,Black>,1200>,200,500>>(), "Vader4"},

//Vader / Yellow_RedOrange with LocalizedClash and HumpFlicker
{ "RogueVader_SS_KS", "tracks/vader-r1.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,RandomFlicker<Red,LightPink>,2500>,Pulsing<Gradient<Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Strobe<Green,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>>,Gradient<Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Strobe<Green,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>,Pulsing<RandomFlicker<Rgb16<34702,0,0>,Red>,Rgb16<34702,0,0>,2500>>,3500>,RandomPerLEDFlicker<Red,White>>,GreenYellow,80>,GreenYellow>,MistyRose,1200>,200,500>>(), "Vader5"},

// Vader / Sith Red_Green HumpFlicker
{ "Vengeance_KS_SS", "tracks/ro-vader.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Red,Rgb16<35507,0,11>>,Pulsing<Gradient<AudioFlicker<Red,Rgb16<35507,0,11>>,AudioFlicker<Red,Rgb16<35507,0,11>>,Strobe<Green,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb16<35507,0,11>>,AudioFlicker<Red,Rgb16<35507,0,11>>>,Gradient<AudioFlicker<Red,Rgb16<35507,0,11>>,AudioFlicker<Red,Rgb16<35507,0,11>>,Strobe<Green,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb16<35507,0,11>>,AudioFlicker<Red,Rgb16<35507,0,11>>,AudioFlicker<Red,Rgb16<35507,0,11>>>,3500>,RandomPerLEDFlicker<Red,White>>,GreenYellow,80>,Green>,GhostWhite,1000>,200,500>>(), "Vader6"},

  
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
