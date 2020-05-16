#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 5
#define NUM_BUTTONS 2
#define VOLUME 2200
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#define NO_COLOR_SWING
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
{ "Vengeance", "tracks/swtor_darksidetheme1.wav",
// 5 LED PCB
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Red,Pulsing<Gradient<Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red>,Pulsing<Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,90>,Green>,GhostWhite,850>,200,500,Pulsing<Black,Gradient<Pulsing<Red,Yellow,2000>,Pulsing<OrangeRed,PapayaWhip,800>,Pulsing<PapayaWhip,Orange,800>,Pulsing<Yellow,Red,2000>>,6500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,Pulsing<Gradient<RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>>,Pulsing<Gradient<RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>>,Gradient<RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<125,0,255>,Rgb<25,0,150>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Gradient<RandomFlicker<Yellow,Blue>,RandomPerLEDFlicker<DodgerBlue,Cyan>>,90,80>,BrownNoiseFlicker<Cyan,DeepSkyBlue,50>,400>,White,400>,200,500>>(),

//SWITCH LED's
StylePtr<InOutHelper<Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>,1,1,Blinking<Red,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,200,37,0b111000111000101,0b100000000000000,0b111000111000101>,1,1,Blinking<Red,Black,4500,200>>>(), 
StylePtr<IgnitionDelay<1000, InOutHelper<SimpleClash<Lockup<Blast<Yellow,Blinking<Yellow,Black,70,500>>,AudioFlicker<Blue,White>>,Blinking<Black,Yellow,150,500>>,300,800,Pulsing<Black,Yellow,5000>>>>(), "cyan"},

/////////////////////////////////////////////


{ "KSith_Ascension", "tracks/MSV.wav",
// 5 LED PCB
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Red,Pulsing<Gradient<Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red>,Pulsing<Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,90>,Green>,GhostWhite,850>,200,500,Pulsing<Black,Gradient<Pulsing<Red,Yellow,2000>,Pulsing<OrangeRed,PapayaWhip,800>,Pulsing<PapayaWhip,Orange,800>,Pulsing<Yellow,Red,2000>>,6500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<LocalizedClash<Lockup<TransitionEffect<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<StyleFire<Orange,Red,0,2,FireConfig<0,5000,5>>,Strobe<Black,White,15,1>,Stripes<1000,3000,Orange,GhostWhite,Orange,GhostWhite>>,TrInstant,TrSmoothFade<800>,EFFECT_LOCKUP_END>,Pulsing<Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,Pulsing<Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,BrownNoiseFlicker<Magenta,DodgerBlue,200>,100,85>,Pulsing<Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,Pulsing<Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,Gradient<Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>,Strobe<Magenta,BrownNoiseFlicker<Cyan,White,100>,50,1>,Gradient<Pulsing<Rgb16<49276,28626,468>,Rgb16<45951,45951,0>,2500>,RandomFlicker<Rgb16<45951,45951,0>,Rgb16<29351,23182,2334>>,RandomFlicker<Rgb16<29351,23182,2334>,Rgb16<49276,28626,468>>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,BrownNoiseFlicker<White,LightYellow,200>,100,85>,ColorSequence<500,Red,Green,Blue>,800>,Gradient<StyleFire<RandomPerLEDFlicker<Black,Orange>,White,0,4,FireConfig<0,3000,5>>,Pulsing<White,Black,1000>,Stripes<1000,3000,NavajoWhite,Orange,NavajoWhite,Orange>>,1600>,200,500>>(),

//SWITCH LED's
StylePtr<InOutHelper<Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>,1,1,Blinking<Red,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,200,37,0b111000111000101,0b100000000000000,0b111000111000101>,1,1,Blinking<Red,Black,4500,200>>>(), 
StylePtr<IgnitionDelay<1000, InOutHelper<SimpleClash<Lockup<Blast<Yellow,Blinking<Yellow,Black,70,500>>,AudioFlicker<Blue,White>>,Blinking<Black,Yellow,150,500>>,300,800,Pulsing<Black,Yellow,5000>>>>(), "amber"},

//////////////////////////////////////////


