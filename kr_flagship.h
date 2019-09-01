#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
//SmoothSwing Font Section //   
   { "Vaders_Assassin", "tracks/SWTOR1.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Pulsing<DeepSkyBlue,DodgerBlue,1850>,Orange,200,100,400>,AudioFlicker<HumpFlicker<Blue,White,50>,HumpFlicker<Blue,Red,65>>,AudioFlicker<Cyan,White>>,HumpFlicker<Green,Red,50>,160,75>,165,800,Black>>(),"JediBlue"},
   
   { "Vengeance_KS_SS", "tracks/SWTOR2.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Pulsing<Cyan,Aquamarine,1850>,Orange,200,100,400>,AudioFlicker<HumpFlicker<Blue,GreenYellow,50>,HumpFlicker<Green,Cyan,50>>,AudioFlicker<Cyan,White>>,HumpFlicker<Green,Magenta,50>,160,75>,185,800,Black>>(),"cybluez"},
   
   { "proto2", "tracks/rotj.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<GreenYellow,White,200,100,400>,AudioFlicker<HumpFlicker<Blue,GreenYellow,50>,HumpFlicker<Green,Cyan,50>>,AudioFlicker<Cyan,White>>,HumpFlicker<Green,Magenta,50>,160,75>,185,800,Black>>(),"JediGreen"},
   
   { "Jedi_01", "tracks/SW_DarkDeeds.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<ColorCycle<Yellow,0,1,AudioFlicker<DarkOrange,Rgb<128,0,0>>,100,3000,800>,White,200>,Strobe<Green,Black,15,1>>,AudioFlicker<OnSpark<ColorCycle<Yellow,0,1,AudioFlicker<DarkOrange,Rgb<128,0,0>>,100,3000,800>,White,200>,White>>,BrownNoiseFlicker<Green,Magenta,500>,120>,300,800,Black>>(),""},
   
   { "Ksith_Light_SS", "tracks/kylo1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<SteelBlue,0,1,DeepSkyBlue,100,1000,5500>,Magenta>,BrownNoiseFlicker<Blue,GhostWhite,250>>,Yellow,40>,300,800,Black>>(),"light"},
   
   { "proto1", "tracks/kylo2.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Rgb<150,0,255>,Rgb<50,0,230>,3500>,DarkOrange,200,100,400>,HumpFlicker<Rgb<185,95,0>,Rgb<255,100,150>,55>,HumpFlicker<Rgb<185,95,0>,Rgb<255,100,150>,55>>,Rgb<195,100,255>,65>,195,800,Black>>(),"proto1"},
   
   { "proto2", "tracks/mars.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Strobe<BrownNoiseFlicker<Cyan,Blue,500>,BrownNoiseFlicker<Green,White,50>,15,15>,Sparkle<White,Magenta,500,1024>,200,200,600>,AudioFlicker<Blue,White>,AudioFlicker<Blue,SpringGreen>>,Strobe<Blue,White,15,10>,100>,200,800,Black>>(),""},
   
   { "proto3", "tracks/kylo1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<Green,GreenYellow,Yellow>,Rgb16<21301,3694,39681>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Blue,40>,165,800,Black>>(),"ROTJv2"},
   
    { "Unstable", "tracks/kylo3.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<Green,GreenYellow,Yellow>,Rgb16<21301,3694,39681>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Blue,40>,165,800,Black>>(),"ROTJv2"},

   // Pusling blade styles //

	{ "root", "tracks/TLJ1.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<SpringGreen,GreenYellow,3500>,Orange>,HumpFlicker<Cyan,Ivory,50>>,Rgb<195,100,255>,65>,195,800,Black>>(),"JediPulse"},

//Mace Pulse
	{ "Jedi_02", "tracks/SWTOR2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Rgb<150,0,255>,Rgb<50,0,230>,3500>,DarkOrange>,HumpFlicker<Rgb<185,95,0>,Rgb<255,100,150>,55>>,Rgb<195,100,255>,65>,195,800,Black>>(),"MacePulse"},

// End of Pulsing blade styles //
	
//Weird, unstable and purple
	{"proto1", "tracks/kylo2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Rgb<160,80,255>,BrownNoiseFlicker<Red,DeepSkyBlue,250>,1450>,Strobe<Black,White,15,1>>,AudioFlicker<Blue,White>>,OnSpark<StyleFire<Yellow,Cyan,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,StyleFire<Blue,Cyan,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,200>,40>,300,800,Black>>(),"Mace2"},
	
	{"root", "tracks/vader-march2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<HumpFlicker<White,DeepSkyBlue,5>,Orange>,AudioFlicker<RandomFlicker<GreenYellow,Cyan>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,RandomFlicker<Cyan,Yellow>,75>,185,800,Black>>(), "KR"},
	
	{"Lady_Tano_v2", "tracks/vader3.wav",
	StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Pulsing<AudioFlicker<Magenta,Green>,AudioFlicker<Rgb16<14634,148,29351>,LightCyan>,5000>,GreenYellow,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,Yellow,65,50>,300,800,Black>>(),"KR"}, 
   
   // End of SmoothSwing Font Section //


   // Non SmoothSwing Font Section //
   { "noss/Nextor", "tracks/ro-vader.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<DeepSkyBlue,Rgb16<62191,64410,24155>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,40>,180,800,Black>>(),"ROTJv2"},
   
   { "noss/Crimson_Shade", "tracks/SW_DarkDeeds.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<GreenYellow,LightCyan>,SteelBlue,200,100,400>,AudioFlicker<Gradient<GreenYellow,Yellow>,White>,AudioFlicker<Gradient<GreenYellow,Yellow>,White>>,Gradient<DeepSkyBlue,Yellow>,40>,165,800,Black>>(),"cygreen"},
   
   { "noss/MOTF", "tracks/rotj.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<DeepSkyBlue,SteelBlue>,GreenYellow,200,100,400>,AudioFlicker<AudioFlicker<Orange,SteelBlue>,Rgb16<21301,3694,39681>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,SpringGreen,40>,300,800,Black>>(),"steelBlue"},
   
   { "noss/Qixoni", "tracks/kylo2.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<AudioFlicker<Red,GreenYellow>,Rgb16<39681,26168,548>,2500>,White,200,100,400>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>>,HoneyDew,40>,165,800,Black>>(),"AmberPulse"},
   
   { "noss/Korriban", "tracks/SWTOR1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<DeepSkyBlue,Rgb16<62191,64410,24155>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,40>,180,800,Black>>(),"ROTJv2"},
   
   { "noss/BensBetrayal", "tracks/kylo1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<Green,GreenYellow,Yellow>,Rgb16<21301,3694,39681>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Blue,40>,165,800,Black>>(),"ROTJv2"},

   
   
   
// End of Non SmoothSwing Font Section //
	
	


	
	
// Begin default Proffie bladestyles //
   { "TeensySF", "tracks/venus.wav",
    StyleNormalPtr<CYAN, WHITE, 300, 800>(), "cyan"},
   { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(), "blue"},
   { "SmthGrey", "tracks/mercury.wav",
    StyleFirePtr<RED, YELLOW>(), "fire"},
   { "SmthFuzz", "tracks/uranus.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(), "red"},
   { "RgueCmdr", "tracks/venus.wav",
    StyleFirePtr<BLUE, CYAN>(), "blue fire"},
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
