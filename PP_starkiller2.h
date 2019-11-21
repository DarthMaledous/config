#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 2800
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{"Rainsizzle", "tracks/RainBlade.wav",
//MAIN BLADE
StylePtr<InOutHelper<OnSpark<LocalizedClash<Lockup<Blast<Sparkle<Red,Black,300,1024>,DeepSkyBlue,200,100,400>,Pulsing<Gradient<Sparkle<Red,Black,300,1024>,Sparkle<Red,Black,300,1024>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,Sparkle<Red,Black,300,1024>,Sparkle<Red,Black,300,1024>,Sparkle<Red,Black,300,1024>>,Gradient<Sparkle<Red,Black,300,1024>,Sparkle<Red,Black,300,1024>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,Sparkle<Red,Black,300,1024>,Sparkle<Red,Black,300,1024>>,3500>,AudioFlicker<Red,White>>,White,80,50>,HumpFlicker<MistyRose,Red,60>,1600>,600,700,Black>>(),

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Black,Red,50>,White,200,100,400>,AudioFlicker<AudioFlicker<Yellow,White>,White>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,300,800,Pulsing<Red,Black,3000>>>(), "preset1"},
	

{ "SK_DarkSith1", "tracks/SK1.wav",
//MAIN BLADE
StylePtr<IgnitionDelay<600, InOutHelper<LocalizedClash<Lockup<Blast<Red,White,200,100,400>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,3500>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,180,800,Black>>>(),

//  CRYSTAL CHAMBER
StylePtr<IgnitionDelay<500,InOutHelper<LocalizedClash<Lockup<Blast<Red,White,200,100,400>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,3500>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,180,800,Pulsing<Blinking<Black,Orange,1500,300>,Red,5800>>>>(), "preset2"},


{ "Dark", "tracks/MSV.wav",
//MAIN BLADE
StylePtr<IgnitionDelay<600, InOutHelper<SimpleClash<Lockup<OriginalBlast<AudioFlicker<HumpFlicker<Rgb16<24816,0,0>,Red,15>,AudioFlicker<Rgb16<24816,0,0>,Yellow>>,Green>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,180,600,Black>>>(),

//CRYSTAL CHAMBER
StylePtr<IgnitionDelay<500, InOutHelper<SimpleClash<Lockup<OriginalBlast<AudioFlicker<HumpFlicker<Rgb16<24816,0,0>,Red,15>,AudioFlicker<Rgb16<24816,0,0>,Yellow>>,Green>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,180,600,Pulsing<Blinking<Red,Orange,1000,200>,Black,2800>>>>(),"preset3"},


{ "Outcast_Knight", "tracks/SW_AST2.wav",
//MAIN BLADE
StylePtr<IgnitionDelay<600, InOutHelper<OnSpark<LocalizedClash<Lockup<Blast<AudioFlicker<Red,Rgb<120,0,0>>,DeepSkyBlue,200,100,400>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,3500>,AudioFlicker<Red,White>>,Rgb16<33908,20996,329>,80,80>,HumpFlicker<MistyRose,Red,60>,1600>,500,700,Black>>>(),

//CRYSTAL CHAMBER
StylePtr<IgnitionDelay<500, InOutHelper<SimpleClash<Lockup<Blast<Pulsing<StyleFire<Red,Orange,0,5,FireConfig<0,4000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,AudioFlicker<Black,Red>,2500>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,1500>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,300,800,Black>>>(), "preset4"},


{"SK_DarkSith2", "tracks/SW_DarkDeeds.wav",
//MAIN BLADE
StylePtr<IgnitionDelay<600, InOutHelper<Lockup<LocalizedClash<Blast<AudioFlicker<Red,Rgb<120,0,0>>,White,200,175,250>,White,40,50>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,300,500,Black>>>(),

//CRYSTAL CHAMBER
StylePtr<IgnitionDelay<500, InOutHelper<Lockup<LocalizedClash<Blast<AudioFlicker<Red,Rgb<120,0,0>>,White,200,175,250>,White,40,50>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,300,500,Black>>>(), "preset5"},

};
BladeConfig blades[] = {
  { 0, WS2811BladePtr<144, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
    WS2811BladePtr<1, WS2811_ACTUALLY_800kHz | WS2811_GRB, blade2Pin, PowerPINS<bladePowerPin4> >()
  , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
