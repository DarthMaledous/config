#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2800
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
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Rgb16<65535,0,0>,Rgb16<47835,33514,0>,200>,SpringGreen,200,100,400>,AudioFlicker<OnSpark<Green,White,400>,Red>,AudioFlicker<OnSpark<Green,White,200>,White>>,Rgb16<46419,44565,937>,40>,300,800,Black>>(), "Vader1"},

// Red Transformer Flicker
   { "Vaders_Assassin", "tracks/ro-vader.wav",
   StylePtr<SimpleClash<Lockup<Blast<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,White,200,100,400>,AudioFlicker<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,White>,AudioFlicker<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,White>>,BrownNoiseFlicker<Green,Red,50>,40>>(), "Vader2"},

// Vader PulseFlicker
   { "SS_Vader_OT", "tracks/vader-march.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<HumpFlicker<Green,DarkOrange,50>,HumpFlicker<Yellow,Red,50>,2500>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,LocalizedClash<SpringGreen,White,40,25>,40>,200,800,Black>>(), "Vader3"},

//Vader / Red Sith with LocalizedClash
   { "Sith_02", "tracks/kylo1.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Red,White,200,100,400>,AudioFlicker<Red,GreenYellow>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,200,800,Black>>(), "Vader4"},

//Vader / Yellow_RedOrange with LocalizedClash and HumpFlicker
   { "RogueVader_SS_KS", "tracks/vader-r1.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<HumpFlicker<Red,Yellow,100>,Rgb16<21301,1899,65535>,200,100,400>,HumpFlicker<Green,Yellow,50>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,200,800,Black>>(), "Vader5"},

  
// End of SmoothSwing Font Section //

// Non SmoothSwing Font Section //
   
// Vader / Sith RedOrange 2
   { "noss/VaderOT", "tracks/vader-march.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Red,DarkOrange,50>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,Rgb16<26168,65535,0>,40>,180,800,Black>>(), "Vader7"},
   
   { "noss/TheDark_KS_CF8", "tracks/ro-vader.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Rgb16<65535,0,0>,Rgb16<47835,33514,0>,200>,SpringGreen,200,100,400>,AudioFlicker<OnSpark<Green,White,400>,Red>,AudioFlicker<OnSpark<Green,White,200>,White>>,Rgb16<46419,44565,937>,40>,300,800,Black>>(), "Vader1"},
   
   { "noss/MENACE_KS", "tracks/ro-vader.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Rgb16<65535,0,0>,Rgb16<47835,33514,0>,200>,SpringGreen,200,100,400>,AudioFlicker<OnSpark<Green,White,400>,Red>,AudioFlicker<OnSpark<Green,White,200>,White>>,Rgb16<46419,44565,937>,40>,300,800,Black>>(), "Vader1"},

   
// Vader / Yellow_RedOrange with LocalizedClash and HumpFlicker
   { "noss/Crimson_Shade", "tracks/vader-r1.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<HumpFlicker<Red,Yellow,100>,Rgb16<21301,1899,65535>,200,100,400>,HumpFlicker<Green,Yellow,50>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,200,800,Black>>(), "Vader5"},
	
// Transformer Blades //
//Red
	{ "RogueVader_SS_KS", "tracks/kylo2.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Red,100,800,4600>,White>,BrownNoiseFlicker<OrangeRed,Yellow,100>>,White,40>,300,800,Black>>(),"XfmrRed"},

// End of Transformer Blades //

	
// Kylo type bladestyles //
//OrangeRed_Yellow
	{ "noss/Desolation2", "tracks/kylo1.wav", 
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<OrangeRed,Yellow,100>,SpringGreen>,AudioFlicker<GreenYellow,White>>,Magenta,40>,185,800,Black>>(),"KyloRed"},

// End of Kylo bladestyles //

	
// Pusling blade styles //
//Sith Pulse
	{ "noss/Qixoni", "tracks/ro-vader.wav", 
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<OrangeRed,Orange,3500>,White>,HumpFlicker<Green,Red,50>>,Rgb<195,100,255>,65>,195,800,Black>>(),"SithPulse"},

// End of Pulsing blade styles //

// End of Non SmoothSwing Font Section //
	
// Begin default Proffie bladestyles //


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
