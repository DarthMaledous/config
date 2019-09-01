#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 2
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
	
   { "cyber", "tracks/kylo1.wav",
    StylePtr<SimpleClash<Lockup<Blast<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,Magenta,200,100,400>,AudioFlicker<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,White>,AudioFlicker<ColorCycle<Black,1,0,AudioFlicker<Red,Orange>,100,2000,3000>,White>>,Green,40>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Green,Red,50>,White,200,100,400>,AudioFlicker<AudioFlicker<Yellow,White>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,185,800,Pulsing<Red,Black,2800>>>(), "revan"},
   
   { "Vengeance_KS_SS", "tracks/SW_DarkDeeds.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Green,Red,50>,White,200,100,1000000>,AudioFlicker<AudioFlicker<Yellow,White>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,185,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Green,Red,50>,White,200,100,1000000>,AudioFlicker<AudioFlicker<Yellow,White>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,185,800,Pulsing<Black,Red,2800>>>(), "revan"},
	
  { "The_Dark_SS_KS", "tracks/KOTFE_Valkorian.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Green,Red,50>,White,200,100,1000000>,AudioFlicker<AudioFlicker<Yellow,White>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,185,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Green,Red,50>,White,200,100,1000000>,AudioFlicker<AudioFlicker<Yellow,White>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,185,800,Pulsing<Black,Red,2800>>>(), "revan"},
	
	{"noss/CRIMSON_SHADE_NEC", "tracks/darth_nihilus.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<HumpFlicker<Yellow,Red,15>,Green>,AudioFlicker<AudioFlicker<Yellow,White>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Yellow,40>,185,800,Black>>(),
	StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<HumpFlicker<Yellow,Red,15>,Green>,AudioFlicker<AudioFlicker<Yellow,White>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Yellow,40>,185,800,Black>>(), "crystalchamber"},


// Revan Purple
//1
   { "proto1", "tracks/SWTOR2.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Rgb16<14634,148,29351>,Magenta,50>,Green,200,100,1000000>,AudioFlicker<OrangeRed,White>,AudioFlicker<Blue,White>>,Cyan,40>,180,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Rgb16<14634,148,29351>,Magenta,50>,Green,200,100,1000000>,AudioFlicker<OrangeRed,White>,AudioFlicker<Blue,White>>,Cyan,40>,180,800,Pulsing<Red,Rgb16<14634,148,29351>,4000>>>(), "crystalchamber"},

   { "The_Dark_SS_KS", "tracks/SWTOR2.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Rgb16<14634,148,29351>,Magenta,50>,Green,200,100,1000000>,AudioFlicker<OrangeRed,White>,AudioFlicker<Blue,White>>,Cyan,40>,180,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Rgb16<14634,148,29351>,Magenta,50>,Green,200,100,1000000>,AudioFlicker<OrangeRed,White>,AudioFlicker<Blue,White>>,Cyan,40>,180,800,Pulsing<Red,Rgb16<14634,148,29351>,4000>>>(), "crystalchamber"},

	{ "noss/MENACE_KS_NEC", "tracks/SWTOR2.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Rgb16<14634,148,29351>,Magenta,50>,Green,200,100,1000000>,AudioFlicker<OrangeRed,White>,AudioFlicker<Blue,White>>,Cyan,40>,180,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Rgb16<14634,148,29351>,Magenta,50>,Green,200,100,1000000>,AudioFlicker<OrangeRed,White>,AudioFlicker<Blue,White>>,Cyan,40>,180,800,Pulsing<Red,Rgb16<14634,148,29351>,4000>>>(), "crystalchamber"},

//Unstable Pulsing Purple 2
   { "proto2", "tracks/SW_DarkDeeds.wav",
    StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Pulsing<AudioFlicker<Magenta,Green>,AudioFlicker<Rgb16<14634,148,29351>,LightCyan>,5000>,GreenYellow,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,Yellow,65,50>,300,800,Black>>(),
    StylePtr<InOutHelper<HumpFlicker<Cyan,Magenta,50>,100,100,Pulsing<Magenta,Red,1800>>>(), "crystalchamber"},

//Unstable Pulsing Purple 2
   { "Lady_Tano_v2", "tracks/KOTFE_Valkorian.wav",
    StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Pulsing<AudioFlicker<Magenta,Green>,AudioFlicker<Rgb16<14634,148,29351>,LightCyan>,5000>,GreenYellow,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,Yellow,65,50>,300,800,Black>>(),
    StylePtr<InOutHelper<HumpFlicker<Cyan,Magenta,50>,100,100,Pulsing<Magenta,Red,1800>>>(), "crystalchamber"},
	
	
   { "Revan1", "tracks/darth_revan2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Rgb<150,0,255>,Rgb16<40546,36732,11>,3500>,DarkOrange,200,100,400>,HumpFlicker<Rgb<185,95,0>,Rgb<255,100,150>,55>,HumpFlicker<Rgb<185,95,0>,Rgb<255,100,150>,55>>,Rgb<195,100,255>,65>,195,800,Black>>(),
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Rgb<150,0,255>,Rgb16<40546,36732,11>,3500>,DarkOrange,200,100,400>,HumpFlicker<Rgb<185,95,0>,Rgb<255,100,150>,55>,HumpFlicker<Rgb<185,95,0>,Rgb<255,100,150>,55>>,Rgb<195,100,255>,65>,195,800,HumpFlicker<Green,Magenta,50>>>(), "crystalchamber"},
	
// Revan CYAN 
// 1
   { "SmthJedi", "tracks/darth_nihilus.wav",
    StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<RandomFlicker<Cyan,DeepSkyBlue>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,HumpFlicker<Green,Red,50>,85,50>,180,800,Black>>(),
    StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<RandomFlicker<Cyan,DeepSkyBlue>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,HumpFlicker<Green,Red,50>,85,50>,180,800,Pulsing<Cyan,DeepSkyBlue,2000>>>(), "crystalchamber"},
	
	{ "Revan2", "tracks/SWTOR1.wav",
     StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<RandomFlicker<Cyan,DeepSkyBlue>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,HumpFlicker<Green,Red,50>,85,50>,180,800,Black>>(),
     StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<RandomFlicker<Cyan,DeepSkyBlue>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,HumpFlicker<Green,Red,50>,85,50>,180,800,Pulsing<Cyan,DeepSkyBlue,2000>>>(), "crystalchamber"},


   { "noss/RANGERS_BLADE_NEC", "tracks/SWTOR1.wav",
     StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<RandomFlicker<Cyan,DeepSkyBlue>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,HumpFlicker<Green,Red,50>,85,50>,180,800,Black>>(),
     StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<RandomFlicker<Cyan,DeepSkyBlue>,Magenta,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,HumpFlicker<Green,Red,50>,85,50>,180,800,Pulsing<Cyan,DeepSkyBlue,2000>>>(), "crystalchamber"},

//2
   { "noss/TERRAFORM_NEC", "tracks/scorpion.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Blue,0,1,Cyan,100,3000,5000>,Red,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,Magenta,60>,300,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Blue,0,1,Cyan,100,3000,5000>,Red,200,100,400>,AudioFlicker<Blue,White>,AudioFlicker<Blue,White>>,Magenta,60>,300,800,RandomFlicker<GreenYellow,Blue>>>(), "crystalchamber"},


// Revan RED
   { "RgueCmdr", "tracks/KOTFE_Valkorian.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Chartreuse,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Blue,White>>,GreenYellow,40>,180,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Chartreuse,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Blue,White>>,GreenYellow,40>,180,800,Pulsing<Blue,Magenta,1800>>>(), "crystalchamber"},
	
	{ "noss/Fates", "tracks/KOTFE_Valkorian.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Chartreuse,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Blue,White>>,GreenYellow,40>,180,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Chartreuse,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Blue,White>>,GreenYellow,40>,180,800,Pulsing<Blue,Magenta,1800>>>(), "crystalchamber"},
 
   { "noss/KOTFE_NEC", "tracks/KOTFE_Valkorian.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Chartreuse,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Blue,White>>,GreenYellow,40>,180,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Chartreuse,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Blue,White>>,GreenYellow,40>,180,800,Pulsing<Blue,Magenta,1800>>>(), "crystalchamber"},

   { "noss/REVAN_REBIRTH_NEC", "tracks/SWTOR2.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Chartreuse,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Blue,White>>,GreenYellow,40>,180,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Red,Chartreuse,200,100,400>,AudioFlicker<Red,Green>,AudioFlicker<Blue,White>>,GreenYellow,40>,180,800,Pulsing<Blue,Magenta,1800>>>(), "crystalchamber"},


// Revan Orange_AmberYellow
   { "proto3", "tracks/kylo1.wav",
    StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Gradient<Pulsing<OrangeRed,Rgb16<40546,36732,11>,2000>,DarkOrange>,Green,200,100,400>,AudioFlicker<Yellow,Rgb16<65535,14386,3131>>,AudioFlicker<Blue,White>>,GreenYellow,85,50>,300,800,Black>>(),
    StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Gradient<Pulsing<OrangeRed,Rgb16<40546,36732,11>,2000>,DarkOrange>,Green,200,100,400>,AudioFlicker<Yellow,Rgb16<65535,14386,3131>>,AudioFlicker<Blue,White>>,GreenYellow,85,50>,300,800,Pulsing<Rgb16<40546,36732,11>,Red,3500>>>(), "crystalchamber"},
	
   { "KRossguardv2_KS_SS", "tracks/kylo1.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<RandomFlicker<Rgb16<40546,36732,11>,OrangeRed>,OrangeRed,400>,Green,200,100,400>,RandomFlicker<GreenYellow,Magenta>,AudioFlicker<OnSpark<Green,White,200>,White>>,HumpFlicker<Rgb16<15651,2521,31206>,DeepSkyBlue,50>,65>,180,800,Black>>(),
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<RandomFlicker<Rgb16<40546,36732,11>,OrangeRed>,OrangeRed,400>,Green,200,100,400>,RandomFlicker<GreenYellow,Magenta>,AudioFlicker<OnSpark<Green,White,200>,White>>,HumpFlicker<Rgb16<15651,2521,31206>,DeepSkyBlue,50>,65>,180,800,Blinking<Rgb16<15651,2521,31206>,Rgb16<40546,36732,11>,1000,250>>>(), "crystalchamber"},

	{ "noss/Spitfire", "tracks/darth_nihilus.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<BrownNoiseFlicker<Strobe<Black,Rgb<255,100,0>,50,1>,Strobe<Red,Black,50,1>,50>,White,100>,White>,AudioFlicker<OnSpark<BrownNoiseFlicker<Strobe<Black,Yellow,50,1>,Strobe<Red,Black,50,1>,50>,White,200>,White>>,White,40>,100,200,Black>>(),
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<BrownNoiseFlicker<Strobe<Black,Rgb<255,100,0>,50,1>,Strobe<Red,Black,50,1>,50>,White,100>,White>,AudioFlicker<OnSpark<BrownNoiseFlicker<Strobe<Black,Yellow,50,1>,Strobe<Red,Black,50,1>,50>,White,200>,White>>,White,40>,100,200,Black>>(), "crystalchamber"},

 
   { "SmthGrey", "tracks/mercury.wav",
    StyleFirePtr<RED, YELLOW, 0>(),
    StyleFirePtr<RED, YELLOW, 1>(), "fire"},
	
	   { "SmthFuzz", "tracks/uranus.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(),
    StyleNormalPtr<RED, WHITE, 300, 800>(), "red"},

     { "TeensySF", "tracks/mercury.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(),
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), "white"},
	
   { "SmthJedi", "tracks/uranus.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(),
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), "yellow"},
	
   { "SmthGrey", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(),
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "magenta"},
	
   { "TeensySF", "tracks/venus.wav",
    &style_pov,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "POV"},
	
   { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<118, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
    WS2811BladePtr<1, WS2811_ACTUALLY_800kHz | WS2811_GRB, blade2Pin, PowerPINS<bladePowerPin4> >()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
