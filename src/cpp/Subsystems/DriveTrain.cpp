#include "DriveTrain.h"
#include "Commands/TankDriveWithJoystick.h"
using namespace frc;

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	rightMotor1 = new WPI_TalonSRX(2);
	rightMotor2 = new WPI_TalonSRX(3);
	leftMotor1 = new WPI_TalonSRX(4);
	leftMotor2 = new WPI_TalonSRX(5);
}

void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new TankDriveWithJoystick());
}

void DriveTrain::Drive(double left, double right) {
	leftMotor1->Set(-left);
	leftMotor2->Set(-left);
	rightMotor1->Set(right);
	rightMotor2->Set(right);
}

void DriveTrain::AutoDriveForward(){
	rightMotor1->Set(-.7);
	rightMotor2->Set(-.7);
	leftMotor1->Set(.7);
	leftMotor2->Set(.7);
}

void DriveTrain::AutoStop(){
	rightMotor1->Set(0);
	rightMotor2->Set(0);
	leftMotor1->Set(0);
	leftMotor2->Set(0);
}
void DriveTrain::AutoTurnRight(){
	rightMotor1->Set(-.7);
	rightMotor2->Set(-.7);
	leftMotor1->Set(.7);
	leftMotor2->Set(.7);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
