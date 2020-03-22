#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2000
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
{"YELLOW", "tracks/GESW.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Yellow,Rgb<190,120,0>>,Pulsing<Gradient<AudioFlicker<Yellow,Rgb<190,120,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Yellow,Rgb<190,120,0>>,AudioFlicker<Yellow,Rgb<190,120,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Yellow,Rgb<190,120,0>>,AudioFlicker<Yellow,Rgb<190,120,0>>>,Pulsing<Gradient<AudioFlicker<Yellow,Rgb<190,120,0>>,AudioFlicker<Yellow,Rgb<190,120,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Yellow,Rgb<190,120,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Yellow,Rgb<190,120,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Yellow,Rgb<190,120,0>>>,Gradient<AudioFlicker<Yellow,Rgb<190,120,0>>,AudioFlicker<Yellow,Rgb<190,120,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Yellow,Rgb<190,120,0>>,AudioFlicker<Yellow,Rgb<190,120,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Yellow,Rgb<190,120,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Snow,90,70>,ColorSequence<500,Blue,Cyan,Red>,600>,White,400>,200,500>>(), "yellow"},


{"GREEN", "tracks/",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<Green,Green,GreenYellow,GreenYellow>,Pulsing<Gradient<Gradient<Green,Green,GreenYellow,GreenYellow>,Gradient<Green,Green,GreenYellow,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Green,Green,GreenYellow,GreenYellow>,Gradient<Green,Green,GreenYellow,GreenYellow>>,Gradient<Gradient<Green,Green,GreenYellow,GreenYellow>,Gradient<Green,Green,GreenYellow,GreenYellow>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Green,Green,GreenYellow,GreenYellow>,Gradient<Green,Green,GreenYellow,GreenYellow>,Gradient<Green,Green,GreenYellow,GreenYellow>>,3500>,RandomPerLEDFlicker<Red,White>>,White,90,70>,White,400>,ColorCycle<Cyan,0,5,Cyan,100,3000,5000>,650>,200,500>>(), "green"},


{"WHITE", "tracks/",
StylePtr<InOutSparkTip<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Cyan,LightCyan>,Pulsing<Gradient<RandomFlicker<Cyan,LightCyan>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Cyan,LightCyan>,RandomFlicker<Cyan,LightCyan>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Cyan,LightCyan>,RandomFlicker<Cyan,LightCyan>>,Pulsing<Gradient<RandomFlicker<Cyan,LightCyan>,RandomFlicker<Cyan,LightCyan>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Cyan,LightCyan>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Cyan,LightCyan>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Cyan,LightCyan>>,Gradient<RandomFlicker<Cyan,LightCyan>,RandomFlicker<Cyan,LightCyan>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Cyan,LightCyan>,RandomFlicker<Cyan,LightCyan>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Cyan,LightCyan>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,90,70>,White,400>,Stripes<500,-400,Stripes<1000,-50,Strobe<Black,Cyan,15,1>,Sparkle<Blue>,HumpFlicker<Snow,DodgerBlue,10>,Blue>,Stripes<500,50,Cyan,Snow,Chartreuse,HumpFlicker<Snow,DodgerBlue,10>>,HumpFlicker<Snow,DodgerBlue,10>,HumpFlicker<Snow,DodgerBlue,10>>,650>,200,500,Strobe<Cyan,Black,15,1>>>(), "cyan"},


{"Survivor_Orange", "tracks/",
StylePtr<InOutSparkTip<OnSpark<Blast<LocalizedClash<Lockup<Orange,Pulsing<Gradient<Orange,Orange,Strobe<White,BrownNoiseFlicker<Red,Snow,100>,50,1>,Orange,Orange>,Gradient<Orange,Orange,Strobe<White,BrownNoiseFlicker<Red,Snow,100>,50,1>,Orange,Orange,Orange>,3500>,RandomPerLEDFlicker<Red,Snow>>,HumpFlicker<Snow,PeachPuff,50>,120,70>,ColorSequence<600,DeepSkyBlue,Cyan,Blue>,400>,Gradient<Strobe<Black,BrownNoiseFlicker<Orange,White,50>,45,25>,Strobe<Black,Stripes<800,1000,Orange,White,Yellow,LightYellow>,30,25>,Strobe<Black,Stripes<800,-1000,Orange,White,Yellow,LightYellow>,15,25>,BrownNoiseFlicker<Orange,White,50>>,650>,200,500>>(), "orange"},


{"Fallen_Order", "tracks/",
StylePtr<InOutSparkTip<OnSpark<Blast<LocalizedClash<Lockup<HumpFlicker<DeepSkyBlue,LightCyan,190>,Pulsing<Gradient<HumpFlicker<DeepSkyBlue,LightCyan,190>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DeepSkyBlue,LightCyan,190>,HumpFlicker<DeepSkyBlue,LightCyan,190>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DeepSkyBlue,LightCyan,190>,HumpFlicker<DeepSkyBlue,LightCyan,190>>,Pulsing<Gradient<HumpFlicker<DeepSkyBlue,LightCyan,190>,HumpFlicker<DeepSkyBlue,LightCyan,190>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DeepSkyBlue,LightCyan,190>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DeepSkyBlue,LightCyan,190>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DeepSkyBlue,LightCyan,190>>,Gradient<HumpFlicker<DeepSkyBlue,LightCyan,190>,HumpFlicker<DeepSkyBlue,LightCyan,190>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DeepSkyBlue,LightCyan,190>,HumpFlicker<DeepSkyBlue,LightCyan,190>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<DeepSkyBlue,LightCyan,190>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,HumpFlicker<Snow,Yellow,75>,100,75>,ColorSequence<500,Gradient<StyleFire<Red,Yellow,0,3>,StyleFire<Magenta,Snow,0,3>>,Stripes<1000,-3000,Green,Snow,GreenYellow,DodgerBlue>,StyleFire<SteelBlue,Snow>>>,Gradient<StyleFire<DeepSkyBlue,Snow>,Strobe<Black,Stripes<1000,5000,Cyan,Snow,DodgerBlue,BrownNoiseFlicker<DeepSkyBlue,Snow,50>>,50,1>>,450>,200,500,BrownNoiseFlicker<DeepSkyBlue,Snow,50>>>(), "ice blue"},



{"KSith_Ascension", "tracks/",







{ "SmthJedi", "tracks/mars.wav",
&style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<122, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
