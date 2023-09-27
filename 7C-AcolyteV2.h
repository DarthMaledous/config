#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 1800
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVE_STATE
#define IDLE_OFF_TIME 60 * 5 * 1000
#define MOTION_TIMEOUT 60 * 15 * 1000
#define DISABLE_BASIC_PARSER_STYLES
#define FETT263_EDIT_MODE_MENU
#define ENABLE_ALL_EDIT_OPTIONS
#define KEEP_SAVEFILES_WHEN_PROGRAMMING
#define FETT263_DUAL_MODE_SOUND
#define FETT263_CLASH_STRENGTH_SOUND
#define FETT263_SAY_BATTERY_PERCENT
#define FETT263_SAY_COLOR_LIST
#define FETT263_SAY_COLOR_LIST_CC
#define FETT263_SWING_ON_PREON
#define FETT263_SWING_ON_NO_BM
#define FETT263_TWIST_OFF
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
	{"Binary_Dark;common", "tracks/",
	/* copyright Fett263 FallenOrder (Primary Blade) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#FallenOrder
OS6.7 v4.016
Single Style
Base Style: Fallen Order Ninth Sister

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Preon Effect: Overload (Base Color)
Ignition Effect: SparkTip Ignition
PowerUp Effect: Power Flash
Retraction Effect: Standard Retraction
Lockup Effect: Responsive Lockup, Begin Effect: Localized Flash, End Effect: Ripple
LightningBlock Effect: Responsive Lightning Block
Drag Effect: Intensity Sparking Drag
Melt Effect: Intensity Melt
Stab Effect: AudioFlicker Stab
Blast Effect: Blast Wave (Random)
Clash Effect: Real Clash V2
Swing Effect: Force Rage Lightning
*/
StylePtr<Layers<Stripes<18000,-1600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RandomFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Stripes<9000,-900,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>>>,TransitionEffectL<TrConcat<TrInstant,TransitionLoopL<TrConcat<TrJoin<TrDelayX<Scale<SlowNoise<Int<3000>>,Int<200>,Int<700>>>,TrWipe<200>>,RandomPerLEDFlickerL<RgbArg<SWING_COLOR_ARG,Rgb<255,255,255>>>,TrWipe<200>>>,TrFade<300>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<IgnitionTime<300>>,TrInstant>,RgbArg<IGNITION_COLOR_ARG,Rgb<255,187,108>>,TrFade<1000>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<WavLen<>>,TrWipeIn<200>>,AlphaL<AudioFlickerL<RgbArg<STAB_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<2000>>>,TrWipe<200>>,EFFECT_STAB>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,187,108>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,TransitionEffectL<TrSelect<Scale<ClashImpactF<>,Int<0>,Int<4>>,TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<191,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<8000>,Int<12000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<600>>>>,TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<191,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,TrSparkX<Remap<CenterDistF<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,Stripes<1500,-3000,RgbArg<CLASH_COLOR_ARG,Rgb<191,255,255>>,Mix<Int<16384>,Black,RgbArg<CLASH_COLOR_ARG,Rgb<191,255,255>>>>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,TrConcat<TrInstant,RgbArg<CLASH_COLOR_ARG,Rgb<191,255,255>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,TrConcat<TrInstant,RgbArg<CLASH_COLOR_ARG,Rgb<191,255,255>>,TrFadeX<Scale<ClashImpactF<>,Int<300>,Int<500>>>>>,EFFECT_CLASH>,LockupTrL<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AudioFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,TrSparkX<Remap<CenterDistF<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,Stripes<1200,-3600,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,Int<30>,Scale<Sum<ClashImpactF<>,SwingSpeed<600>>,Int<50>,Int<200>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeSparkTipX<RgbArg<IGNITION_COLOR_ARG,Rgb<255,187,108>>,IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>,TransitionEffectL<TrConcat<TrFadeX<Mult<Int<8192>,WavLen<EFFECT_PREON>>>,AlphaL<HumpFlickerL<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,10>,SmoothStep<IntArg<PREON_SIZE_ARG,2000>,Int<-4000>>>,TrFadeX<Mult<Int<8192>,WavLen<EFFECT_PREON>>>,AlphaL<HumpFlickerL<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,15>,SmoothStep<Sum<Int<2000>,IntArg<PREON_SIZE_ARG,2000>>,Int<-4000>>>,TrFadeX<Mult<Int<8192>,WavLen<EFFECT_PREON>>>,AlphaL<HumpFlickerL<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,20>,SmoothStep<Sum<Int<4000>,IntArg<PREON_SIZE_ARG,2000>>,Int<-4000>>>,TrBoingX<Mult<Int<8192>,WavLen<EFFECT_PREON>>,3>>,EFFECT_PREON>>>(), "Binary Dark"},


	{"troy;common", "tracks/venus.wav",
StylePtr<Layers<Red,AudioFlickerL<Rgb<220,0,0>>,ResponsiveLockupL<Gradient<Black,Pulsing<NavajoWhite,LightYellow,800>,Black>,TrInstant,TrInstant,Int<26000>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,White,Red>,Stripes<1500,-2500,White,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Gradient<Pulsing<Black,Tomato,900>,BrownNoiseFlicker<Red,White,50>,Pulsing<Black,Red,1200>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "troy"},

	{"DEADLINK;common", "tracks/",
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Rgb<225,150,0>>,RotateColorsX<Variation,Rgb<200,120,0>>>,TransitionEffectL<TrConcat<TrBoing<1200,1>,PulsingL<GhostWhite,Int<1200>>,TrInstant>,EFFECT_IGNITION>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,StyleFire<Yellow,Red>,Stripes<1500,-2500,White,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Gradient<BrownNoiseFlicker<Red,White,50>,BrownNoiseFlickerL<DarkOrange,Int<50>>,BrownNoiseFlicker<White,Red,50>>,TrWipeInSparkTipX<White,Int<300>>,TrConcat<TrInstant,HumpFlickerL<Snow,50>,TrFade<900>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Deadlink"},


	{"Apocalypse;common", "tracks/",
StylePtr<Layers<RandomFlicker<Rgb<100,10,255>,Rgb<90,10,200>>,ResponsiveLockupL<NavajoWhite,TrInstant,TrInstant,Int<26000>>,LockupTrL<BrownNoiseFlicker<Snow,Magenta,50>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<NavajoWhite,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrSmoothFade<800>,Gradient<Black,BrownNoiseFlicker<Snow,Magenta,50>,Black>,TrSmoothFade<300>>,EFFECT_IGNITION>,InOutHelperL<InOutFuncX<Int<300>,Int<700>>>>>(), "Apocalypse"},


	{"VOLATILE;common", "tracks/",
StylePtr<Layers<Red,AudioFlickerL<Rgb<220,0,0>>,ResponsiveLockupL<Gradient<Black,Pulsing<NavajoWhite,LightYellow,800>,Black>,TrInstant,TrInstant,Int<26000>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,White,Red>,Stripes<1500,-2500,White,Red>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Gradient<Pulsing<Black,Tomato,900>,BrownNoiseFlicker<Red,White,50>,Pulsing<Black,Red,1200>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<TransitionEffect<Rgb<255,225,0>,NavajoWhite,TrInstant,TrFade<100>,EFFECT_CLASH>,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Volatile"},


	{"ASSASSIN;common", "tracks/",
StylePtr<Layers<Red,HumpFlickerL<RotateColorsX<Sin<Int<5>,Int<3096>,Int<512>>,BrownNoiseFlicker<Red,Yellow,50>>,50>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,LockupTrL<BrownNoiseFlicker<Gradient<Snow,DodgerBlue,Red,Snow>,HumpFlicker<Yellow,Magenta,50>,50>,TrConcat<TrWipeInSparkTip<Snow,400,800>,BrownNoiseFlicker<SteelBlue,Magenta,50>,TrFade<100>>,TrWipeSparkTipX<White,Int<300>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<BrownNoiseFlickerL<DeepSkyBlue,Int<50>>,TrConcat<TrInstant,White,TrBoing<300,2>>,TrWaveX<White>,Int<26000>,Int<6000>,Int<15000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrSmoothFade<600>,Gradient<Black,Mix<SmoothStep<Sin<Int<10>>,Sin<Int<7>>>,Red,Yellow>,NavajoWhite,Black>,TrWaveX<White>>,EFFECT_IGNITION>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Assassin"},


{ "Calibrate", "tracks/battery_charge.wav",
 &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<122, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
   CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
