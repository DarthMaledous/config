#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
#define VOLUME 2400
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
{"Violence", "",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<OrangeRed,Yellow>,Pulsing<Gradient<RandomFlicker<OrangeRed,Yellow>,Strobe<Rgb<211,65,253>,BrownNoiseFlicker<Cyan,White,100>,50,1>,RandomFlicker<OrangeRed,Yellow>,RandomFlicker<OrangeRed,Yellow>,Strobe<Rgb<211,65,253>,BrownNoiseFlicker<Cyan,White,100>,50,1>,RandomFlicker<OrangeRed,Yellow>,RandomFlicker<OrangeRed,Yellow>>,Pulsing<Gradient<RandomFlicker<OrangeRed,Yellow>,RandomFlicker<OrangeRed,Yellow>,Strobe<Rgb<211,65,253>,BrownNoiseFlicker<Cyan,White,100>,50,1>,RandomFlicker<OrangeRed,Yellow>,Strobe<Rgb<211,65,253>,BrownNoiseFlicker<Cyan,White,100>,50,1>,RandomFlicker<OrangeRed,Yellow>,Strobe<Rgb<211,65,253>,BrownNoiseFlicker<Cyan,White,100>,50,1>,RandomFlicker<OrangeRed,Yellow>>,Gradient<RandomFlicker<OrangeRed,Yellow>,RandomFlicker<OrangeRed,Yellow>,Strobe<Rgb<211,65,253>,BrownNoiseFlicker<Cyan,White,100>,50,1>,RandomFlicker<OrangeRed,Yellow>,RandomFlicker<OrangeRed,Yellow>,Strobe<Rgb<211,65,253>,BrownNoiseFlicker<Cyan,White,100>,50,1>,RandomFlicker<OrangeRed,Yellow>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,BrownNoiseFlicker<GhostWhite,Black,200>,120,80>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,250>,900>,200,500>>(), "Violence"},



{"The_Second", "",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<Rgb<255,160,0>,Orange>,Pulsing<Gradient<RandomFlicker<Rgb<255,160,0>,Orange>,RandomFlicker<Rgb<255,160,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<255,160,0>,Orange>,RandomFlicker<Rgb<255,160,0>,Orange>>,Gradient<RandomFlicker<Rgb<255,160,0>,Orange>,RandomFlicker<Rgb<255,160,0>,Orange>,RandomFlicker<Rgb<255,160,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<255,160,0>,Orange>,RandomFlicker<Rgb<255,160,0>,Orange>>,3500>,RandomPerLEDFlicker<Red,White>>>,White>,GhostWhite,850>,200,500>>(), "Prototype2"},



{"Corellian_SS", "",
StylePtr<InOutHelper<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<Red,Rgb<170,0,0>>, Pulsing<Gradient<RandomFlicker<Red,Rgb<170,0,0>>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>, RandomFlicker<Red,Rgb<170,0,0>>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>, RandomFlicker<Red,Rgb<170,0,0>>>, Pulsing<Gradient<RandomFlicker<Red,Rgb<170,0,0>>, RandomFlicker<Red,Rgb<170,0,0>>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>>,Gradient<RandomFlicker<Red,Rgb<170,0,0>>, RandomFlicker<Red,Rgb<170,0,0>>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>, RandomFlicker<Red,Rgb<170,0,0>>, Strobe<White, BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>>,1500>,2000>, RandomPerLEDFlicker<Red,White>>, White, 120, 50>, Yellow>, 200, 500, Black>>(), "Corellian"},



{"Energy_Saber", "",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<BrownNoiseFlicker<Rgb<211,65,253>,Blue,75>,Pulsing<Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>>,Pulsing<Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>>,Gradient<BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Rgb<211,65,253>,Blue,50>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,160>,Orange>,White,400>,200,500>>(), "Energy_Saber"},



{"Korriban_SS", "",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<AudioFlicker<Red,Rgb<175,0,0>>,Pulsing<Gradient<BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>>,Pulsing<Gradient<BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>>,Gradient<BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,BrownNoiseFlicker<Red,Rgb<175,0,0>,75>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,BrownNoiseFlicker<Magenta,Black,75>,120,80>,Orange>,White,800>,200,500>>(), "Korriban"},



{"Vengeance_SS", "",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<Rgb<180,85,0>,Orange>,Pulsing<Gradient<RandomFlicker<Rgb<180,85,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<180,85,0>,Orange>,RandomFlicker<Rgb<180,85,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<180,85,0>,Orange>,RandomFlicker<Rgb<180,85,0>,Orange>>,Pulsing<Gradient<RandomFlicker<Rgb<180,85,0>,Orange>,RandomFlicker<Rgb<180,85,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<180,85,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<180,85,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<180,85,0>,Orange>>,Gradient<RandomFlicker<Rgb<180,85,0>,Orange>,RandomFlicker<Rgb<180,85,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<180,85,0>,Orange>,RandomFlicker<Rgb<180,85,0>,Orange>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Rgb<180,85,0>,Orange>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,160,80>,White>,Gradient<GhostWhite,Orange>,800>,200,500>>(), "Vengeance"},


{"Nightsister","",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<RandomFlicker<Red,Rgb<170,0,0>>,Pulsing<Gradient<RandomFlicker<Red,Rgb<170,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>,RandomFlicker<Red,Rgb<170,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>,RandomFlicker<Red,Rgb<170,0,0>>>,Pulsing<Gradient<RandomFlicker<Red,Rgb<170,0,0>>,RandomFlicker<Red,Rgb<170,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>>,Gradient<RandomFlicker<Red,Rgb<170,0,0>>,RandomFlicker<Red,Rgb<170,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>,RandomFlicker<Red,Rgb<170,0,0>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,RandomFlicker<Red,Rgb<170,0,0>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,100,85>,Green>,Gradient<GhostWhite,AudioFlicker<Orange,Yellow>>,1000>,200,500>>(), "Nightsister"},


{"SK_DarkSith2","",
StylePtr<InOutHelper<OnSpark<OriginalBlast<LocalizedClash<Lockup<Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Pulsing<Gradient<Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>>,Pulsing<Gradient<Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>>,Gradient<Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>,Strobe<White,BrownNoiseFlicker<Red,White,100>,50,1>,Gradient<Pulsing<Gradient<GhostWhite,DarkOrange>,Gradient<DarkOrange,Moccasin>,6000>,RandomFlicker<Orange,Yellow>,RandomFlicker<Orange,Yellow>>>,1500>,2000>,RandomPerLEDFlicker<Red,White>>,White,40,80>,White>,Gradient<GhostWhite,Yellow>,1000>,200,500>>(), "SK_DarkSith2"},


{ "SmthJedi", "tracks/mars.wav",
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
