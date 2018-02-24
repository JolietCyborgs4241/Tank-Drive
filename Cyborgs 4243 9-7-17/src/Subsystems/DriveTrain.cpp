#include "DriveTrain.h"
#include "Commands/TankDriveWithJoystick.h"
using namespace frc;

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	rightMotor1 = new WPI_TalonSRX(1);
	rightMotor2 = new WPI_TalonSRX(2);
	leftMotor1 = new WPI_TalonSRX(4);
	leftMotor2 = new WPI_TalonSRX(5);
	myDrive = new frc::RobotDrive(rightMotor1, rightMotor2, leftMotor1, leftMotor2);




}

void DriveTrain::InitDefaultCommand()
{
	myDrive->SetSafetyEnabled(false);

	SetDefaultCommand(new TankDriveWithJoystick());
}

void DriveTrain::Drive(double left, double right)
{
	myDrive->TankDrive(left, right);

}

void DriveTrain::Drive(Joystick* joy) {
	Drive(-joy->GetY(), -joy->GetRawAxis(5));
	rightMotor1->Set(-joy->GetY());
	rightMotor2->Set(-joy->GetY());
	leftMotor1->Set(-joy->GetRawAxis(5));
	leftMotor2->Set(-joy->GetRawAxis(5));
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
