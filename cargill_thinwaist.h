#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 3
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
	{ "Vaders_Assassin", "tracks/SK1.wav",
	StylePtr<InOutHelper<LocalizedClash<Lockup<OriginalBlast<Pulsing<Red,Rgb16<33124,0,0>,3000>,Green>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,BrownNoiseFlicker<Green,Red,50>,300,75>,195,600,Black>>(),
	
	{"Sith_02","tracks/SW_AST2.wav",
	StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<AudioFlicker<HumpFlicker<Rgb16<24816,0,0>,Red,15>,AudioFlicker<Rgb16<24816,0,0>,Yellow>>,Green>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,195,600,Black>>(),
	StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<AudioFlicker<HumpFlicker<Rgb16<24816,0,0>,Red,15>,AudioFlicker<Rgb16<24816,0,0>,Yellow>>,Green>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,195,800,Pulsing<HumpFlicker<Rgb16<24816,0,0>,OrangeRed,50>,HumpFlicker<Red,Orange,50>,1900>>>(), "PPSK"},
	
	
	{ "Ksith_Vengeance_SS", "tracks/SK2.wav",
	StylePtr<InOutHelper<LocalizedClash<Lockup<OriginalBlast<Red,White>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,BrownNoiseFlicker<Green,Red,50>,220,75>,195,600,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<HumpFlicker<White,DeepSkyBlue,5>,Orange>,AudioFlicker<RandomFlicker<GreenYellow,Cyan>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,RandomFlicker<Cyan,Yellow>,75>,185,800,Pulsing<HumpFlicker<Red,Cyan,50>,Cyan,4800>>>(), "PPSK"},
	
   { "cyber", "tracks/SW_DarkDeeds.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb16<42307,25487,110>>,Cyan,200,100,100000000>,RandomFlicker<DarkOrange,Yellow>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,Magenta,40>,190,600,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb16<24816,0,0>>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,500>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,185,800,Pulsing<Black,Red,3000>>>(), "PPSK"},
   
   { "Lady_Tano_v2", "tracks/vader_track05.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Gradient<Pulsing<AudioFlicker<Rgb16<24816,0,0>,Red>,AudioFlicker<OrangeRed,Rgb16<45025,0,0>>,2800>,HumpFlicker<Rgb16<24816,0,0>,Rgb16<42307,25487,110>,35>,Pulsing<AudioFlicker<Rgb16<45025,0,0>,Rgb16<24816,0,0>>,Red,800>>,Green>,AudioFlicker<RandomFlicker<GreenYellow,Magenta>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,RandomFlicker<Yellow,Blue>,75>,185,600,Black>>(),
   StylePtr<IgnitionDelay<500,InOutHelper<SimpleClash<Lockup<Blast<OnSpark<AudioFlicker<Red,Black>,Magenta,200>,White,200,100,400>,AudioFlicker<OnSpark<Green,White,200>,White>,AudioFlicker<OnSpark<Green,White,200>,White>>,White,40>,300,800,AudioFlicker<Red,Rgb16<42307,25487,110>>>>>(),"PPSK"},
   
   { "NEC/Nextor", "tracks/SW_AST2.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Rgb16<65535,0,0>,Rgb16<47835,33514,0>,200>,SpringGreen,200,100,400>,AudioFlicker<OnSpark<Green,White,400>,Red>,AudioFlicker<OnSpark<Green,White,200>,White>>,Rgb16<46419,44565,937>,65>,180,600,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Rgb16<65535,0,0>,Rgb16<47835,33514,0>,200>,SpringGreen,200,100,400>,AudioFlicker<OnSpark<Green,White,400>,Red>,AudioFlicker<OnSpark<Green,White,200>,White>>,Rgb16<46419,44565,937>,65>,180,800,Blinking<Blinking<Red,Blue,150,500>,Blinking<Red,Green,250,500>,1000,500>>>(), "PPSK"},
   
   {"Unstable", "tracks/SK3.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<AudioFlicker<Red,Rgb<120,0,0>>,DeepSkyBlue,200,100,400>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,3500>,AudioFlicker<Red,White>>,White,80,50>,185,500,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Rgb16<65535,0,0>,Rgb16<47835,33514,0>,200>,SpringGreen,200,100,400>,AudioFlicker<OnSpark<Green,White,400>,Red>,AudioFlicker<OnSpark<Green,White,200>,White>>,Rgb16<46419,44565,937>,65>,180,800,Blinking<Blinking<AudioFlicker<GreenYellow,Orange>,Red,150,500>,Blinking<BrownNoiseFlicker<Green,Red,50>,AudioFlicker<Red,Blue>,250,500>,1000,500>>>(), "PPSK"},
   
   {"root", "tracks/darth_nihilus.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,White,200,100,400>,Pulsing<Gradient<AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>>,Gradient<AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>>,3500>>,White,40>,180,500,Black>>(),
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,White,200,100,400>,Pulsing<Gradient<AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>>,Gradient<AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>>,3500>,Pulsing<Gradient<AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>>,Gradient<AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>,AudioFlicker<Rgb<220,0,255>,Rgb<130,0,160>>>,3500>>,White,40,50>,180,500,Pulsing<HumpFlicker<Cyan,Magenta,50>,BrownNoiseFlicker<Red,Blue,35>,800>>>(), "PPSK"},
   
   
   {"Jedi_01", "tracks/SK4.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<AudioFlicker<DeepSkyBlue,Blue>,HumpFlicker<White,GreenYellow,25>,1000,60,100000000>,AudioFlicker<HumpFlicker<Gradient<AudioFlicker<White,DeepSkyBlue>,BrownNoiseFlicker<Green,Cyan,50>>,Gradient<Cyan,Green,Yellow,White>,30>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,HumpFlicker<Green,Yellow,50>,40,50>,195,600,Black>>(),
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<AudioFlicker<DeepSkyBlue,Blue>,HumpFlicker<White,GreenYellow,25>,1000,60,100000000>,AudioFlicker<HumpFlicker<Gradient<AudioFlicker<White,DeepSkyBlue>,BrownNoiseFlicker<Green,Cyan,50>>,Gradient<Cyan,Green,Yellow,White>,30>,DarkOrange>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,HumpFlicker<Green,Yellow,50>,40,50>,195,600,Pulsing<AudioFlicker<DeepSkyBlue,Black>,BrownNoiseFlicker<DodgerBlue,Black,50>,4000>>>(), "PPSK"},
   

   {"Jedi_02", "tracks/SK5.wav",
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<AudioFlicker<DeepSkyBlue,White>,HumpFlicker<Green,Magenta,50>,200,40,400>,AudioFlicker<OnSpark<Green,White,200>,White>,AudioFlicker<OnSpark<Green,White,200>,White>>,White,80,50>,175,600,Black>>(),
   StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<AudioFlicker<DeepSkyBlue,White>,HumpFlicker<Green,Magenta,50>,200,40,400>,AudioFlicker<OnSpark<Green,White,200>,White>,AudioFlicker<OnSpark<Green,White,200>,White>>,White,80,50>,175,600,Pulsing<AudioFlicker<Cyan,DodgerBlue>,Blinking<White,Rgb16<28626,22863,937>,350,75>,5000>>>(), "PPSK"},
   
   
  
   { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
  { 0, WS2811BladePtr<144, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
    WS2811BladePtr<1, WS2811_ACTUALLY_800kHz | WS2811_GRB, blade2Pin, PowerPINS<bladePowerPin5> >(),
	WS2811BladePtr<2, WS2811_ACTUALLY_800kHz | WS2811_GRB, blade3Pin, PowerPINS<bladePowerPin4> >(),
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
