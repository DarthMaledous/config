#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVED_PRESET
#define ORIENTATION ORIENTATION_USB_TOWARDS_BLADE
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "Blind_Cowboy_Proffie", "tracks/Jedi_Academy1.wav",
StylePtr<InOutHelper<OnSpark<BlastFadeout<SimpleClash<Lockup<RandomFlicker<Blue,DodgerBlue>,Pulsing<Gradient<RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,3500>,RandomPerLEDFlicker<Red,White>>,Gradient<StyleFire<GreenYellow,GhostWhite,1,3>,GhostWhite,StyleFire<GreenYellow,GhostWhite,1,3>>,200>,Gradient<StyleFire<Red,White,0,3,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,7>,FireConfig<0,3,5>>,HumpFlicker<Yellow,Orange,50>,StyleFire<Red,White,0,3,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,7>,FireConfig<0,3,5>>,StyleFire<Red,White,0,3,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,7>,FireConfig<0,3,5>>>,350>,White,400>,200,500>>(), "cyan"},

{ "Energy_Saber", "tracks/Energy_Saber.wav",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<AudioFlicker<DeepSkyBlue,SteelBlue>,Pulsing<Gradient<AudioFlicker<DeepSkyBlue,SteelBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>>,Pulsing<Gradient<AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,SteelBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,SteelBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,SteelBlue>>,Gradient<AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,SteelBlue>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,RandomFlicker<GhostWhite,Cyan>,120,75>,White>,White,400>,200,500>>(), "blue"},
	
	
 { "MOTF", "tracks/KOTFE_Valkorian.wav",
 StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,65>,100,3000,3000>,Pulsing<Gradient<ColorCycle<Blue,0,5,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3500>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>>,Pulsing<Gradient<ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>>,Gradient<ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,ColorCycle<Blue,0,10,BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,50>,100,3000,3000>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,RandomPerLEDFlicker<Orange,NavajoWhite>,120,70>,White>,200,500>>(), "fire"},
  

 { "Peace", "tracks/track3.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Blue,DodgerBlue>,Pulsing<Gradient<RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Pulsing<Gradient<RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>>,Gradient<RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,DodgerBlue>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,120,65>,Gradient<Orange,NavajoWhite>>,Cyan,1000>,200,500>>(), "red"},
   
   
{ "Battle", "tracks/Sister1.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<SteelBlue,GhostWhite>,Pulsing<Gradient<RandomFlicker<SteelBlue,GhostWhite>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<SteelBlue,GhostWhite>,RandomFlicker<SteelBlue,GhostWhite>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<SteelBlue,GhostWhite>,RandomFlicker<SteelBlue,GhostWhite>>,Pulsing<Gradient<RandomFlicker<SteelBlue,GhostWhite>,RandomFlicker<SteelBlue,GhostWhite>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<SteelBlue,GhostWhite>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<SteelBlue,GhostWhite>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<SteelBlue,GhostWhite>>,Gradient<RandomFlicker<SteelBlue,GhostWhite>,RandomFlicker<SteelBlue,GhostWhite>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<SteelBlue,GhostWhite>,RandomFlicker<SteelBlue,GhostWhite>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<SteelBlue,GhostWhite>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,75,65>,AudioFlicker<Orange,Yellow>>,White,400>,200,500>>(), "blue fire"},
   
   
 { "Outcast_Knight", "tracks/Immortal_Emperor.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<GhostWhite,DodgerBlue,Blue>,Pulsing<Gradient<Gradient<GhostWhite,DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<GhostWhite,DodgerBlue,Blue>,Gradient<GhostWhite,DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<GhostWhite,DodgerBlue,Blue>,Gradient<GhostWhite,DodgerBlue,Blue>>,Pulsing<Gradient<Gradient<GhostWhite,DodgerBlue,Blue>,Gradient<GhostWhite,DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<GhostWhite,DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<GhostWhite,DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<GhostWhite,DodgerBlue,Blue>>,Gradient<Gradient<GhostWhite,DodgerBlue,Blue>,Gradient<GhostWhite,DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<GhostWhite,DodgerBlue,Blue>,Gradient<GhostWhite,DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<GhostWhite,DodgerBlue,Blue>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,AudioFlicker<LightYellow,Yellow>,140,65>,BrownNoiseFlicker<Tomato,GhostWhite,50>>,White,1000>,200,500>>(), "green"},
  

  { "Unlightstable", "tracks/Jedi_Academy2.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,DeepSkyBlue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Pulsing<Gradient<Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>>,Gradient<Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Gradient<Pulsing<BrownNoiseFlicker<DodgerBlue,White,50>,BrownNoiseFlicker<GhostWhite,Blue,50>,4000>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>>,3500>,RandomPerLEDFlicker<Red,White>>,White,100,65>,LightYellow>,White,400>,200,500>>(), "white"},
   
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
