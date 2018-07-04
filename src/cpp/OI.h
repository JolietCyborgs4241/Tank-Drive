#pragma once

#include "WPILib.h"
#include <math.h>

class OI {
private:
	Joystick* driveController;

	JoystickButton* a;
	JoystickButton* b;
	JoystickButton* xb;
	JoystickButton* y;
	JoystickButton* lb;
	JoystickButton* rb;
	JoystickButton* back;
	JoystickButton* start;
	JoystickButton* ljoy;
	JoystickButton* rjoy;
	//Xbox

	double pi;
public:
	OI();
 
	Joystick* getDriveController();

	double adjustJoystick(double);
	double getTankDriveLeft();
	double getTankDriveRight();
};