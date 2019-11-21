#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 3000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "Ksith_LS6_SS", "tracks/rotj.wav",
  StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Rgb<10,255,0>,Magenta>,AudioFlicker<AudioFlicker<Yellow,Black>,Orange>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,80>,180,800,Black>>(),"ROTJv2"},
  
   { "Jedi_01", "tracks/rotj.wav",
  StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Rgb<10,255,0>,Magenta>,AudioFlicker<AudioFlicker<Yellow,Black>,Orange>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,80>,180,800,Black>>(),"ROTJv2"},

   {"Jedi_02", "tracks/rotj2.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Rgb<10,255,0>,Magenta>,AudioFlicker<AudioFlicker<Yellow,Black>,Orange>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,80>,180,800,Black>>(),"ROTJv2"},

   { "Ksith_Vengeance_SS", "tracks/kylo3.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Rgb<10,255,0>,Magenta>,AudioFlicker<AudioFlicker<Yellow,Black>,Orange>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,80>,180,800,Black>>(),"ROTJv2"},

   { "Ksith_LS6_SS", "tracks/mars.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<SpringGreen,GreenYellow,2500>,White>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>>,HoneyDew,40>,180,800,Black>>(),"ROTJv2Pulse"},
   
   { "Ksith_Light_SS", "tracks/luke-vader.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Green,White,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Cyan,White>>,White,40>,185,800,Black>>(),"ROTJv2Green"},
   
   { "Ksith_Vengeance_SS", "tracks/ro-vader",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<GreenYellow,White,200,100,400>,AudioFlicker<Yellow,White>,AudioFlicker<Cyan,White>>,White,40>,185,800,Black>>(),"v2GrnYellow"},
	
// Transformer Blades //

//Green
	{ "root", "tracks/mars.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Green,100,800,4600>,SteelBlue>,BrownNoiseFlicker<Yellow,OrangeRed,500>>,LightCyan,40>,300,800,Black>>(),"XfmrBlue"},

// End of Transformer Blades //

	
// Kylo type bladestyles //

//Jedi_Green
	{"Unstable", "tracks/kylo1.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Green,LightYellow,350>,Red>,HumpFlicker<Green,Magenta,75>>,Cyan,80>,185,800,Black>>(),"KyloJedi"},
// End of Kylo bladestyles //

	
// Pusling blade styles //

//Jedi Pulse
	{ "SmthJedi", "tracks/uranus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<SpringGreen,GreenYellow,3500>,Orange>,HumpFlicker<Cyan,Ivory,50>>,Rgb<195,100,255>,65>,195,800,Black>>(),"JediPulse"},

// End of Pulsing blade styles //
	
//Weird, unstable and purple
	{ "proto1", "tracks/kylo2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Rgb<160,80,255>,BrownNoiseFlicker<Red,DeepSkyBlue,250>,1450>,Strobe<Black,White,15,1>>,AudioFlicker<Blue,White>>,OnSpark<StyleFire<Yellow,Cyan,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,StyleFire<Blue,Cyan,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,200>,40>,300,800,Black>>(),"Mace2"},

//IceFire Green Unstable blade v1
	{ "proto3", "tracks/ro-vader",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Strobe<BrownNoiseFlicker<SteelBlue,SpringGreen,500>,BrownNoiseFlicker<GreenYellow,White,50>,15,15>,Sparkle<White,Magenta,500,1024>,200,200,600>,AudioFlicker<Blue,White>,AudioFlicker<Blue,SpringGreen>>,Strobe<Blue,White,15,10>,100>,200,800,Black>>(),"IFGreen"},

// End of Weird, unstable

	
// Begin default Proffie bladestyles //
  
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
  
   { "SmthJedi", "tracks/uranus.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), "yellow"},
	
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
