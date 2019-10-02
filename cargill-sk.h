#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 2500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#endif

#ifdef CONFIG_PRESETS


// Fire speed, valid values are 1 - 10
#define FIRE1_SPEED 2
// How long to wait before firing up crossguards.
#define FIRE1_DELAY 800

// Each of these have three values: A, B, C
// A = non-random intensity
// B = random intensity
// C = cooling
// The first two control temperature, and as we add
// A + rnd(B) to the base of the blade each animation frame.
// The second controls how rapidly the fire cools down

// This is used during normal operation.
#define FIRE1_NORMAL 0, 1000, 2

// This is used when a clash occurs
#define FIRE1_CLASH  3000, 0, 0

// This is used during lockup.
#define FIRE1_LOCKUP 0, 5000, 10

// Helper
#define FIRE1PTR(NUM, DELAY) \
  StyleFirePtr<RED, YELLOW, NUM, DELAY, FIRE1_SPEED, \
    FIRE1_NORMAL, FIRE1_CLASH, FIRE1_LOCKUP>()


Preset presets[] = {
{ "SK_DarkSith1", "tracks/SK1.wav",
//ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Blinking<Red,Blinking<GreenYellow,Magenta,3200,500>,2400,850>,100,3000,3500>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,300,800,Blinking<Green,Red,1500,300>>>(),


//CRYSTAL CHAMBER
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Red,White,200,100,400>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,3500>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,180,800,Pulsing<Blinking<Black,Orange,1500,300>,Red,2800>>>(),

//MAIN BLADE
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<Red,White,200,100,400>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,BrownNoiseFlicker<White,Strobe<SteelBlue,White,50,1>,100>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,3500>,AudioFlicker<OrangeRed,White>>,GreenYellow,60,75>,180,800,Black>>(),"preset1"},


{ "Dark", "tracks/MSV.wav",
//ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<ColorCycle<Orange,0,1,Blinking<Red,Blinking<GreenYellow,Magenta,3200,500>,2400,850>,100,3000,3500>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,300,800,Blinking<Green,Red,1500,300>>>(),

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<AudioFlicker<HumpFlicker<Rgb16<24816,0,0>,Red,15>,AudioFlicker<Rgb16<24816,0,0>,Yellow>>,Green>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,180,600,Pulsing<Blinking<Red,Orange,1000,200>,Black,2800>>>(),


//MAIN BLADE
StylePtr<InOutHelper<SimpleClash<Lockup<OriginalBlast<AudioFlicker<HumpFlicker<Rgb16<24816,0,0>,Red,15>,AudioFlicker<Rgb16<24816,0,0>,Yellow>>,Green>,Gradient<Pulsing<BrownNoiseFlicker<OrangeRed,Rgb16<24816,0,0>,50>,HumpFlicker<Yellow,OrangeRed,200>,2500>,Pulsing<HumpFlicker<Yellow,Magenta,50>,BrownNoiseFlicker<Red,Magenta,50>,2000>,Pulsing<AudioFlicker<White,Blue>,Red,2200>,BrownNoiseFlicker<OrangeRed,Yellow,200>>,AudioFlicker<AudioFlicker<Yellow,White>,White>>,Blue,40>,180,600,Black>>(),"preset2"},



{ "Outcast_Knight", "tracks/SW_AST2.wav",
//ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Blinking<Red,Rgb16<33908,20996,329>,700,300>,White,700>,White,200,100,400>,AudioFlicker<OnSpark<Green,White,200>,White>,AudioFlicker<OnSpark<Green,White,200>,White>>,White,40>,300,800,Blinking<Black,Red,1400,200>>>(),
	
//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<StyleFire<Red,Orange,0,5,FireConfig<0,4000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,AudioFlicker<Black,Red>,2500>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,1500>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,300,800,Black>>(),


//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Pulsing<Gradient<AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>>,Pulsing<Gradient<AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>>,Gradient<AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Rgb16<24485,0,65535>,Rgb16<17247,0,46419>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,NavajoWhite,80>,NavajoWhite>,Gradient<HumpFlicker<Rgb16<38826,27207,57880>,Snow,50>,HumpFlicker<Rgb16<24485,0,65535>,Snow,50>,BrownNoiseFlicker<Rgb16<17247,0,46419>,Snow,50>>,1500>,200,500>>(),"preset3"},


{"SK_DarkSith2", "tracks/SW_DarkDeeds.wav",
//ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Blinking<Red,Rgb16<33908,20996,329>,700,300>,White,700>,White,200,100,400>,AudioFlicker<OnSpark<Green,White,200>,White>,AudioFlicker<OnSpark<Green,White,200>,White>>,White,40>,300,800,Blinking<Black,Red,1400,200>>>(),

//CRYSTAL CHAMBER
StylePtr<InOutHelper<Lockup<LocalizedClash<Blast<AudioFlicker<Red,Rgb<120,0,0>>,White,200,175,250>,White,40,50>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,300,500,Black>>(),

//MAIN BLADE
StylePtr<InOutHelper<Lockup<LocalizedClash<Blast<AudioFlicker<Red,Rgb<120,0,0>>,White,200,175,250>,White,40,50>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,Gradient<AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,Strobe<White,RandomPerLEDFlicker<White,Blue>,15,3>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>,AudioFlicker<Red,Rgb<120,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,300,500,Black>>(),"preset4"},


{"Sith_02", "tracks/SK2.wav",
//ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Blinking<Red,Rgb16<33908,20996,329>,700,300>,White,700>,White,200,100,400>,AudioFlicker<OnSpark<Green,White,200>,White>,AudioFlicker<OnSpark<Green,White,200>,White>>,White,40>,300,800,Blinking<Black,Red,1400,200>>>(),

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<StyleFire<Red,Orange,0,5,FireConfig<0,4000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,AudioFlicker<Black,Red>,2500>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,1500>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,300,800,Black>>(),

//MAIN BLADE
StylePtr<InOutHelper<LocalizedClash<Lockup<Blast<AudioFlicker<Red,Rgb<130,0,0>>,Cyan,200,100,400>,Pulsing<Gradient<AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>>,Gradient<AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>>,3500>,Pulsing<Gradient<AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>>,Gradient<AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,AudioFlicker<Red,Rgb<130,0,0>>,AudioFlicker<Red,Rgb<130,0,0>>>,3500>>,Cyan,40,50>,180,500,Black>>(),"preset5"},


{"Unstable", "tracks/kylo1.wav",
//ACCENT LEDs
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<Blinking<Red,Rgb16<33908,20996,329>,700,300>,White,700>,White,200,100,400>,AudioFlicker<OnSpark<Green,White,200>,White>,AudioFlicker<OnSpark<Green,White,200>,White>>,White,40>,300,800,Blinking<Black,Red,1400,200>>>(),

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Pulsing<StyleFire<Red,Orange,0,5,FireConfig<0,4000,5>,FireConfig<3000,0,0>,FireConfig<0,5000,10>,FireConfig<0,0,5>>,AudioFlicker<Black,Red>,2500>,White,200,100,400>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,1500>,Red>,AudioFlicker<Pulsing<Red,Rgb<50,0,0>,5000>,Red>>,White,40>,300,800,Black>>(),

//MAIN BLADE
StylePtr<InOutHelper<OriginalBlast<SimpleClash<Lockup<HumpFlicker<BrownNoiseFlicker<DarkOrange,Rgb16<21919,0,0>,90>,BrownNoiseFlicker<Red,Rgb16<21919,0,0>,80>,75>,Pulsing<Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,Gradient<StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<White,Strobe<Blue,White,50,1>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<Blast<LocalizedClash<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,White,80>,White>,Rgb<80,0,0>,0,8,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,3500>,RandomPerLEDFlicker<Red,White>>,Red,80>,Magenta>,200,500>>(),"preset6"},

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
   	SubBlade(0, 1, WS2811BladePtr<121, WS2811_ACTUALLY_800kHz | WS2811_GRB>()),
    	SubBlade(2, 2, NULL),
   	SubBlade(3, 120, NULL),
    	CONFIGARRAY(presets) },
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif

