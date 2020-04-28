#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{"BLUE", "tracks/",
StylePtr<InOutTr<Layers<RotateColorsX<Variation,DeepSkyBlue>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<100,185,255>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<100,185,255>>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White>,ResponsiveBlastWaveL<White,300,100,300,26000,4000,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>>,TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInSparkTip<White,500>,Layers<Black,AlphaL<White,Int<0>>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>>(), "Blue"},

{"Battle", "tracks/",
StylePtr<InOutTr<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<30,30,65>>,RotateColorsX<Variation,Rgb<60,60,90>>>,TransitionLoopL<TrWaveX<HumpFlickerL<RotateColorsX<Variation,Rgb<75,75,125>>,40>,Int<250>,Int<100>,Int<200>,Int<0>>>,TransitionLoopL<TrWaveX<HumpFlickerL<RotateColorsX<Variation,Rgb<120,120,170>>,40>,Int<350>,Int<100>,Int<300>,Int<0>>>,TransitionEffectL<TrConcat<TrFade<200>,AlphaL<RotateColorsX<Variation,Rgb<175,175,225>>,SwingSpeed<500>>,TrDelay<30000>,AlphaL<RotateColorsX<Variation,Rgb<175,175,225>>,SwingSpeed<500>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White>,ResponsiveBlastWaveL<White,300,100,300,26000,4000,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>>,TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipeInSparkTip<White,500>,Layers<Black,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>>(), "Battle"},


{"Scavengers_Destiny", "tracks/",
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<TransitionEffect<TransitionEffect<BrownNoiseFlicker<DeepSkyBlue,DodgerBlue,40>,Gradient<BrownNoiseFlicker<SteelBlue,Azure,50>,White,StyleFire<SteelBlue,Blue,0,4>>,TrInstant,TrSmoothFade<1200>,EFFECT_IGNITION>,Gradient<Stripes<800,-5000,DodgerBlue,White,DeepSkyBlue,White>,Strobe<Black,White,15,1>,Stripes<1000,5000,DodgerBlue,White,DeepSkyBlue,White>>,TrInstant,TrSmoothFade<300>,EFFECT_LOCKUP_END>,White>,Pulsing<Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,Pulsing<Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,1500>,2000>,AudioFlicker<Blue,White>>>,200,500>>(), ""},


{"troy", "tracks/",
StylePtr<InOutHelper<Layers<

HumpFlicker<SteelBlue,DeepSkyBlue,50>,

TransitionEffectL<TrConcat<TrInstant,Gradient<Black,Pulsing<Snow,SteelBlue,2200>,Black>,TrWipeIn<500>>,EFFECT_IGNITION>,

LocalizedClashL<Snow,90,70>,

ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,

ResponsiveDragL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>>,

ResponsiveLightningBlockL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>,TrConcat<TrInstant,AliceBlue,TrFade<200>>,TrFade<400>>,

ResponsiveMeltL<BrownNoiseFlicker<Blue,Strobe<AliceBlue,White,50,1>,100>>,

ResponsiveStabL<Gradient<Pulsing<Black,Rgb<0,25,45>,800>,Strobe<Rgb<0,25,45>,Black,15,1>,Pulsing<BrownNoiseFlicker<Snow,Yellow,50>,Yellow,800>>,TrConcat<TrFade<100>,Black,TrFade<100>>>,

ResponsiveBlastL<ColorSequence<250,Snow,Yellow,Red>>>,

200,300, Black>>(),"troy"},







   { "Calibrate", "tracks/Battery_Charge_22.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<125, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

