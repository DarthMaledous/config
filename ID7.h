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
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
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
StylePtr<InOutTr<Layers<HumpFlicker<Rgb<25,50,110>,DodgerBlue,45>,
TransitionEffectL<TrConcat<TrInstant,Gradient<Black,Pulsing<Blue,AliceBlue,1800>,Pulsing<DodgerBlue,Black,2000>>,TrSmoothFade<1200>>,EFFECT_IGNITION>, 
ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,26000,4000,EFFECT_CLASH>,
ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,
ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,
ResponsiveBlastL<Gradient<Strobe<Black,DodgerBlue,15,5>,Pulsing<GreenYellow,Red,100>,Pulsing<Blue,White,800>>,Int<300>,Int<100>,Int<300>,2600,4000,EFFECT_BLAST> >,
TrConcat<TrWipe<200>,Gradient<Black,Pulsing<Snow,SteelBlue,450>,Black>,TrFade<1200>>,TrConcat<TrInstant,Gradient<AudioFlicker<Black,DodgerBlue>,Pulsing<Snow,SteelBlue,350>,HumpFlicker<DodgerBlue,Black,35>>,TrWipeIn<800>>>>(),"KSith_Ascension"},


{"Executioner", "tracks/",
StylePtr<InOutTr<Layers<HumpFlicker<Rgb<100,60,0>,DarkOrange,45>,
TransitionEffectL<TrConcat<TrInstant,Gradient<Black,Pulsing<Yellow,AliceBlue,1800>,Pulsing<Rgb<100,60,0>,Black,2000>>,TrSmoothFade<1200>>,EFFECT_IGNITION>, 
ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,26000,4000,EFFECT_CLASH>,
ResponsiveLightningBlockL<BrownNoiseFlicker<Rgb<100,60,0>,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,
ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,AudioFlicker<Rgb<100,60,0>,White>,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,
ResponsiveMeltL<BrownNoiseFlicker<Red,Strobe<AliceBlue,Orange,50,1>,100>>,
BlastL<AudioFlicker<Orange,Green>> >,
TrConcat<TrWipe<200>,Gradient<Black,Pulsing<Snow,Rgb<100,60,0>,450>,Black>,TrFade<1200>>,TrConcat<TrInstant,Gradient<AudioFlicker<Black,Yellow>,Pulsing<Snow,Rgb<100,60,0>,350>,HumpFlicker<DarkOrange,Black,35>>,TrWipeIn<800>>>>(),"Executioner"},

{"ScavengersDest", "tracks/",
StylePtr<InOutTr<Layers<AudioFlicker<Chartreuse,Rgb<0,150,10>>,
TransitionEffectL<TrConcat<TrInstant,Gradient<Black,Pulsing<Green,Snow,1200>,Pulsing<Snow,GreenYellow,800>,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,
ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,
ResponsiveLightningBlockL<BrownNoiseFlicker<Green,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,
ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,
ResponsiveBlastWaveL<ColorSequence<200,Red,Magenta,DarkOrange>,Int<300>,Int<100>,Int<300>,26000,4000>,
TransitionEffectL<TrBoing<300,2>, EFFECT_LOCKUP_END>,
ResponsiveStabL<Gradient<AudioFlicker<Chartreuse,Rgb<0,150,10>>,AudioFlicker<Snow,Red>>,TrInstant,TrBoing<300,3>>, 
LocalizedClashL<Gradient<Black,LightYellow,Yellow,Black>,90,70> >,
TrWipe<200>,TrJoinR<TrSmoothFade<500>,TrWipeIn<500>>>>(), "Scavengers Destiny"},



{ "Calibrate", "tracks/Battery_Charge1.wav",
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
