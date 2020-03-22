#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2300
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVED_PRESET
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "Peace", "tracks/sw_jedi_theme1.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Blue,Rgb<20,45,255>>,Pulsing<Gradient<RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>>,Pulsing<Gradient<RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>>,Gradient<RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,100,70>,White>,White,400>,200,500>>(), "cyan"},
	
	
 { "Corellian_CFX", "tracks/JFO5.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Blue,Pulsing<Gradient<Blue,Blue,Strobe<GhostWhite,BrownNoiseFlicker<Red,GhostWhite,300>,50,1>,Blue,Blue>,Gradient<Blue,Blue,Strobe<GhostWhite,BrownNoiseFlicker<Red,GhostWhite,300>,50,1>,Blue,Blue,Blue>,3500>,RandomPerLEDFlicker<Red,White>>>,White>,RandomFlicker<GhostWhite,DodgerBlue>,800>,200,500>>(), "blue"},
 
  
 
 { "Battle", "tracks/JFO3.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Pulsing<Gradient<Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Strobe<GhostWhite,BrownNoiseFlicker<Yellow,White,200>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>>,Gradient<Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Strobe<GhostWhite,BrownNoiseFlicker<Yellow,White,200>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>>,3500>,RandomPerLEDFlicker<Red,White>>,White,70,65>,White>,HumpFlicker<GhostWhite,Cyan,50>,800>,200,500>>(), "fire"},
	
	
{ "Survivor_Blue", "tracks/SW_Fates_TPM.wav",
 StylePtr<InOutHelper<OnSpark<LocalizedClash<Lockup<Blast<AudioFlicker<Gradient<Gradient<DeepSkyBlue,Blue,Blue>,Blue,Blue,Blue,Blue,Blue,Blue,Blue>,DeepSkyBlue>,BrownNoiseFlicker<Green,Yellow,300>,150,200,600>,Pulsing<Gradient<AudioFlicker<Pink,Rgb<120,20,235>>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>>,Gradient<AudioFlicker<Pink,Rgb<120,20,235>>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>>,3500>,Gradient<AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,Gradient<AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,White>>>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,50>,100>,Gradient<AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,Gradient<AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,White>>,1400>,200,300>>(), "blue"},
  
  
  
{ "OWK", "tracks/BattleOfHeros.wav",
 StylePtr<InOutHelper<OnSpark<Stab<LocalizedClash<Lockup<Blast<AudioFlicker<Gradient<Gradient<Cyan,Blue,Blue>,Blue,Blue,Blue,Blue,Blue,Blue,Blue>,Rgb<0,0,150>>,BrownNoiseFlicker<Red,Magenta,300>,150,200,600>,Pulsing<Gradient<AudioFlicker<Cyan,Blue>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>>,Gradient<AudioFlicker<Cyan,Blue>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>,HumpFlicker<Blue,Rgb<0,0,150>,50>>,3500>,Gradient<AudioFlicker<Blue,Rgb<0,0,150>>,AudioFlicker<Blue,Rgb<0,0,150>>,AudioFlicker<Blue,Rgb<0,0,150>>,Gradient<AudioFlicker<Blue,Rgb<0,0,150>>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,White>>>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,50>,100,50>,Gradient<AudioFlicker<Blue,Rgb<0,0,150>>,AudioFlicker<Blue,Rgb<0,0,150>>,AudioFlicker<Blue,Rgb<0,0,150>>,Gradient<AudioFlicker<Blue,Rgb<0,0,150>>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,White>>,1400>,White,200>,200,300,Black>>(), "blue"},

	
{ "EP1_Obi_Proffie", "tracks/EP1_Obi_Wan.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Blue,Rgb<0,25,130>>,Pulsing<Gradient<RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>>,Pulsing<Gradient<RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>>,Gradient<RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,ColorSequence<500,GhostWhite,Yellow>,95,70>,ColorSequence<650,Red,Rgb<155,0,255>,GhostWhite,Yellow>,400>,GhostWhite,550>,200,500>>(), "EP1 Blue"},	 
 
 
 
 {"Ksith_Light_SS", "tracks/Jedi_Master.wav",
 StylePtr<InOutHelper<OnSpark<LocalizedClash<Lockup<Blast<AudioFlicker<DodgerBlue,Blue>,White>,Pulsing<Gradient<AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>,BrownNoiseFlicker<White,Strobe<Red,White,50,1>,100>,AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>>,Gradient<AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>,BrownNoiseFlicker<White,Strobe<Red,White,50,1>,100>,AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>>,3500>,AudioFlicker<White,DodgerBlue>>>,GhostWhite,800>,180,500>>(), "blue TPM"},
   
   
{ "Calibrate", "tracks/batteryhum.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<121, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
