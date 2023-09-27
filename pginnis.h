#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 4
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SHARED_POWER_PINS
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
{ "TOTE", "tracks/",  StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<195,0,0>>>,TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,Pulsing<NavajoWhite,Snow,1200>,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<White>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(),

// On board LED's
// 0 - 14
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Yellow>,RotateColorsX<Variation,Rgb<195,0,0>>>,TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,Pulsing<NavajoWhite,Snow,1200>,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<White>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Pulsing<Red,Black,4800>>>>(),
//1 - 15
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Yellow>,RotateColorsX<Variation,Rgb<195,0,0>>>,TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,Pulsing<NavajoWhite,Snow,1200>,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<White>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Pulsing<Yellow,Black,4200>>>>(),

StylePtr<Layers<AudioFlicker<Tomato,Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<BrownNoiseFlicker<Yellow,OrangeRed,50>,Red,1000,250>>>>(),"The One True Emperor"},
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

{"Protoblade", "tracks/",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<220,130,0>>,RotateColorsX<Variation,Rgb<150,80,0>>>,TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,Pulsing<NavajoWhite,Snow,1200>,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrWipeSparkTipX<NavajoWhite,Int<300>>,Gradient<Stripes<3000,1500,BrownNoiseFlicker<NavajoWhite,Red,50>,Orange,Yellow,Red>,Pulsing<Snow,LightSalmon,475>,Stripes<3000,-1000,Red,Yellow,Orange,BrownNoiseFlicker<NavajoWhite,Red,50>>>,TrWipe<50>>,EFFECT_FORCE>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,LockupTrL<Gradient<Pulsing<Snow,Black,800>,BrownNoiseFlicker<Blue,Magenta,50>,BrownNoiseFlicker<Green,Magenta,50>,Pulsing<Black,Snow,1000>>,TrWipeInSparkTipX<White,Int<300>>,TrFade<100>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(),

// On board LED's
// 0 - 14
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Yellow>,RotateColorsX<Variation,Rgb<195,0,0>>>,TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,Pulsing<NavajoWhite,Snow,1200>,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<White>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Pulsing<Red,Black,4800>>>>(),

//1 - 15
StylePtr<Layers<RandomFlicker<RotateColorsX<Variation,Yellow>,RotateColorsX<Variation,Rgb<195,0,0>>>,TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,Pulsing<NavajoWhite,Snow,1200>,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,ResponsiveLightningBlockL<White>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,ResponsiveDragL<White>,ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,ResponsiveBlastL<White>,ResponsiveBlastWaveL<White>,ResponsiveBlastFadeL<White>,ResponsiveStabL<White>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Pulsing<Yellow,Black,4200>>>>(),

StylePtr<Layers<AudioFlicker<Tomato,Red>,InOutHelperL<InOutFuncX<Int<300>,Int<800>>,Blinking<BrownNoiseFlicker<Yellow,OrangeRed,50>,Red,1000,250>>>>(),"Protoblade"},
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

{"Calibrate", "tracks/",
      &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(),
    StyleNormalPtr<BLACK, BLACK, 300, 800>(),
    StyleNormalPtr<Pulsing<Red, Rgb<50,0,0>, 5000>, White, 300, 800, Red>(),"Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0,
   //MAIN BLADE
   WS281XBladePtr<122, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),

   // ON BOARD LED's
   SubBladeWithStride (0, 14, 2, WS281XBladePtr<16, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >() ),
   SubBladeWithStride (1, 15, 2, NULL),

   //CRYSTAL CHAMBER
   WS281XBladePtr<1, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin4> >(),
   CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
