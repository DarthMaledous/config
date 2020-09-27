#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 4
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {

// MAIN BLADE
{"The_Dark_Lord" , "tracks/
StylePtr<Layers<AudioFlicker<Rgb<215,0,0>,Red>,ResponsiveLockupL<Gradient<Yellow,White,Yellow>,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<BrownNoiseFlicker<Magenta,Ivory,250>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<275>,TrWipeIn<500>>>>(), 

// ACCENT LED's 
 
 "font1"},
	
	
// MAIN BLADE
{"RougeVader_SS_KS", "tracks/",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<150,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,White>,TrDelay<30000>,Mix<SwingSpeed<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,White>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveClashL<White,TrInstant,TrFade<400>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeIn<500>>>>(),

// ACCENT LED's


 
//MAIN BLADE
{ "RogueVader_SS_KS", "tracks/vader-r1.wav",
StylePtr<Layers<RotateColorsX<Variation,Red>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<600>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<600>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInX<Scale<BladeAngle<>,Int<300>,Int<800>>>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

// ACCENT LED's

 "font2"},

 
// MAIN BLADE
{ "Black_Bishop" "tracks/darth_sidious.wav",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeSparkTip<White,300>,TrWipeInX<Scale<BladeAngle<>,Int<300>,Int<800>>>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(), 
 
// ACCENT LED's 
 "Vader3"}




   { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<125, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    
  	  SubBlade(0, 1, WS281XBladeWS281XBladePtr<6, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4 >()),
	  SubBlade(2, 3, NULL),
  	  SubBlade(4, 5, NULL),
  
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