{ "Secret_Apprentice", "tracks/JFO19.wav",
// 5 LED PCB
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Red,Pulsing<Gradient<Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red>,Pulsing<Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,90>,Green>,GhostWhite,850>,200,500,Pulsing<Black,Gradient<Pulsing<Red,Yellow,2000>,Pulsing<OrangeRed,PapayaWhip,800>,Pulsing<PapayaWhip,Orange,800>,Pulsing<Yellow,Red,2000>>,6500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<AudioFlicker<Red,Rgb<175,0,0>>,Pulsing<Gradient<BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>>,Pulsing<Gradient<BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>>,Gradient<BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,BrownNoiseFlicker<Magenta,Black,75>,120,80>,Orange>,White,800>,200,500>>(),

//SWITCH LED's
StylePtr<InOutHelper<Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>,1,1,Blinking<Red,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,200,37,0b111000111000101,0b100000000000000,0b111000111000101>,1,1,Blinking<Red,Black,4500,200>>>(), 
StylePtr<IgnitionDelay<1000, InOutHelper<SimpleClash<Lockup<Blast<Yellow,Blinking<Yellow,Black,70,500>>,AudioFlicker<Blue,White>>,Blinking<Black,Yellow,150,500>>,300,800,Pulsing<Black,Yellow,5000>>>>(), "red"},

////////////////////////////////////////


{"Survivor_Orange", "tracks/swtor_epic2.wav",
// 5 LED PCB
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Red,Pulsing<Gradient<Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red>,Pulsing<Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,90>,Green>,GhostWhite,850>,200,500,Pulsing<Black,Gradient<Pulsing<Red,Yellow,2000>,Pulsing<OrangeRed,PapayaWhip,800>,Pulsing<PapayaWhip,Orange,800>,Pulsing<Yellow,Red,2000>>,6500>>>(),


//MAIN BLADE
StylePtr<InOutSparkTip<OnSpark<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<DarkOrange,Yellow>,Pulsing<Gradient<RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>,Strobe<GhostWhite,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,Gradient<RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>,Strobe<GhostWhite,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>,RandomFlicker<DarkOrange,Yellow>>,3500>,RandomPerLEDFlicker<Red,White>>,GhostWhite,90,70>,Rgb<150,10,200>>,GhostWhite,800>,200,500>>(),

//SWITCH LED's
StylePtr<InOutHelper<Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>,1,1,Blinking<Red,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,200,37,0b111000111000101,0b100000000000000,0b111000111000101>,1,1,Blinking<Red,Black,4500,200>>>(), 
StylePtr<IgnitionDelay<1000, InOutHelper<SimpleClash<Lockup<Blast<Yellow,Blinking<Yellow,Black,70,500>>,AudioFlicker<Blue,White>>,Blinking<Black,Yellow,150,500>>,300,800,Pulsing<Black,Yellow,5000>>>>(), "dark orange"},

///////////////////////////////////////
{"MOTF", "tracks/swtor_epic1.wav",
// 5 LED PCB
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Red,Pulsing<Gradient<Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red>,Pulsing<Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,90>,Green>,GhostWhite,850>,200,500,Pulsing<Black,Gradient<Pulsing<Red,Yellow,2000>,Pulsing<OrangeRed,PapayaWhip,800>,Pulsing<PapayaWhip,Orange,800>,Pulsing<Yellow,Red,2000>>,6500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<Yellow,Rgb<225,200,0>>,Pulsing<Gradient<RandomFlicker<Yellow,Rgb<225,200,0>>,RandomFlicker<Yellow,Rgb<225,200,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Yellow,Rgb<225,200,0>>,RandomFlicker<Yellow,Rgb<225,200,0>>>,Gradient<RandomFlicker<Yellow,Rgb<225,200,0>>,RandomFlicker<Yellow,Rgb<225,200,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Yellow,Rgb<225,200,0>>,RandomFlicker<Yellow,Rgb<225,200,0>>,RandomFlicker<Yellow,Rgb<225,200,0>>>,3500>,RandomPerLEDFlicker<Red,White>>,White,80,70>,Red>,Gradient<GhostWhite,Rgb<225,200,0>,Yellow>,1000>,200,500>>(),


//SWITCH LED's
StylePtr<InOutHelper<Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>,1,1,Blinking<Red,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,200,37,0b111000111000101,0b100000000000000,0b111000111000101>,1,1,Blinking<Red,Black,4500,200>>>(), 
StylePtr<IgnitionDelay<1000, InOutHelper<SimpleClash<Lockup<Blast<Yellow,Blinking<Yellow,Black,70,500>>,AudioFlicker<Blue,White>>,Blinking<Black,Yellow,150,500>>,300,800,Pulsing<Black,Yellow,5000>>>>(), "yellow"},

/////////////////////////////////////////////////////////////

