// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef OI_H
#define OI_H
#include "WPILib.h"
#include <math.h>
class OI {
private:

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
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
#endif
