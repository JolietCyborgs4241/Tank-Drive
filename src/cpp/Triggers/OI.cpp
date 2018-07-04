// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

#include "Subsystems/DriveTrain.h"
#include "SmartDashboard/SmartDashboard.h"
using namespace frc;


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
	pi = 3.141592653589793238462643383279;
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	driveController = new Joystick(0); //Xbox

	a = new JoystickButton(driveController, 1);
	b = new JoystickButton(driveController, 2);
	xb = new JoystickButton(driveController, 3);
	y = new JoystickButton(driveController, 4);
	lb = new JoystickButton(driveController, 5);
	rb = new JoystickButton(driveController, 6);
	back = new JoystickButton(driveController, 7);
	start = new JoystickButton(driveController, 8);
	//^Xbox^
}

Joystick* OI::getDriveController() {
	return driveController;
}

double OI::getTankDriveLeft() {
	return adjustJoystick(driveController->GetRawAxis(1));
}

double OI::getTankDriveRight() {
	return adjustJoystick(driveController->GetRawAxis(5));
}

double OI::adjustJoystick(double value) {
	// cube output
	double adjV = pow(value, 3);

	// add deadzone
	if (fabs(adjV) < 0.05) {
		return 0;
	} else {
		return adjV;
	}
}