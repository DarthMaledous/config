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

// Basic Vader Red with Amber/Green FOC & Lockup
{ "RogueVader_SS_KS", "tracks/vader-r1.wav",
StylePtr<Layers<RotateColorsX<Variation,Red>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<600>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<600>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInX<Scale<BladeAngle<>,Int<300>,Int<800>>>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(), "Vader1"},


// Vader PulseFlicker
{ "Father", "tracks/darth_sidious.wav",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeInX<Scale<BladeAngle<>,Int<300>,Int<800>>>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(), "Vader3"},

//Vader / Red Sith with LocalizedClash
{ "Black_Bishop", "tracks/Vaders_Revenge.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Red,Rgb<150,0,0>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>>,Gradient<AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>,AudioFlicker<Red,Rgb<150,0,0>>,Strobe<Green,BrownNoiseFlicker<Green,White,100>,50,1>,AudioFlicker<Red,Rgb<150,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Green,80>,White>,RandomFlicker<Red,Black>,1200>,200,500>>(), "Vader4"},

//Vader / Yellow_RedOrange with LocalizedClash and HumpFlicker
{ "The_Dark_Lord", "tracks/vader-r1.wav",
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
