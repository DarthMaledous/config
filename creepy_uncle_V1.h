#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 3
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
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "Ksith_LS6_SS", "tracks/rotj.wav",
//MAIN BLADE
StylePtr<Layers<Layers<Rgb<10,255,0>,AudioFlickerL<GreenYellow>,OnSparkL<Gradient<Pulsing<Black,Chartreuse,800>,GhostWhite,Yellow,Pulsing<Black,Chartreuse,800>>,Int<1200>>>,ResponsiveBlastWaveL<GhostWhite>,ResponsiveLockupL<Blinking<NavajoWhite,LightSalmon,50,850>,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<HumpFlicker<BrownNoiseFlicker<Snow,Magenta,50>,BrownNoiseFlicker<DeepSkyBlue,Magenta,50>,50>>,ResponsiveClashL<GhostWhite,TrInstant,TrFade<400>,Int<26000>,Int<6000>,Int<20000>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>,TrInstant,TrInstant>,InOutHelperL<InOutFuncX<Int<180>,Int<800>>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Blinking<Green,Black,300,500>,Int<3000>,Int<500>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Green,Black,100,80,0b1010101010101010,0b0,0b1,0b1010101010101010,0b101000000000000>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<2000>,Int<200>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,100,80,0b0,0b1010101010101010,0b1010101000000000,0b0,0b1010101010101010>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	
{ "Hero", "tracks/mars.wav",
//MAIN BLADE
StylePtr<Layers<Rgb<10,255,0>,RandomL<GreenYellow>,ResponsiveBlastWaveL<Orange>,ResponsiveLockupL<Gradient<Black,Pulsing<NavajoWhite,Orange,1200>,Black>,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<BrownNoiseFlicker<Magenta,Rgb<100,0,250>,100>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>,TrInstant,TrInstant>,ResponsiveClashL<Yellow,TrInstant,TrFade<200>,Int<26000>,Int<6000>,Int<20000>>,InOutHelperL<InOutFuncX<Int<185>,Int<800>>>>>(), 

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Blinking<Green,Black,300,500>,Int<3000>,Int<500>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Green,Black,100,80,0b1010101010101010,0b0,0b1,0b1010101010101010,0b101000000000000>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<2000>,Int<200>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,100,80,0b0,0b1010101010101010,0b1010101000000000,0b0,0b1010101010101010>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
{ "Peace", "tracks/rotj2.wav",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,200,0>>>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,255,150>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,255,150>>>,TrFade<800>>,EFFECT_FORCE>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,240,80>>,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<LemonChiffon,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,180,50>,LemonChiffon,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Green>,Stripes<1500,-2500,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Green>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Red>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveBlastL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<400>,Int<100>,Int<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<250>,TrWipeIn<500>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Blinking<Green,Black,300,500>,Int<3000>,Int<500>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Green,Black,100,80,0b1010101010101010,0b0,0b1,0b1010101010101010,0b101000000000000>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<2000>,Int<200>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,100,80,0b0,0b1010101010101010,0b1010101000000000,0b0,0b1010101010101010>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

{ "Jedi_02", "tracks/mars.wav",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,200,0>>>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,255,150>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,255,150>>>,TrFade<800>>,EFFECT_FORCE>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,240,80>>,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<LemonChiffon,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,180,50>,LemonChiffon,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Green>,Stripes<1500,-2500,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Green>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveBlastL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<400>,Int<100>,Int<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<250>,TrWipeIn<500>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Blinking<Green,Black,300,500>,Int<3000>,Int<500>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Green,Black,100,80,0b1010101010101010,0b0,0b1,0b1010101010101010,0b101000000000000>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<2000>,Int<200>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,100,80,0b0,0b1010101010101010,0b1010101000000000,0b0,0b1010101010101010>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	
{ "The_Return", "tracks/SWESB_duel.wav",
//MAIN BLADE
StylePtr<Layers<Layers<Rgb<10,255,0>,AudioFlickerL<GreenYellow>,OnSparkL<Gradient<Pulsing<Black,Chartreuse,800>,GhostWhite,Yellow,Pulsing<Black,Chartreuse,800>>,Int<1200>>>,ResponsiveBlastWaveL<GhostWhite>,ResponsiveLockupL<Blinking<NavajoWhite,LightSalmon,50,850>,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<HumpFlicker<BrownNoiseFlicker<Snow,Magenta,50>,BrownNoiseFlicker<DeepSkyBlue,Magenta,50>,50>>,ResponsiveClashL<GhostWhite,TrInstant,TrFade<400>,Int<26000>,Int<6000>,Int<20000>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>,TrInstant,TrInstant>,InOutHelperL<InOutFuncX<Int<180>,Int<800>>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Blinking<Green,Black,300,500>,Int<3000>,Int<500>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Green,Black,100,80,0b1010101010101010,0b0,0b1,0b1010101010101010,0b101000000000000>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<2000>,Int<200>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,100,80,0b0,0b1010101010101010,0b1010101000000000,0b0,0b1010101010101010>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

{ "MOTF", "tracks/TLJ1.wav",
StylePtr<Layers<Layers<Layers<Layers<Green,AudioFlickerL<Rgb<0,200,0>>>,ResponsiveBlastWaveL<White>,LockupL<Pulsing<Gradient<AudioFlicker<Green,Rgb<0,200,0>>,AudioFlicker<Green,Rgb<0,200,0>>,BrownNoiseFlicker<White,Strobe<Red,White,50,1>,100>,AudioFlicker<Green,Rgb<0,200,0>>,AudioFlicker<Green,Rgb<0,200,0>>,AudioFlicker<Green,Rgb<0,200,0>>>,Gradient<AudioFlicker<Green,Rgb<0,200,0>>,AudioFlicker<Green,Rgb<0,200,0>>,BrownNoiseFlicker<White,Strobe<Red,White,50,1>,100>,AudioFlicker<Green,Rgb<0,200,0>>,AudioFlicker<Green,Rgb<0,200,0>>>,3500>,RandomPerLEDFlicker<White,Green>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>,TrInstant,TrInstant>,LocalizedClashL<White,50,80>>,OnSparkL<HumpFlicker<Green,White,40>,Int<800>>>,InOutHelperL<InOutFuncX<Int<180>,Int<300>>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Blinking<Green,Black,300,500>,Int<3000>,Int<500>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Green,Black,100,80,0b1010101010101010,0b0,0b1,0b1010101010101010,0b101000000000000>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<2000>,Int<200>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,100,80,0b0,0b1010101010101010,0b1010101000000000,0b0,0b1010101010101010>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

{ "GREEN", "tracks/kylo2.wav",
StylePtr<Layers<Layers<Layers<Layers<Chartreuse,AudioFlickerL<Rgb<0,200,0>>>,ResponsiveBlastWaveL<White>,LockupL<Pulsing<Gradient<AudioFlicker<Chartreuse,Rgb<0,200,0>>,AudioFlicker<Chartreuse,Rgb<0,200,0>>,BrownNoiseFlicker<White,Strobe<Red,White,50,1>,100>,AudioFlicker<Chartreuse,Rgb<0,200,0>>,AudioFlicker<Chartreuse,Rgb<0,200,0>>,AudioFlicker<Chartreuse,Rgb<0,200,0>>>,Gradient<AudioFlicker<Chartreuse,Rgb<0,200,0>>,AudioFlicker<Chartreuse,Rgb<0,200,0>>,BrownNoiseFlicker<White,Strobe<Red,White,50,1>,100>,AudioFlicker<Chartreuse,Rgb<0,200,0>>,AudioFlicker<Chartreuse,Rgb<0,200,0>>>,3500>,RandomPerLEDFlicker<White,Chartreuse>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>,TrInstant,TrInstant>,LocalizedClashL<White,50,80>>,OnSparkL<HumpFlicker<Chartreuse,White,40>,Int<800>>>,InOutHelperL<InOutFuncX<Int<180>,Int<300>>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Blinking<Green,Black,300,500>,Int<3000>,Int<500>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Green,Black,100,80,0b1010101010101010,0b0,0b1,0b1010101010101010,0b101000000000000>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<2000>,Int<200>>>,InOutHelperL<InOutFuncX<Int<1>,Int<1>>,Sequence<Red,Black,100,80,0b0,0b1010101010101010,0b1010101000000000,0b0,0b1010101010101010>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   
   
{ "Calibrate", "tracks/Battery_Charge1.wav",
&style_charging,
StyleNormalPtr<BLACK, BLACK, 100,100>(),
StyleNormalPtr<BLACK, BLACK, 100,100>(),}


};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<118, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), 
      SimpleBladePtr<CreeXPE2GreenTemplate<13000>, NoLED, NoLED, NoLED, bladePowerPin4, -1, -1, -1>(),
	  SimpleBladePtr<CreeXPE2RedTemplate<100000>, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(),
CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
