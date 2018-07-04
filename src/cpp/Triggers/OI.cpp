#include "OI.h"

#include "Subsystems/DriveTrain.h"
#include "SmartDashboard/SmartDashboard.h"
using namespace frc;


OI::OI() {
	pi = 3.141592653589793238462643383279;
	
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