{"cyber", "tracks/JFO12.wav",
// 5 LED PCB
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Red,Pulsing<Gradient<Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red>,Pulsing<Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,90>,Green>,GhostWhite,850>,200,500,Pulsing<Black,Gradient<Pulsing<Red,Yellow,2000>,Pulsing<OrangeRed,PapayaWhip,800>,Pulsing<PapayaWhip,Orange,800>,Pulsing<Yellow,Red,2000>>,6500>>>(),

//MAIN BLADE
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,Pulsing<Gradient<RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,Strobe<White,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,Strobe<White,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>>,Pulsing<Gradient<RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,Strobe<White,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,Strobe<White,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,Strobe<White,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>>,Gradient<RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,Strobe<White,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>,Strobe<White,BrownNoiseFlicker<Red,GhostWhite,100>,50,1>,RandomFlicker<Rgb<120,5,220>,Rgb<60,0,100>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,40,70>,Gradient<Red,Yellow>>,GhostWhite,1000>,200,500>>(),

//SWITCH LED's
StylePtr<InOutHelper<Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>,1,1,Blinking<Red,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,200,37,0b111000111000101,0b100000000000000,0b111000111000101>,1,1,Blinking<Red,Black,4500,200>>>(), 
StylePtr<IgnitionDelay<1000, InOutHelper<SimpleClash<Lockup<Blast<Yellow,Blinking<Yellow,Black,70,500>>,AudioFlicker<Blue,White>>,Blinking<Black,Yellow,150,500>>,300,800,Pulsing<Black,Yellow,5000>>>>(), "purple"},

////////////////////////////////////////////////////////////////
{"Inquisitorious", "tracks/",
// 5 LED PCB
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<Red,Pulsing<Gradient<Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red>,Pulsing<Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,Gradient<Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red,Red,Strobe<White,BrownNoiseFlicker<Orange,White,100>,50,1>,Red>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,Yellow,90>,Green>,GhostWhite,850>,200,500,Pulsing<Black,Gradient<Pulsing<Red,Yellow,2000>,Pulsing<OrangeRed,PapayaWhip,800>,Pulsing<PapayaWhip,Orange,800>,Pulsing<Yellow,Red,2000>>,6500>>>(),

//MAIN BLADE
StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,Mix<SwingSpeed<600>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrDelay<30000>,Mix<SwingSpeed<600>,AudioFlickerL<Rgb<150,0,0>>,Red>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastWaveL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>,TransitionEffectL<TrConcat<TrInstant,StyleFire<RotateColorsX<Variation,Rgb<255,150,150>>,RotateColorsX<Variation,Rgb<60,0,0>>,0,6>,TrFade<1200>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<1000>>,EFFECT_RETRACTION>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<500>,Int<200>>>,TrWipe<500>,Black>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Rgb<120,120,165>,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<Rgb<120,120,165>,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

StylePtr<InOutHelper<Sequence<Red,Black,500,37,0b1010100011100,0b111000111000101,0b100000000000000>,1,1,Blinking<Red,Black,2000,200>>>(),
StylePtr<InOutHelper<Sequence<Red,Black,200,37,0b111000111000101,0b100000000000000,0b111000111000101>,1,1,Blinking<Red,Black,4500,200>>>(), 
StylePtr<IgnitionDelay<1000, InOutHelper<SimpleClash<Lockup<Blast<Yellow,Blinking<Yellow,Black,70,500>>,AudioFlicker<Blue,White>>,Blinking<Black,Yellow,150,500>>,300,800,Pulsing<Black,Yellow,5000>>>>(), "Outstanding"},


{ "Calibrate", "tracks/Battery_Charge1.wav",
 &style_charging,
 StyleNormalPtr<BLACK, BLACK, 300, 800>(), 
 StyleNormalPtr<BLACK, BLACK, 300, 800>(), 
 StyleNormalPtr<BLACK, BLACK, 300, 800>(), 
 StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};

// Yellow LED map
struct YELLOWLED {
static constexpr float MaxAmps = 1.0;
static constexpr float MaxVolts = 1000.0;
static constexpr float P2Amps = 0.0;
static constexpr float P2Volts = 0.0;
static constexpr float R = 0.0;
static const int Red = 255;
static const int Green = 255;
static const int Blue = 0;
};


BladeConfig blades[] = {
	
 { 0, 
    SubBlade(0, 4, WS281XBladePtr<130, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3>>()),
	SubBlade(5, 129, NULL),
	SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin4, -1, -1, -1>(),
	SimpleBladePtr<CH1LED, NoLED, NoLED, NoLED, bladePowerPin5, -1, -1, -1>(),
	SimpleBladePtr<YELLOWLED, NoLED, NoLED, NoLED, bladePowerPin6, -1, -1, -1>(),
    CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif