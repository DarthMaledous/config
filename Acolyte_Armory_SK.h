#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 2500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVED_PRESET
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif


#ifdef CONFIG_PRESETS


Preset presets[] = {
{ "SK_DarkSith1", "tracks/",

//  CRYSTAL CHAMBER
StylePtr<IgnitionDelay<250,InOutHelper<LocalizedClash<Lockup<Blast<RandomFlicker<Red,Rgb<85,0,0>>,White>,Red,AudioFlicker<OrangeRed,White>>,RandomFlicker<Red,Rgb<85,0,0>>,60,75>,180,800,Pulsing<Rgb<80,0,0>,Red,5800>>>>(),

//MAIN BLADE
StylePtr<IgnitionDelay<300,InOutHelper<LocalizedClash<Lockup<Blast<Red,White,200,100,400>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,3500>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,180,800,Black>>>(),"preset1" },

///////
	
	
{ "The_Second", "tracks/",


//CRYSTAL CHAMBER
StylePtr<IgnitionDelay<250,InOutHelper<SimpleClash<Lockup<OriginalBlast<AudioFlicker<HumpFlicker<Rgb16<24816,0,0>,Red,15>,AudioFlicker<Rgb16<24816,0,0>,Yellow>>,Green>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,180,600,Pulsing<Blinking<Red,Orange,1000,200>,Black,2800>>>>(),

//MAIN BLADE
StylePtr<InOutSparkTip<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<HumpFlicker<Red,Rgb<100,0,0>,200>,Gradient<StyleFire<Red,White>,Strobe<Black,White,10,25>,Stripes<1000,5000,Red,Black,Red,White>>,TrInstant,TrSmoothFade<500>,EFFECT_LOCKUP_END>,Gradient<Strobe<Black,StyleFire<BrownNoiseFlicker<Red,White,50>,Orange,0,3>,45,25>,Pulsing<White,Red,1600>,Pulsing<White,Red,1200>,StyleFire<BrownNoiseFlicker<Red,White,50>,Orange,0,3>>,TrInstant,TrSmoothFade<800>,EFFECT_IGNITION>,Pulsing<Gradient<HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>>,Pulsing<Gradient<HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>>,Gradient<HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>,HumpFlicker<Red,Rgb<100,0,0>,200>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<Red,Rgb<100,0,0>,200>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,95,70>,ColorSequence<500,Blinking<GreenYellow,Yellow,1000,500>,Strobe<Black,GhostWhite,15,20>,Yellow>>,200,500,Snow>>(),"preset2"},

//////


{ "Unlightstable", "tracks/",

//CRYSTAL CHAMBER
StylePtr<IgnitionDelay<250,InOutHelper<SimpleClash<Lockup<Blast<Pulsing<StyleFire<Red,Orange,0,5,FireConfig<0,4000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,AudioFlicker<Black,Red>,2500>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,1500>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,300,800,Black>>>(),

//MAIN BLADE
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<TransitionEffect<TransitionEffect<RandomFlicker<Red,Rgb<150,0,0>>,Gradient<StyleFire<Red,Orange,0,3>,Pulsing<Red,White,1200>,StyleFire<Orange,Red,0,3>>,TrInstant,TrSmoothFade<1600>,EFFECT_IGNITION>,Gradient<Stripes<1700,2000,Red,Yellow,Red,NavajoWhite>,Strobe<Black,White,25,1>,StyleFire<Orange,Yellow,0,3>>,TrInstant,TrSmoothFade<400>,EFFECT_LOCKUP_END>,ColorSequence<500,Yellow,Strobe<Black,Yellow,85,1>,Chartreuse>,400,100,4000>,Pulsing<Gradient<Strobe<Black,Red,50,1>,Red,White,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,White,White>,Gradient<Strobe<Black,Red,50,1>,Red,White,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Red,BrownNoiseFlicker<White,Red,50>>,3500>,Yellow>,White,90,70>,200,500>>(),"preset3"},

//////

{"Vaders_Assassin", "tracks/",

//CRYSTAL CHAMBER
StylePtr<IgnitionDelay<250,InOutHelper<Lockup<LocalizedClash<Blast<AudioFlicker<Red,Rgb<120,0,0>>,White,200,175,250>,White,40,50>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,300,500,Black>>>(),

//MAIN BLADE
StylePtr<IgnitionDelay<300,InOutHelper<Lockup<LocalizedClash<Blast<AudioFlicker<Red,Rgb<120,0,0>>,White,200,175,250>,White,40,50>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,300,500,Black>>>(),"preset4"},

///////

{"Pitch_Black", "tracks/",

//CRYSTAL CHAMBER
StylePtr<IgnitionDelay<250,InOutHelper<SimpleClash<Lockup<Blast<Pulsing<StyleFire<Red,Orange,0,5,FireConfig<0,4000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,AudioFlicker<Black,Red>,2500>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,1500>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,300,800,Black>>>(),

//MAIN BLADE
StylePtr<IgnitionDelay<300,InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,Pulsing<Gradient<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>>,Gradient<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>>,3500>,RandomPerLEDFlicker<Red,White>>,HumpFlicker<Green,Magenta,50>,120>,Gradient<AudioFlicker<Tomato,PapayaWhip>,AudioFlicker<NavajoWhite,Rgb16<25826,11585,0>>,AudioFlicker<MintCream,Green>>,800>,AudioFlicker<Rgb16<25826,11585,0>,PapayaWhip>,1000>,200,500>>>(),"preset5"},
	
////////

{"troy", "tracks/",

//CRYSTAL CHAMBER
StylePtr<IgnitionDelay<250,InOutHelper<SimpleClash<Lockup<Blast<Pulsing<StyleFire<Red,Orange,0,5,FireConfig<0,4000,5>>,AudioFlicker<Black,Red>,2500>,White>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,1500>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White>,300,800,Pulsing<Red,RandomPerLEDFlicker<Black,Magenta>,3500>>>>(),

//MAIN BLADE
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<TransitionEffect<TransitionEffect<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Gradient<BrownNoiseFlicker<SteelBlue,Azure,50>,White,StyleFire<SteelBlue,Blue,0,4>>,TrInstant,TrSmoothFade<1200>,EFFECT_IGNITION>,Gradient<Stripes<800,-5000,DodgerBlue,White,DeepSkyBlue,White>,Strobe<Black,White,15,1>,Stripes<1000,5000,DodgerBlue,White,DeepSkyBlue,White>>,TrInstant,TrSmoothFade<300>,EFFECT_LOCKUP_END>,White>,Pulsing<Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,Pulsing<Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,Gradient<BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<DeepSkyBlue,Blue,40>>,1500>,2000>,AudioFlicker<Blue,White>>>,200,500>>(),"preset6"},



 };


// Hook up the main blade as normal.
// Hook up one of the crossguards like this:
//  NEOPIXEL  +    <--> positive power (probably from charge port)
//  NEOPIXEL  -    <--> LED4 pad on the bottom of the teensysaber
//  NEOPIXEL data  <--> Nepixel data 2 (through a 300ohm resistor)
// Hook up the other crossguards like this:
//  NEOPIXEL  +    <--> positive power (probably from charge port)
//  NEOPIXEL  -    <--> LED5 pad on the bottom of the teensysaber
//  NEOPIXEL data  <--> Nepixel data 3 (through a 300ohm resistor)

BladeConfig blades[] = {
  { 0, 
   	  	SubBlade(0, 0, WS281XBladePtr<130, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()),
		SubBlade(5, 129, NULL),
      CONFIGARRAY(presets)
  },
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
