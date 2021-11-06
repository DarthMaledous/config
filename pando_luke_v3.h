#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.8
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_SSD1306
#define COLOR_CHANGE_DIRECT
#define DISABLE_DIAGNOSTIC_COMMANDS
#define FETT263_SWING_ON
#define FETT263_LOCKUP_DELAY 200
#define FETT263_TWIST_OFF
#define FETT263_STAB_ON
#define SAVE_STATE
#define IDLE_TIME 60 * 5 * 1000
#define MOTION_TIMEOUT 60 * 15 * 1000
#define FETT263_BATTLE_MODE_ALWAYS_ON
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "Ksith_Light_SS", "tracks/venus.wav",
    StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,0,128>>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Green>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
    StylePtr<Layers<RotateColorsX<Variation,Green>,TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RotateColorsX<Variation,White>,3000>>>>(), "cyan"},
	
	{"The_Return", "tracks/",	
StylePtr<Layers<
  Green,
  RandomL<GreenYellow>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<AlphaL<BrownNoiseFlicker<DodgerBlue,Magenta,145>,Int<32000>>,TrWipeInSparkTipX<Snow,Int<425>,Int<175>>,TrWaveX<White>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  TransitionEffectL<TrWaveX<Yellow,Int<600>,Int<200>>,EFFECT_LOCKUP_BEGIN>,
  TransitionEffectL<TrConcat<TrBoing<300,2>,BrownNoiseFlicker<Green,Magenta,50>,TrWaveX<White>>,EFFECT_LOCKUP_END>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  TransitionEffectL<TrConcat<TrSmoothFade<800>,Gradient<Black,HumpFlicker<Snow,LightYellow,50>,AudioFlicker<Green,Yellow>>,TrSmoothFade<1800>>,EFFECT_IGNITION>,
  TransitionEffectL<TrConcat<TrInstant,Stripes<2500,3000,Green,Snow,GreenYellow,Ivory>,TrWipeIn<500>>,EFFECT_RETRACTION>,
  InOutTrL<TrWipe<200>,TrWipeIn<500>>>>(),
  
StylePtr<Layers<RotateColorsX<Variation,Green>,TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RotateColorsX<Variation,White>,3000>>>>(), "Preset 2"},
	

   { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<121, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<1, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4, bladePowerPin5> >()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
