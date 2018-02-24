#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "CANTalon.h"

class DriveTrain: public Subsystem
{
private:
	RobotDrive* myDrive;
	CANTalon* rightMotor1;
	CANTalon* rightMotor2;
	CANTalon* leftMotor1;
	CANTalon* leftMotor2;
	Talon* fakeLeft1;
	Talon* fakeLeft2;
	Talon* fakeRight1;
	Talon* fakeRight2;

	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	DriveTrain();
	void InitDefaultCommand();
	void Drive(double left, double right);
	void Drive(Joystick* joy);
	void AutoDriveForward();
	void AutoStop();
	void AutoTurnLeft();
	void AutoTurnRight();

};

#endif
