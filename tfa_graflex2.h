#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2600
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#define NO_COLOR_SWING
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
//SmoothSwing Font Section //   
{ "TFA_Graflex", "tracks/Jedi_Steps.wav",StylePtr<Layers<
  Layers<
    Layers<
      Layers<
        DeepSkyBlue,
        AudioFlickerL<DodgerBlue>>,
      LockupL<Pulsing<Gradient<AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>>,Pulsing<Gradient<AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>>,Gradient<AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,
      LocalizedClashL<White,80>,
      BlastL<Rgb16<62191,64410,24155>>>,
    OnSparkL<Gradient<AudioFlicker<LightCyan,SteelBlue>,AudioFlicker<LightCyan,DodgerBlue>,DodgerBlue>,Int<600>>>,
  InOutHelperL<InOutFuncX<Int<200>,Int<450>>>>>(),"Preset1"},
   
{ "The_Return", "tracks/traya.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Pulsing<Gradient<Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>>,Pulsing<Gradient<Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>>,Gradient<Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<DeepSkyBlue,AudioFlicker<SteelBlue,White>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>>,White>,White,400>,200,450>>(),"Preset2"},

{"Ksith_Light_SS", "tracks/rotj.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Blue,DodgerBlue>,Pulsing<Gradient<RandomFlicker<DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>>,Pulsing<Gradient<RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<DodgerBlue,Blue>>,Gradient<RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<DodgerBlue,Blue>,RandomFlicker<DodgerBlue,Blue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<DodgerBlue,Blue>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,90>,White>,HumpFlicker<AliceBlue,DeepSkyBlue,60>,800>,190,400>>(), "Preset3"},
   
{ "Jedi_01", "tracks/rotj.wav",
StylePtr<InOutHelper<OnSpark<LocalizedClash<Lockup<Blast<Gradient<AudioFlicker<LightCyan,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>>,BrownNoiseFlicker<Red,Magenta,300>,150,200,600>,Pulsing<Gradient<AudioFlicker<LightCyan,SteelBlue>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>>,Gradient<AudioFlicker<LightCyan,SteelBlue>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>,HumpFlicker<DeepSkyBlue,SteelBlue,50>>,3500>,Gradient<AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,Gradient<AudioFlicker<DeepSkyBlue,SteelBlue>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,White>>>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,50>,100,50>,Gradient<AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,AudioFlicker<DeepSkyBlue,SteelBlue>,Gradient<AudioFlicker<DeepSkyBlue,SteelBlue>,BrownNoiseFlicker<White,Strobe<Red,LemonChiffon,50,1>,300>,White>>,1400>,200,300,Black>>(),"Preset4"},
   

{ "Scavenger", "tracks/track3.wav",
StylePtr<Layers<
  Layers<
    Layers<
      DodgerBlue,
      RandomL<Blue>>,
    LockupL<Pulsing<Gradient<AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>>,Pulsing<Gradient<AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>>,Gradient<AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>,AudioFlicker<DeepSkyBlue,DodgerBlue>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<DeepSkyBlue,DodgerBlue>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,
    LocalizedClashL<White,80>,
    BlastL<Rgb16<62191,64410,24155>>>,
  OnSparkL<Gradient<AudioFlicker<LightCyan,SteelBlue>,AudioFlicker<LightCyan,DodgerBlue>,DodgerBlue>,Int<600>>,
  ResponsiveMeltL<Mix<TwistAngle<>,Red,Yellow>,TrInstant,TrInstant>,
  InOutHelperL<InOutFuncX<Int<300>,Int<800>>>>>(),"Preset5"},


// End of SmoothSwing Font Section //


   { "Calibrate", "tracks/Charge_22.wav",
    &style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS2811BladePtr<118, WS2811_ACTUALLY_800kHz | WS2811_GRB>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
