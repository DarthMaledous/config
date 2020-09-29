#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2300
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SHTOK_GESTURE_IGNITION
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "Peace", "tracks/sw_jedi_theme1.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Blue,Rgb<20,45,255>>,Pulsing<Gradient<RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>>,Pulsing<Gradient<RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>>,Gradient<RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>,RandomFlicker<Blue,Rgb<20,45,255>>,Strobe<GhostWhite,BrownNoiseFlicker<Red,White,300>,50,1>,RandomFlicker<Blue,Rgb<20,45,255>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,100,70>,White>,White,400>,200,500>>(), "cyan"},
	
	
 { "Corellian_CFX", "tracks/JFO5.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Blue,Pulsing<Gradient<Blue,Blue,Strobe<GhostWhite,BrownNoiseFlicker<Red,GhostWhite,300>,50,1>,Blue,Blue>,Gradient<Blue,Blue,Strobe<GhostWhite,BrownNoiseFlicker<Red,GhostWhite,300>,50,1>,Blue,Blue,Blue>,3500>,RandomPerLEDFlicker<Red,White>>>,White>,RandomFlicker<GhostWhite,DodgerBlue>,800>,200,500>>(), "blue"},
 
  
 
 { "Battle", "tracks/JFO3.wav",
 StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Pulsing<Gradient<Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Strobe<GhostWhite,BrownNoiseFlicker<Yellow,White,200>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>>,Gradient<Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Strobe<GhostWhite,BrownNoiseFlicker<Yellow,White,200>,50,1>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>,Gradient<Gradient<Pulsing<GhostWhite,SteelBlue,6000>,RandomFlicker<Blue,DodgerBlue>>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>,RandomFlicker<Blue,DodgerBlue>>>,3500>,RandomPerLEDFlicker<Red,White>>,White,70,65>,White>,HumpFlicker<GhostWhite,Cyan,50>,800>,200,500>>(), "fire"},
	
	
{ "Survivor_Blue", "tracks/SW_Fates_TPM.wav",
 StylePtr<InOutHelper<OnSpark<LocalizedClash<Lockup<Blast<AudioFlicker<Gradient<Gradient<DeepSkyBlue,Blue,Blue>,Blue,Blue,Blue,Blue,Blue,Blue,Blue>,DeepSkyBlue>,BrownNoiseFlicker<Green,Yellow,300>,150,200,600>,Pulsing<Gradient<AudioFlicker<Pink,Rgb<120,20,235>>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>>,Gradient<AudioFlicker<Pink,Rgb<120,20,235>>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>,HumpFlicker<Rgb<120,20,235>,Rgb<60,10,170>,50>>,3500>,Gradient<AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,Gradient<AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,White>>>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,50>,100>,Gradient<AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,Gradient<AudioFlicker<Rgb<120,20,235>,Rgb<60,10,170>>,BrownNoiseFlicker<White,Strobe<Blue,LemonChiffon,50,1>,300>,White>>,1400>,200,300>>(), "blue"},
  
  
  
{ "OWK", "tracks/BattleOfHeros.wav",
 StylePtr<InOutTr<Layers<RotateColorsX<Variation,Red>,TransitionEffectL<TrConcat<TrFade<400>,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrDelay<30000>,AudioFlickerL<RotateColorsX<Variation,Rgb<255,150,150>>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,26000,4000,EFFECT_CLASH>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,AudioFlickerL<White>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<OrangeRed,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>>,TrWipeX<Scale<IsLessThan<BladeAngle<>,Int<16000>>,Int<200>,Int<500>>>,TrWipe<500>,Layers<Black,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Red>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>>(), "blue"},

	
{ "EP1_Obi_Proffie", "tracks/EP1_Obi_Wan.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Blue,Rgb<0,25,130>>,Pulsing<Gradient<RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>>,Pulsing<Gradient<RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>>,Gradient<RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>,RandomFlicker<Blue,Rgb<0,25,130>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Blue,Rgb<0,25,130>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,ColorSequence<500,GhostWhite,Yellow>,95,70>,ColorSequence<650,Red,Rgb<155,0,255>,GhostWhite,Yellow>,400>,GhostWhite,550>,200,500>>(), "EP1 Blue"},	 
 
 
 
 {"Ksith_Light_SS", "tracks/Jedi_Master.wav",
 StylePtr<InOutHelper<OnSpark<LocalizedClash<Lockup<Blast<AudioFlicker<DodgerBlue,Blue>,White>,Pulsing<Gradient<AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>,BrownNoiseFlicker<White,Strobe<Red,White,50,1>,100>,AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>>,Gradient<AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>,BrownNoiseFlicker<White,Strobe<Red,White,50,1>,100>,AudioFlicker<DodgerBlue,Blue>,AudioFlicker<DodgerBlue,Blue>>,3500>,AudioFlicker<White,DodgerBlue>>>,GhostWhite,800>,180,500>>(), "blue TPM"},
   
   
{ "Calibrate", "tracks/batteryhum.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<121, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
