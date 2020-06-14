#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 2000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define NO_COLOR_SWING
#define IDLE_OFF_TIME 90 * 1000
#define SAVE_STATE
#define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_sa22c_buttons.h"
#endif


#ifdef CONFIG_PRESETS
Preset presets[] = {
{"Korriban", "tracks/",},

	
{"Black_Bishop", "tracks/",},
	
	
{"troy", "tracks/",},
	
	
{"Sith_01", "tracks/",},
	
	
{"Shadows", "tracks/",},
	
	
{"Pitch_Black", "tracks/",},

	
	
	
	
	
	
	
	
	
	RandomFlicker<Red,Rgb<195,0,0>>
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
{ "Calibrate", "tracks/Battery_Charge1.wav",
&style_charging, "Battery\nLevel"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<122, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
