#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 2
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
#define FETT263_SWING_ON
#define FETT263_TWIST_OFF
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {

//MAIN BLADE
{ "Fallen_Order", "tracks/fallen_order.wav",	StylePtr<Layers<Stripes<16000,-1000,RotateColorsX<Variation,Blue>,Pulsing<RotateColorsX<Variation,Rgb<0,0,90>>,RotateColorsX<Variation,Blue>,800>,RotateColorsX<Variation,Blue>>,TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,160>>>,TrDelay<30000>,RotateColorsX<Variation,Blue>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,150,255>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<150,150,255>>>,TrFade<800>>,EFFECT_FORCE>,LockupTrL<Layers<AlphaL<AudioFlickerL<Azure>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,AlphaL<TransitionEffect<Azure,White,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<20000>>>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<White,Azure,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Blue>,Stripes<1500,-2500,TransitionEffect<White,Azure,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Blue>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastWaveL<TransitionEffect<Azure,White,TrInstant,TrFade<100>,EFFECT_BLAST>,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrWipeInX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<300>,Int<500>>>,Black>>>(),

 //ACCENT LED  
StylePtr<Layers<Blue,RandomL<Rgb<0,10,100>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<RotateColorsX<Variation,Rgb<50,130,255>>,Int<100>>,TrFade<1200>>,EFFECT_IGNITION>,InOutTrL<TrFade<500>,TrInstant,Pulsing<Black,Blue,3000>>>>(), "Fallen Order"},
/////////////////////////////////////////////////////////////////////////////////

//MAIN BLADE
{ "Survivor_Blue", "tracks/Jedi_Master.wav",
StylePtr<Layers<Rgb<0,40,195>,AudioFlickerL<Blue>,ResponsiveLightningBlockL<White>,ResponsiveLockupL<BrownNoiseFlickerL<NavajoWhite,Int<25>>,TrInstant,TrInstant,Int<26000>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<250>,TrWipeIn<500>>>>(),
	    
//ACCENT LED 
StylePtr<Layers<Rgb<0,10,100>,RandomL<Blue>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<RotateColorsX<Variation,Rgb<50,130,255>>,Int<100>>,TrFade<1200>>,EFFECT_IGNITION>,InOutTrL<TrFade<500>,TrInstant,Pulsing<Black,SequenceL<Blue,100,37,0b1010100011100,0b111000111000101,0b100000000000000>,3000>>>>(), "Survivor Blue"},
/////////////////////////////////////////////////////////////////////////////////   

//MAIN BLADE
{ "Photon_Blade", "tracks/JFO12.wav",
StylePtr<Layers<HumpFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,20,128>>,50>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<90,180,255>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<90,180,255>>>,TrFade<800>>,EFFECT_FORCE>,LockupTrL<Layers<AlphaL<AudioFlickerL<Rgb<255,150,0>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<Moccasin,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,TransitionEffect<Moccasin,Rgb<255,150,0>,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastFadeL<Rgb<255,150,0>,Scale<SwingSpeed<200>,Int<10000>,Int<18000>>>,ResponsiveBlastFadeL<Moccasin,Scale<SwingSpeed<200>,Int<4000>,Int<10000>>>,ResponsiveBlastWaveL<TransitionEffect<Rgb<255,150,0>,Moccasin,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<300>,Int<100>,Int<300>,Int<28000>,Int<8000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrJoinR<TrWipe<300>,TrWipeIn<300>>,TrJoinR<TrWipe<500>,TrWipeIn<500>>,Black>>>(),
	 
//ACCENT LED	 
StylePtr<Layers<DeepSkyBlue,InOutTrL<TrConcat<TrDelay<375>,DodgerBlue,TrBoing<1600,8>>,TrBoing<500,2>>>>(), "Photon Blade"},
/////////////////////////////////////////////////////////////////////////////////


{ "Outcast_Knight", "tracks/JFO18.wav",
StylePtr<Layers<Blue,AlphaL<DodgerBlue,Int<16000>>,ResponsiveClashL<Mix<Int<16384>,GhostWhite,NavajoWhite>,TrInstant,TrFade<200>,Int<26000>>,ResponsiveLockupL<Mix<Int<16384>,NavajoWhite,GhostWhite>,TrInstant,TrInstant,Int<26000>,Int<6000>,Scale<SwingSpeed<100>,Int<15000>,Int<20000>>>,MultiTransitionEffectL<TrConcat<TrWaveX<White>,White,TrInstant>,EFFECT_LOCKUP_BEGIN>,MultiTransitionEffectL<TrConcat<TrInstant,White,TrBoing<300,2>>,EFFECT_LOCKUP_END>,TransitionEffectL<TrConcat<TrFade<400>,HumpFlicker<RotateColorsX<Sin<Int<10>,Int<16384>>,Blue>,RotateColorsX<TwistAngle<>,Cyan>,50>,TrDelay<800>>,EFFECT_FORCE>,LockupTrL<Gradient<BrownNoiseFlicker<Cyan,Magenta,50>,BrownNoiseFlicker<Blue,Magenta,50>,BrownNoiseFlicker<SteelBlue,Magenta,50>,BrownNoiseFlicker<Cyan,Magenta,50>>,TrConcat<TrWipeInSparkTip<White,250,650>,BrownNoiseFlicker<GhostWhite,Black,50>,TrInstant>,TrBoing<300,2>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<Yellow>,InOutTrL<TrConcat<TrWipeSparkTipX<White,Int<200>>,RotateColorsX<ChangeSlowly<NoisySoundLevel,Int<50000>>,OrangeRed>,TrBoing<300,2>>,TrConcat<TrWaveX<White>,BrownNoiseFlicker<Black,SteelBlue,50>,TrBoing<800,4>>>>>(),
	 
StylePtr<Layers<Layers<Blue,AudioFlickerL<DodgerBlue>>,InOutTrL<TrConcat<TrFade<100>,White,TrBoing<800,4>>,TrConcat<TrDelay<1000>,White,TrSmoothFade<800>>,Pulsing<SteelBlue,Black,2800>>>>(), "blue fire"},
   
////////////////////////////////////////////////////////////////////////////////////
	
//MAIN BLADE
{ "Ancient", "tracks/JFO19.wav",
StylePtr<Layers<Blue,AudioFlickerL<Mix<Int<16384>,DodgerBlue,Blue>>,AudioFlickerL<Mix<Int<16384>,SteelBlue,DeepSkyBlue>>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,LockupTrL<Gradient<BrownNoiseFlicker<Cyan,Magenta,50>,BrownNoiseFlicker<Blue,Magenta,50>,BrownNoiseFlicker<Cyan,Magenta,50>>,TrWipeIn<200>,TrConcat<TrWaveX<Black,Int<200>,Int<100>,Int<600>>,NavajoWhite,TrBoing<300,2>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<NavajoWhite>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<NavajoWhite>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(),
	 
// ACCENT LED 
StylePtr<Layers<Black,AudioFlickerL<Black>,AudioFlickerL<Mix<Int<16384>,DeepSkyBlue,SteelBlue>>,InOutTrL<TrSmoothFade<300>,TrDelay<500>,Pulsing<Mix<Int<16384>,DodgerBlue,Blue>,Black,3000>>>>(), "Ancient"},
////////////////////////////////////////////////////////////////////////////////////

//MAIN BLADE
{"Peace", "tracks/JFO14.wav",
StylePtr<Layers<Rgb<0,15,200>,AudioFlickerL<DodgerBlue>,ResponsiveLightningBlockL<NavajoWhite>,ResponsiveLockupL<NavajoWhite,TrInstant,TrInstant,Int<26000>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<Orange>,ResponsiveClashL<NavajoWhite,TrInstant,TrFade<250>,Int<26000>>,ResponsiveBlastL<Ivory>,ResponsiveBlastWaveL<NavajoWhite>,ResponsiveBlastFadeL<NavajoWhite>,ResponsiveStabL<White>,InOutTrL<TrWipe<250>,TrWipeIn<500>>>>(),

//ACCENT LED
StylePtr<Layers<Rgb<0,15,200>,RandomL<DodgerBlue>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<RotateColorsX<Variation,Rgb<50,130,255>>,Int<100>>,TrFade<1200>>,EFFECT_IGNITION>,InOutTrL<TrFade<500>,TrInstant,Pulsing<Black,SequenceL<DodgerBlue,100,37,0b1010100011100,0b111000111000101,0b100000000000000>,3000>>>>(), "Peace"},
/////////////////////////////////////////////////////////////////////////////////
	
	{ "Calibrate", "tracks/Charge_22.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<125, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<1, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4> >(),
   CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

