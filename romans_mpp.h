#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 4
#define NUM_BUTTONS 2
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define SAVED_PRESET
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "The_Dark_Lord", "tracks/venus.wav",
//ACCENT LED
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<ColorCycle<Gradient<Red,Blue>,0,1,Stripes<500,800,Blinking<Red,Black,1000,800>,Black,Blinking<Blue,Black,1100,800>,Black>,100,3000,5000>,Pulsing<Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,3500>,RandomPerLEDFlicker<Red,White>>,White,90,70>,White,400>,200,500,Cylon<Sequence<Red,Black,100,37,0b1010100011100,0b111000111000101,0b100000000000000>,5,10,Red,15,3,5>>>(),

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Red,Rgb<185,0,0>,15>,HumpFlicker<Red,Rgb<185,0,0>,15>>,HumpFlicker<Red,Rgb<185,0,0>,15>,AudioFlicker<Blue,White>>,White>,300,800,Pulsing<Rgb<50,0,0>,Red,3500>>>(),
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Red,Rgb<185,0,0>,15>,HumpFlicker<Red,Rgb<185,0,0>,15>>,HumpFlicker<Red,Rgb<185,0,0>,15>,AudioFlicker<Blue,White>>,White>,300,800,Pulsing<Rgb<50,0,0>,Red,3500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<AudioFlicker<Red,Rgb<175,0,0>>,Pulsing<Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,3500>,RandomPerLEDFlicker<Red,White>>,ColorSequence<600,GhostWhite,Green,Yellow>,90,70>,ColorSequence<500,Yellow,Blue,White>,400>,200,500>>(),"cyan"},
///////////////////////////////////////////////////////////////////////////////////////////////////

{ "KSith_Rogue_Vader", "tracks/venus.wav",
//ACCENT LED
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<ColorCycle<Gradient<Red,Blue>,0,1,Stripes<500,800,Blinking<Red,Black,1000,800>,Black,Blinking<Blue,Black,1100,800>,Black>,100,3000,5000>,Pulsing<Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,3500>,RandomPerLEDFlicker<Red,White>>,White,90,70>,White,400>,200,500,Cylon<Sequence<Red,Black,100,37,0b1010100011100,0b111000111000101,0b100000000000000>,5,10,Red,15,3,5>>>(),

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Red,Rgb<185,0,0>,15>,HumpFlicker<Red,Rgb<185,0,0>,15>>,HumpFlicker<Red,Rgb<185,0,0>,15>,AudioFlicker<Blue,White>>,White>,300,800,Pulsing<Rgb<50,0,0>,Red,3500>>>(),

//MAIN BLADE









///////////////////////////////////////////////////////////////////////////////////////////////////

{ "Violence", "tracks/venus.wav",
//ACCENT LED
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<ColorCycle<Gradient<Red,Blue>,0,1,Stripes<500,800,Blinking<Red,Black,1000,800>,Black,Blinking<Blue,Black,1100,800>,Black>,100,3000,5000>,Pulsing<Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,3500>,RandomPerLEDFlicker<Red,White>>,White,90,70>,White,400>,200,500,Cylon<Sequence<Red,Black,100,37,0b1010100011100,0b111000111000101,0b100000000000000>,5,10,Red,15,3,5>>>(),

//CRYSTAL CHAMBER
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Red,Rgb<185,0,0>,15>,HumpFlicker<Red,Rgb<185,0,0>,15>>,HumpFlicker<Red,Rgb<185,0,0>,15>,AudioFlicker<Blue,White>>,White>,300,800,Pulsing<Rgb<50,0,0>,Red,3500>>>(),
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<HumpFlicker<Red,Rgb<185,0,0>,15>,HumpFlicker<Red,Rgb<185,0,0>,15>>,HumpFlicker<Red,Rgb<185,0,0>,15>,AudioFlicker<Blue,White>>,White>,300,800,Pulsing<Rgb<50,0,0>,Red,3500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<HumpFlicker<Red,Rgb<175,0,0>,75>,Pulsing<Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,Gradient<AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>,AudioFlicker<Red,Rgb<175,0,0>>>,3500>,RandomPerLEDFlicker<Red,White>>,ColorSequence<600,GhostWhite,Green,Yellow>,90,70>,ColorSequence<500,Yellow,Blue,White>,400>,200,500>>(),"Violence"},
///////////////////////////////////////////////////////////////////////////////////////////////////


  
   { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(),
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};
BladeConfig blades[] = {
	{ 0,
	   SubBlade(0, 5, WS281XBladePtr<128, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >() ),
	   SubBlade(6, 6, NULL),
	   SubBlade(7, 7, NULL),
	   SubBlade(8, 127, NULL),
	   CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif



StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Cylon<Blinking<Red,Black,500,500>,5,5,Stripes<500,1500,Blinking<Red,Black,1000,500>,Black,Blinking<Red,Black,200,500>,Black>,25,20,1>,White>,AudioFlicker<Blue,White>>,White>,300,800>>()