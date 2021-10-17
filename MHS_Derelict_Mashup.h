#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 1800
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
//#define FETT263_SWING_ON
#define FETT263_TWIST_OFF
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "Protoblade", "tracks/venus.wav",
StylePtr<Layers<
  BrownNoiseFlicker<Yellow,DarkOrange,25>,
  TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,NavajoWhite,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<BrownNoiseFlicker<Snow,Magenta,50>,TrWipeInSparkTipX<White,Int<300>>,TrSmoothFade<900>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  MultiTransitionEffectL<TrConcat<TrWaveX<White>,Snow,TrConcat<TrBoing<300,2>,Snow,TrSmoothFade<1200>>>,EFFECT_FORCE>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrSmoothFade<800>,Int<26000>,Int<6000>,Int<25000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Protoblade"},


{ "MysticMaster", "tracks/",
StylePtr<Layers<
  RandomFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<195,0,0>>>,
  TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,NavajoWhite,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,
  ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
  LockupTrL<Gradient<BrownNoiseFlicker<Blue,Magenta,50>,AlphaL<Snow,SmoothStep<Sin<Int<10>>,Sin<Int<7>>>>,BrownNoiseFlicker<Black,Magenta,50>>,TrWipeInSparkTipX<White,Int<600>>,TrWaveX<White>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
  ResponsiveDragL<White>,
  ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
  ResponsiveBlastL<White>,
  ResponsiveBlastWaveL<White>,
  ResponsiveBlastFadeL<White>,
  ResponsiveStabL<White>,
  InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Mystic Master"},

{ "Sith_Killer", "tracks/",
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,MultiTransitionEffectL<TrConcat<TrWaveX<White>,Snow,TrJoinR<TrSmoothFade<300>,TrColorCycle<3000>>>,EFFECT_FORCE>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "Sith Killer"},

   { "DarkJedi", "tracks/uranus.wav",
   StylePtr<Layers<
 Mix<SlowNoise<Int<1000>>,OrangeRed,Yellow>,
 TransitionEffectL<TrConcat<TrWaveX<White,Int<200>,Int<125>,Int<600>>,Gradient<Black,NavajoWhite,Black>,TrSmoothFade<1600>>,EFFECT_IGNITION>,
 ResponsiveLockupL<White,TrInstant,TrInstant,Int<26000>>,
 LockupTrL<Gradient<BrownNoiseFlicker<Blue,Magenta,50>,AlphaL<Snow,SmoothStep<Sin<Int<10>>,Sin<Int<7>>>>,BrownNoiseFlicker<Black,Magenta,50>>,TrWipeInSparkTipX<White,Int<600>>,TrWaveX<White>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
 ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>>,
 ResponsiveDragL<White>,
 ResponsiveClashL<White,TrInstant,TrFade<200>,Int<26000>>,
 ResponsiveBlastL<White>,
 ResponsiveBlastWaveL<White>,
 ResponsiveBlastFadeL<White>,
 ResponsiveStabL<White>,
 InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(), "red"},

{ "The_Maw", "tracks/",
StylePtr<Layers<Mix<SmoothStep<Int<16000>,Int<10000>>,StripesX<Int<5000>,Int<1500>,Rgb<95,0,210>,Rgb<30,0,50>,Rgb<130,40,230>,Rgb<42,0,110>>,StripesX<Int<5000>,Int<1500>,Rgb<95,0,210>,Rgb<30,0,50>,Rgb<130,40,230>,Rgb<42,0,110>>>,AlphaL<BrownNoiseFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,Black,100>,SwingSpeed<400>>,LocalizedClashL<BrownNoiseFlicker<Yellow,OrangeRed,500>,100>,TransitionEffectL<TrConcat<TrInstant,Strobe<GreenYellow,Black,20,30>,TrFade<50>>,EFFECT_CLASH>,ResponsiveStabL<Red,TrWipeIn<300>,TrJoin<TrSmoothFade<900>,TrWipe<700>>>,BlastL<Cyan,400,250,401>,TransitionEffectL<TrConcat<TrInstant,Strobe<GreenYellow,Black,20,30>,TrDelay<50>,AlphaL<Red,Int<6000>>,TrJoinR<TrWipe<50>,TrWipeIn<50>>>,EFFECT_BLAST>,ResponsiveLockupL<Gradient<RandomFlicker<OrangeRed,Red>,Strobe<Yellow,BrownNoiseFlicker<Black,Strobe<Black,Yellow,15,20>,300>,50,1>,RandomFlicker<Red,OrangeRed>>,TrConcat<TrInstant,Strobe<GreenYellow,Black,20,30>,TrFade<150>>,TrConcat<TrInstant,Strobe<GreenYellow,Black,20,30>,TrDelay<30>,Rgb<100,100,100>,TrJoinR<TrWipe<125>,TrWipeIn<125>>>>,ResponsiveDragL<BrownNoiseFlicker<Yellow,Strobe<Red,White,15,20>,300>,TrConcat<TrInstant,Strobe<GreenYellow,Black,20,30>,TrFade<150>>,TrColorCycle<1500,-2000,100>>,ResponsiveMeltL<Mix<TwistAngle<>,Yellow,RandomPerLEDFlicker<Orange,OrangeRed>,BrownNoiseFlicker<Rgb16<20095,128,128>,Rgb16<35103,8175,298>,150>,StyleFire<Rgb16<20393,93,93>,Red,0,4,FireConfig<0,2000,5>,FireConfig<3000,0,0>,FireConfig<0,4000,0>>>,TrWipeIn<600>,TrColorCycle<1500,2000,100>>,ResponsiveLightningBlockL<RandomFlicker<Strobe<White,Rgb16<21301,0,65535>,50,10>,BrownNoiseFlicker<Rgb16<21301,0,65535>,Black,500>>,TrConcat<TrInstant,Strobe<GreenYellow,Black,20,30>,TrFade<150>>,TrConcat<TrInstant,Strobe<GreenYellow,Black,20,30>,TrDelay<30>,BrownNoiseFlicker<Rgb16<21301,0,65535>,Black,500>,TrJoinR<TrWipe<125>,TrWipeIn<125>>>>,TransitionEffectL<TrConcat<TrDelay<200>,Strobe<Black,Rgb<160,60,255>,15,40>,TrJoin<TrWipeInSparkTip<White,800,200>,TrWipeSparkTip<White,800,200>>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrJoin<TrWipe<500>,TrWipeIn<500>>,Mix<SmoothStep<Int<16384>,Int<10000>>,Stripes<2000,-1500,Black,Rgb<100,100,150>>,Stripes<2000,1500,Black,Rgb<100,100,150>>>,TrFade<500>>,EFFECT_RETRACTION>,InOutTrL<TrJoin<TrWipeInSparkTip<White,800,200>,TrWipeSparkTip<White,800,200>>,TrJoin<TrWipeInSparkTip<White,2000,500>,TrWipeSparkTip<White,2000,500>>>,TransitionEffectL<TrConcat<TrInstant,White,TrFade<50>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrDelay<1100>,White,TrFade<50>>,EFFECT_RETRACTION>>>(), "The Maw"},

{"Legion", "tracks/",
},

{"Shadow_Hand", "tracks/",
},

   { "Calibrate", "tracks/Battery_Level_2.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<122, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
