#ifdef CONFIG_TOP
#include "proffieboard_config.h"
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
//{"Test", "tracks/",
//StylePtr<InOutTr<Layers<

// HumpFlicker<SteelBlue,DeepSkyBlue,50>,
 
// TransitionEffectL<TrConcat<TrInstant,Gradient<Black,Pulsing<Snow,SteelBlue,2200>,Black>,TrWipeIn<500>>,EFFECT_IGNITION>,

// LocalizedClashL<Snow,90,70>,

// ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,

// ResponsiveDragL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>>,

// ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,

// ResponsiveMeltL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>>,
 
// ResponsiveStabL<Gradient<Pulsing<Black,Rgb<0,25,45>,800>,Strobe<Rgb<0,25,45>,Black,15,1>,Pulsing<BrownNoiseFlicker<Snow,Yellow,50>,Yellow,800>>,TrConcat<TrFade<100>,Black,TrFade<100>>>,

// ResponsiveBlastL<ColorSequence<250,Snow,Yellow,Red>>>,

// 200,300, Black>>(),"Test"},
	

//StylePtr<InOutTr<Layers<
//	LocalizedClashL<Snow,90,70>,
//	ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,
//	ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,
//	ResponsiveMeltL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>>,
//	ResponsiveBlastL<ColorSequence<250,Snow,Yellow,Red>>,
//	ResponsiveStabL<Gradient<Pulsing<Black,Rgb<0,25,45>,800>,Strobe<Rgb<0,25,45>,Black,15,1>,Pulsing<BrownNoiseFlicker<Snow,Yellow,50>,Yellow,800>>,TrConcat<TrFade<100>,Black,TrFade<100>>,
//	AudioFlicker<SteelBlue,DeepSkyBlue>,TrConcat<TrWipe<200>,Gradient<Black,Pulsing<Snow,SteelBlue,600>,Black>,TrFade<800>,TrWipeIn<500>,Black>>>>(), "test"},

{"Test2", "tracks/",
//StylePtr<InOutTr<Layers<AudioFlicker<Green,White>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>>, TrColorCycle<3000>, TrFade<500>>>(),"Test2"},
StylePtr<InOutTr<Layers<HumpFlicker<Rgb<25,50,110>,DodgerBlue,45>,
TransitionEffectL<TrConcat<TrInstant,Gradient<Black,Pulsing<Blue,AliceBlue,1800>,Pulsing<DodgerBlue,Black,2000>>,TrSmoothFade<1200>>,EFFECT_IGNITION>, 
ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Int<26000>,Int<4000>,EFFECT_CLASH>,
ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,
ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,
ResponsiveBlastL<Gradient<Strobe<Black,DodgerBlue,15,5>,Pulsing<GreenYellow,Red,100>,Pulsing<Blue,White,800>>,Int<300>,Int<100>,Int<300>,Int<2600>,Int<4000>,EFFECT_BLAST>, 
BlastL<AudioFlicker<Orange,Green>> >,
TrConcat<TrWipe<200>,Gradient<Black,Pulsing<Snow,SteelBlue,450>,Black>,TrFade<1200>>,TrConcat<TrInstant,Gradient<AudioFlicker<Black,DodgerBlue>,Pulsing<Snow,SteelBlue,350>,HumpFlicker<DodgerBlue,Black,35>>,TrWipeIn<800>>>>(),"Test2"},

//TrColorCycle<3000>, TrWipeIn<500>>>(),"Test2"},

{"Test3", "tracks/",
StylePtr<InOutTr<Layers<AudioFlicker<Rgb<240,120,0>,Rgb<95,95,0>>,
TransitionEffectL<TrConcat<TrInstant,Gradient<Black,Pulsing<Snow,Black,1200>,Pulsing<Black,GhostWhite,1600>,Black>,TrSmoothFade<1200>>,EFFECT_IGNITION>,
ResponsiveBlastWaveL<White,Int<400>,Int<100>,Int<400>,Int<26000>,Int<4000>,EFFECT_CLASH>,
ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,
ResponsiveLightningBlockL<BrownNoiseFlicker<Rgb<100,60,0>,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,
ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,AudioFlicker<Rgb<100,60,0>,White>,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,
BlastL<AudioFlicker<Orange,Green>> >,
TrWipe<200>,TrConcat<TrBoing<300,5>,AudioFlicker<Orange,Snow>,TrWipeIn<500>>>>(), "Test3"},
	
   { "Calibrate", "tracks/Battery_Charge_22.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<125, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

