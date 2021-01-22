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
StylePtr<Layers<Layers<Green,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Green>,LockupL<Blinking<Green,Black,300,500>>,SimpleClashL<Green>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Green,Black,1000,500>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Red>,LockupL<Blinking<Red,Black,300,500>>,SimpleClashL<Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Red,Black,1000,500>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	
{ "Hero", "tracks/mars.wav",
//MAIN BLADE
StylePtr<Layers<Rgb<10,255,0>,RandomL<GreenYellow>,ResponsiveBlastWaveL<Orange>,ResponsiveLockupL<Gradient<Black,Pulsing<NavajoWhite,Orange,1200>,Black>,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<BrownNoiseFlicker<Magenta,Rgb<100,0,250>,100>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>,TrInstant,TrInstant>,ResponsiveClashL<Yellow,TrInstant,TrFade<200>,Int<26000>,Int<6000>,Int<20000>>,InOutHelperL<InOutFuncX<Int<185>,Int<800>>>>>(), 

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Green>,LockupL<Blinking<Green,Black,300,500>>,SimpleClashL<Green>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Green,Black,1000,500>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Red>,LockupL<Blinking<Red,Black,300,500>>,SimpleClashL<Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Red,Black,1000,500>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
{ "Peace", "tracks/rotj2.wav",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,200,0>>>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,255,150>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,255,150>>>,TrFade<800>>,EFFECT_FORCE>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,240,80>>,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<LemonChiffon,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,180,50>,LemonChiffon,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Green>,Stripes<1500,-2500,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Green>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Red>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveBlastL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<400>,Int<100>,Int<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<250>,TrWipeIn<500>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Green>,LockupL<Blinking<Green,Black,300,500>>,SimpleClashL<Green>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Green,Black,1000,500>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Red>,LockupL<Blinking<Red,Black,300,500>>,SimpleClashL<Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Red,Black,1000,500>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

{ "Jedi_02", "tracks/mars.wav",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,200,0>>>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,255,150>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,255,150>>>,TrFade<800>>,EFFECT_FORCE>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,240,80>>,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<LemonChiffon,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Rgb<255,180,50>,LemonChiffon,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Int<28000>,Int<8000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Green>,Stripes<1500,-2500,TransitionEffect<LemonChiffon,Rgb<255,180,50>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Green>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<50>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveBlastL<TransitionEffect<Rgb<255,240,80>,LemonChiffon,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<400>,Int<100>,Int<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<250>,TrWipeIn<500>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Green>,LockupL<Blinking<Green,Black,300,500>>,SimpleClashL<Green>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Green,Black,1000,500>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Red>,LockupL<Blinking<Red,Black,300,500>>,SimpleClashL<Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Red,Black,1000,500>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	
{ "The_Return", "tracks/SWESB_duel.wav",
//MAIN BLADE
StylePtr<Layers<Layers<Rgb<10,255,0>,AudioFlickerL<GreenYellow>,OnSparkL<Gradient<Pulsing<Black,Chartreuse,800>,GhostWhite,Yellow,Pulsing<Black,Chartreuse,800>>,Int<1200>>>,ResponsiveBlastWaveL<GhostWhite>,ResponsiveLockupL<Blinking<NavajoWhite,LightSalmon,50,850>,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<HumpFlicker<BrownNoiseFlicker<Snow,Magenta,50>,BrownNoiseFlicker<DeepSkyBlue,Magenta,50>,50>>,ResponsiveClashL<GhostWhite,TrInstant,TrFade<400>,Int<26000>,Int<6000>,Int<20000>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>,TrInstant,TrInstant>,InOutHelperL<InOutFuncX<Int<180>,Int<800>>>>>(),

//ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Green>,LockupL<Blinking<Green,Black,300,500>>,SimpleClashL<Green>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Green,Black,1000,500>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Red>,LockupL<Blinking<Red,Black,300,500>>,SimpleClashL<Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Red,Black,1000,500>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   { "MOTF", "tracks/TLJ1.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Gradient<RandomFlicker<Green,GreenYellow>,BrownNoiseFlicker<Yellow,GreenYellow,500>>,Strobe<Snow,Blue,15,1>>,AudioFlicker<Gradient<HumpFlicker<Magenta,SpringGreen,40>,Strobe<Orange,Rgb<0,10,100>,15,1>>,White>,AudioFlicker<Gradient<HumpFlicker<Magenta,SpringGreen,40>,Strobe<Orange,Rgb<0,10,100>,15,1>>,White>>,Gradient<Strobe<Magenta,Orange,15,10>,Strobe<DodgerBlue,Cyan,15,10>>,120>,200,800,Black>>(),
   //ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Green>,LockupL<Blinking<Green,Black,300,500>>,SimpleClashL<Green>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Green,Black,1000,500>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Red>,LockupL<Blinking<Red,Black,300,500>>,SimpleClashL<Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Red,Black,1000,500>>>>(), "CreepyUncle"},
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   
   { "GREEN", "tracks/kylo2.wav",
   StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<Pulsing<AudioFlicker<Green,GreenYellow>,AudioFlicker<GreenYellow,Orange>,3500>,Orange>,RandomFlicker<Cyan,SteelBlue>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,Cyan,80>,175,800,Black>>(),
   //ACCENT LED's
StylePtr<Layers<Layers<Green,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Green>,LockupL<Blinking<Green,Black,300,500>>,SimpleClashL<Green>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Green,Black,1000,500>>>>(),
StylePtr<Layers<Layers<Red,BlinkingL<Black,Int<300>,Int<500>>>,BlastL<Red>,LockupL<Blinking<Red,Black,300,500>>,SimpleClashL<Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<Red,Black,1000,500>>>>(), "CreepyUncle"},
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
