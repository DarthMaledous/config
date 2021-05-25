#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
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
   { "TeensySF", "tracks/venus.wav",
StylePtr<Layers<HumpFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,DodgerBlue>,50>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,TransitionEffectL<TrConcat<TrSmoothFade<300>,Gradient<NavajoWhite,White>,TrBoing<300,2>>,EFFECT_LOCKUP_END>,LockupTrL<Layers<AlphaL<BrownNoiseFlicker<Snow,Magenta,50>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<8000>,Int<26000>>,Int<12000>>,Scale<SwingSpeed<100>,Int<14000>,Int<26000>>>>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<Gradient<NavajoWhite,White,NavajoWhite>,TrInstant,TrSmoothFade<450>,Int<26000>,Int<6000>,Int<25000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "blue"},
	
   { "SmthJedi", "tracks/mars.wav",
StylePtr<Layers<Chartreuse,RandomL<RotateColorsX<Variation,Green>>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<BrownNoiseFlicker<Blue,Magenta,50>,Int<500>,Int<800>>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveBlastL<TransitionEffect<Azure,White,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<400>,Int<100>,Int<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrWipe<500>,Stripes<12000,-1000,DeepSkyBlue,Yellow,White,Blue>,TrSmoothFade<600>>,EFFECT_FORCE>,InOutTrL<TrConcat<TrWaveX<White>,Gradient<Black,Pulsing<Yellow,NavajoWhite,1000>,Pulsing<Yellow,Snow,1200>,Black>,TrSmoothFade<800>>,TrWipeIn<500>>>>(), "green"},


   { "SmthGrey", "tracks/mercury.wav",
StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,LockupTrL<Layers<AlphaL<AudioFlickerL<Azure>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,TransitionEffect<Azure,White,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,TrFade<400>>,TrConcat<TrInstant,AlphaL<Mix<SmoothStep<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<1000>>,Stripes<1500,2000,TransitionEffect<White,Azure,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<180,130,0>>,Stripes<1500,-2500,TransitionEffect<White,Azure,TrInstant,TrFade<200>,EFFECT_LOCKUP_BEGIN>,Rgb<180,130,0>>>,Int<18000>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,LockupTrL<Stripes<3000,-2000,RandomBlink<30000,Strobe<Rgb<125,125,225>,White,50,1>,Rgb<75,75,150>>,RandomPerLEDFlicker<Rgb<20,20,100>,Rgb<100,100,150>>>,TrWipe<200>,TrWipe<200>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveStabL<Red>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveBlastL<TransitionEffect<Azure,White,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<400>,Int<100>,Int<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrConcat<TrWipeSparkTipX<White,Int<300>>,Stripes<12000,1000,NavajoWhite,Orange,Yellow,White>,TrFade<100>>,TrConcat<TrFade<100>,Stripes<12000,900,NavajoWhite,Orange,Yellow,White>,TrWipeInSparkTipX<White,Int<500>>>>>>(), "gold"},
	
   { "SmthFuzz", "tracks/uranus.wav",
StylePtr<Layers<Cyan,RandomL<RotateColorsX<Variation,DeepSkyBlue>>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Magenta,50>,TrWipeInSparkTipX<BrownNoiseFlicker<Blue,Magenta,50>,Int<500>,Int<800>>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveBlastL<TransitionEffect<Azure,Yellow,TrInstant,TrFade<100>,EFFECT_CLASH>,Int<400>,Int<100>,Int<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<DarkOrange>,ResponsiveBlastFadeL<Yellow>,ResponsiveStabL<White>,TransitionEffectL<TrConcat<TrWipe<500>,Gradient<StyleFire<DeepSkyBlue,NavajoWhite,0,3>,Pulsing<SteelBlue,White,800>,StyleFire<NavajoWhite,DeepSkyBlue,0,3>>,TrSmoothFade<600>>,EFFECT_IGNITION>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "cyan"},


   { "RgueCmdr", "tracks/venus.wav",
    StyleFirePtr<BLUE, CYAN>(), "blue fire"},
   { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
   { "TeensySF", "tracks/mercury.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), "white"},
   { "SmthJedi", "tracks/uranus.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), "yellow"},
   { "SmthGrey", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "magenta"},
   { "SmthFuzz", "tracks/mars.wav",
    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(), "gradient"},
   { "RgueCmdr", "tracks/mercury.wav",
    StyleRainbowPtr<300, 800>(), "rainbow"},
   { "TthCrstl", "tracks/uranus.wav",
    StyleStrobePtr<WHITE, Rainbow, 15, 300, 800>(), "strobe"},
   { "TeensySF", "tracks/venus.wav",
    &style_pov, "POV"},
   { "SmthJedi", "tracks/mars.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
