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
//SmoothSwing Font Section //   
   { "Ksith_LS6_SS", "tracks/rotj.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<DeepSkyBlue,Rgb16<62191,64410,24155>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,40>,180,800,Black>>(),"ROTJv2"},
   
   { "Jedi_02", "tracks/traya.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<Cyan,LightCyan>,SteelBlue>,AudioFlicker<Gradient<GreenYellow,Yellow>,White>>,Gradient<DeepSkyBlue,Yellow>,40>,300,800,Black>>(),"cybluez"},
   
   { "Jedi_01", "tracks/rotj.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<DeepSkyBlue,SteelBlue>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,300,800,Black>>(),"steelBlue"},
   
   { "Vaders_Assassin", "tracks/mars.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<SpringGreen,GreenYellow,2500>,White>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>>,HoneyDew,40>,180,800,Black>>(),"ROTJv2Pulse"},
   
   { "Unstable", "tracks/kylo1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<DeepSkyBlue,Rgb16<62191,64410,24155>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,40>,180,800,Black>>(),"ROTJv2"},
// End of SmoothSwing Font Section //

   // Non SmoothSwing Font Section //
   { "noss/Balance", "tracks/ro-vader.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<DeepSkyBlue,Rgb16<62191,64410,24155>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,40>,180,800,Black>>(),"ROTJv2"},
   
   { "noss/Glare", "tracks/kylo1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Gradient<Cyan,LightCyan>,SteelBlue>,AudioFlicker<Gradient<GreenYellow,Yellow>,White>>,Gradient<DeepSkyBlue,Yellow>,40>,300,800,Black>>(),"cybluez"},
   
   { "noss/EpisodeVI", "tracks/rotj.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<DeepSkyBlue,SteelBlue>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,300,800,Black>>(),"steelBlue"},
   
   { "noss/Qixoni", "tracks/mars.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<SpringGreen,GreenYellow,2500>,White>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>>,HoneyDew,40>,180,800,Black>>(),"ROTJv2Pulse"},
   
   { "noss/V2Plecter", "tracks/rotj.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<DeepSkyBlue,Rgb16<62191,64410,24155>,200,100,400>,AudioFlicker<AudioFlicker<Yellow,Black>,White>,AudioFlicker<AudioFlicker<Yellow,Black>,White>>,Rgb<220,220,70>,40>,180,800,Black>>(),"ROTJv2"},
   
// End of Non SmoothSwing Font Section //
	

// Transformer Blades //
//Red
	{ "RogueVader_SS_KS", "tracks/kylo2.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Red,100,800,4600>,White>,BrownNoiseFlicker<OrangeRed,Yellow,100>>,White,40>,300,800,Black>>(),"XfmrRed"},
//Green
	{ "Ksith_LS6_SS", "tracks/mars.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Green,100,800,4600>,SteelBlue>,BrownNoiseFlicker<Yellow,OrangeRed,500>>,LightCyan,40>,300,800,Black>>(),"XfmrBlue"},
//Cyan
	{ "Ksith_Light_SS", "tracks/rotj.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Aquamarine,0,1,Cyan,100,800,4600>,SteelBlue>,BrownNoiseFlicker<SteelBlue,GhostWhite,250>>,Yellow,40>,300,800,Black>>(),"XfmrCyan"},
//Blue
	{ "noss/TERRAFORM", "tracks/mars.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<SteelBlue,0,1,DeepSkyBlue,100,800,4600>,Magenta>,BrownNoiseFlicker<Blue,GhostWhite,250>>,Yellow,40>,300,800,Black>>(),"XfmrBlue"},
// End of Transformer Blades //

	
// Kylo type bladestyles //
//OrangeRed_Yellow
	{ "noss/Desolation2", "tracks/kylo1.wav", 
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<OrangeRed,Yellow,100>,SpringGreen>,AudioFlicker<GreenYellow,White>>,Magenta,40>,185,800,Black>>(),"KyloRed"},
//Jedi_Green
	{ "Krossguardv2_KS_SS", "tracks/kylo3.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<BrownNoiseFlicker<Green,LightYellow,350>,Red>,HumpFlicker<Green,Magenta,75>>,Cyan,80>,185,800,Black>>(),"KyloJedi"},
// End of Kylo bladestyles //

	
// Pusling blade styles //
//Sith Pulse
	{ "SmthFuzz", "tracks/ro-vader.wav", 
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<OrangeRed,Orange,3500>,White>,HumpFlicker<Green,Red,50>>,Rgb<195,100,255>,65>,195,800,Black>>(),"SithPulse"},
//Jedi Pulse
	{ "Scorpion", "tracks/scorpion.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<SpringGreen,GreenYellow,3500>,Orange>,HumpFlicker<Cyan,Ivory,50>>,Rgb<195,100,255>,65>,195,800,Black>>(),"JediPulse"},
//Mace Pulse
	{ "TthCrstl", "tracks/venus.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Rgb<150,0,255>,Rgb<50,0,230>,3500>,DarkOrange>,HumpFlicker<Rgb<185,95,0>,Rgb<255,100,150>,55>>,Rgb<195,100,255>,65>,195,800,Black>>(),"MacePulse"},
// End of Pulsing blade styles //
	
//Weird, unstable and purple
	{"proto1", "tracks/kylo2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Rgb<160,80,255>,BrownNoiseFlicker<Red,DeepSkyBlue,250>,1450>,Strobe<Black,White,15,1>>,AudioFlicker<Blue,White>>,OnSpark<StyleFire<Yellow,Cyan,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,StyleFire<Blue,Cyan,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,200>,40>,300,800,Black>>(),"Mace2"},

//IceFire Blue Unstable blade
	{"proto2", "tracks/proto2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Strobe<BrownNoiseFlicker<Cyan,Blue,500>,BrownNoiseFlicker<Green,White,50>,15,15>,Sparkle<White,Magenta,500,1024>,200,200,600>,AudioFlicker<Blue,White>,AudioFlicker<Blue,SpringGreen>>,Strobe<Blue,White,15,10>,100>,200,800,Black>>(),"IFBlue"},

//IceFire Green Unstable blade v1
	{"proto3", "tracks/ro-vader.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Strobe<BrownNoiseFlicker<SteelBlue,SpringGreen,500>,BrownNoiseFlicker<GreenYellow,White,50>,15,15>,Sparkle<White,Magenta,500,1024>,200,200,600>,AudioFlicker<Blue,White>,AudioFlicker<Blue,SpringGreen>>,Strobe<Blue,White,15,10>,100>,200,800,Black>>(),"IFGreen"},


//IceFire Green Unstable blade v2
	{"cyber", "tracks/kylo2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Strobe<BrownNoiseFlicker<SteelBlue,SpringGreen,500>,BrownNoiseFlicker<GreenYellow,White,50>,15,15>,Sparkle<White,Magenta,500,1024>,200,200,600>,Cylon<StyleFire<Blue,Cyan,0,2,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,80,200,BrownNoiseFlicker<Magenta,Cyan,50>,98,300,1>,AudioFlicker<Blue,SpringGreen>>,Strobe<Blue,White,15,10>,100>,200,800,Black>>(),"IFGrn2"},

	
	
// Begin default Proffie bladestyles //
   { "TeensySF", "tracks/venus.wav",
    StyleNormalPtr<CYAN, WHITE, 300, 800>(), "cyan"},
   { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(), "blue"},
   { "RgueCmdr", "tracks/venus.wav",
    StyleFirePtr<BLUE, CYAN>(), "blue fire"},
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
   { "SmthGrey", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "magenta"},
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
