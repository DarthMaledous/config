#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 3
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
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<OnSpark<Rgb<10,255,0>,White,200>,Blue>,AudioFlicker<OnSpark<GreenYellow,White,200>,Yellow>,AudioFlicker<OnSpark<Rgb<10,255,0>,White,200>,White>>,Yellow,80>,180,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
	
   { "Ksith_Light_SS", "tracks/mars.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<GreenYellow,Orange>,AudioFlicker<HumpFlicker<Blue,GreenYellow,50>,HumpFlicker<Green,Cyan,50>>,AudioFlicker<Cyan,White>>,BrownNoiseFlicker<Green,Magenta,50>,250>,185,800,Black>>(), 
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
 
   { "Ksith_Vengeance_SS", "tracks/rotj2.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Pulsing<Rgb<10,255,0>,GreenYellow,2500>,HumpFlicker<Orange,Magenta,50>>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>,AudioFlicker<HumpFlicker<LightYellow,LightCyan,50>,Red>>,HoneyDew,40>,180,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
   
   { "TERRAFORM_NEC", "tracks/mars.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Rgb<10,255,0>,100,800,4600>,Magenta,200,100,100000>,BrownNoiseFlicker<Yellow,OrangeRed,500>,BrownNoiseFlicker<Yellow,OrangeRed,500>>,LightCyan,40>,185,800,Black>>(),
	StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
	
  { "Lady_Tano_v2", "tracks/SWESB_duel.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<OnSpark<Rgb<10,255,0>,White,200>,Blue>,AudioFlicker<OnSpark<GreenYellow,White,200>,Yellow>,AudioFlicker<OnSpark<Rgb<10,255,0>,White,200>,White>>,Yellow,80>,180,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
	
   { "cyber", "tracks/TLJ1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Gradient<RandomFlicker<Green,GreenYellow>,BrownNoiseFlicker<Yellow,GreenYellow,500>>,Strobe<Snow,Blue,15,1>>,AudioFlicker<Gradient<HumpFlicker<Magenta,SpringGreen,40>,Strobe<Orange,Rgb<0,10,100>,15,1>>,White>,AudioFlicker<Gradient<HumpFlicker<Magenta,SpringGreen,40>,Strobe<Orange,Rgb<0,10,100>,15,1>>,White>>,Gradient<Strobe<Magenta,Orange,15,10>,Strobe<DodgerBlue,Cyan,15,10>>,120>,200,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
   
   { "proto1", "tracks/kylo2.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Pulsing<AudioFlicker<Green,GreenYellow>,AudioFlicker<GreenYellow,Orange>,3500>,Orange>,RandomFlicker<Cyan,SteelBlue>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,Cyan,80>,175,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
   
   { "Ksith_Light_SS", "tracks/rotj2.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<Green,GreenYellow,3500>,Orange,200,100,400>,HumpFlicker<Cyan,Ivory,50>,HumpFlicker<Cyan,Ivory,50>>,Rgb<195,100,255>,65>,185,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
   
   { "proto2", "tracks/mars.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Rgb<10,255,0>,100,800,4600>,Magenta,200,100,100000>,BrownNoiseFlicker<Yellow,OrangeRed,500>,BrownNoiseFlicker<Yellow,OrangeRed,500>>,LightCyan,40>,185,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
   
   { "noss/RANGERS_BLADE_NEC", "tracks/SWESB_duel.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<OnSpark<Rgb<10,255,0>,White,200>,Blue>,AudioFlicker<OnSpark<GreenYellow,White,200>,Yellow>,AudioFlicker<OnSpark<Rgb<10,255,0>,White,200>,White>>,Yellow,80>,180,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
   
   { "noss/SIGIL_NEC", "tracks/TLJ1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<OnSpark<Rgb<10,255,0>,White,200>,Blue>,AudioFlicker<OnSpark<GreenYellow,White,200>,Yellow>,AudioFlicker<OnSpark<Rgb<10,255,0>,White,200>,White>>,Yellow,80>,180,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
	
   { "proto3", "tracks/SWESB_duel.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<OnSpark<Rgb<10,255,0>,White,200>,Blue>,AudioFlicker<OnSpark<GreenYellow,White,200>,Yellow>,AudioFlicker<OnSpark<Rgb<10,255,0>,White,200>,White>>,Yellow,80>,180,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Green,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Red,White>>,White,40>,300,800,Black>>(),
   StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Blinking<Red,Black,300,500>,White,200,100,400>,AudioFlicker<Red,White>,AudioFlicker<Green,White>>,White,40>,300,800,Black>>(), "CreepyUncle"},
	
{ "SmthFuzz", "",
&style_charging,
StyleNormalPtr<BLACK, BLACK, 100,100>(),
StyleNormalPtr<BLACK, BLACK, 100,100>(),}


};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<144, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), 
      SimpleBladePtr<CreeXPE2GreenTemplate<13000>, NoLED, NoLED, NoLED, bladePowerPin4, -1, -1, -1>(),
	  SimpleBladePtr<CreeXPE2RedTemplate<100000>, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(),
CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
