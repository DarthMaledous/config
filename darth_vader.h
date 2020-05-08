#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define NO_COLOR_SWING
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {

// Basic Vader Red with Amber/Green FOC & Lockup
{ "RogueVader_SS_KS", "tracks/vader-r1.wav",
StylePtr<InOutTr<Layers<AudioFlicker<Red,Rgb<150,0,0>>,
ResponsiveLockupL<Pulsing<Gradient<Strobe<Black,Snow,15,1>,Pulsing<GhostWhite,Red,2500>,HumpFlicker<GhostWhite,Red,50>>,Gradient<Pulsing<BrownNoiseFlicker<Red,White,50>,BrownNoiseFlicker<Black,Snow,50>,2000>,Pulsing<BrownNoiseFlicker<Black,Red,50>,BrownNoiseFlicker<GhostWhite,Tomato,50>,1800>,Gradient<Pulsing<BrownNoiseFlicker<Black,Red,50>,BrownNoiseFlicker<Snow,Black,50>,2200>,HumpFlicker<GhostWhite,Rgb<150,0,0>,50>,Pulsing<BrownNoiseFlicker<GhostWhite,Red,50>,Strobe<BrownNoiseFlicker<Red,GhostWhite,50>,White,15,1>,1400>>>,2000>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,
ResponsiveLightningBlockL<BrownNoiseFlicker<Red,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,
ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,
ResponsiveBlastWaveL<ColorSequence<200,Strobe<Black,Yellow,20,100>,Strobe<Black,Snow,20,100>>,Int<300>,Int<100>,Int<300>,26000,4000>,        
LocalizedClashL<Green,90,70>>,
TrConcat<TrWipe<200>,Gradient<Black,Pulsing<GhostWhite,Red,800>,Black>,TrFade<1300>>,TrWipeIn<500>>>(), "Vader1"},

// Vader PulseFlicker
{ "Father", "tracks/darth_sidious.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Red,2500>,Pulsing<Gradient<Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Strobe<Green,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>>,Gradient<Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Strobe<Green,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>>,3500>,RandomPerLEDFlicker<Red,White>>,GreenYellow,80>,White>,MistyRose,1200>,200,500>>(), "Vader3"},

//Vader / Red Sith with LocalizedClash
{ "Black_Bishop", "tracks/Vaders_Revenge.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Red,Rgb<150,0,0>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>>,Gradient<AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Green,80>,White>,RandomFlicker<Red,Black>,1200>,200,500>>(), "Vader4"},

//Vader / Yellow_RedOrange with LocalizedClash and HumpFlicker
{ "RogueVader_SS_KS", "tracks/vader-r1.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,RandomFlicker<Red,LightPink>,2500>,Pulsing<Gradient<Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Strobe<Green,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>>,Gradient<Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Strobe<Green,BrownNoiseFlicker<Green,Red,100>,50,1>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>,Pulsing<RandomFlicker<Rgb<150,0,0>,Red>,Rgb<150,0,0>,2500>>,3500>,RandomPerLEDFlicker<Red,White>>,GreenYellow,80>,GreenYellow>,MistyRose,1200>,200,500>>(), "Vader5"},

// Vader / Sith Red_Green HumpFlicker
{ "Vengeance_KS_SS", "tracks/ro-vader.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Red,Rgb<150,0,0>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>>,Gradient<AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>>,3500>,RandomPerLEDFlicker<Red,White>>,GreenYellow,80>,Green>,GhostWhite,1000>,200,500>>(), "Vader6"},


};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<118, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
