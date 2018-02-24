#include "DriveTrain.h"
#include "Commands/TankDriveWithJoystick.h"


DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	rightMotor1 = new CANTalon(1);
	rightMotor2 = new CANTalon(2);
	leftMotor1 = new CANTalon(3);
	leftMotor2 = new CANTalon(4);
	fakeLeft1 = new Talon(0);
	fakeLeft2 = new Talon(1);
	fakeRight1 = new Talon(2);
	fakeRight2 = new Talon(4);

	myDrive = new RobotDrive (fakeLeft1, fakeLeft2, fakeRight1, fakeRight2);


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
	rightMotor1->Set(fakeRight1->Get());
	rightMotor2->Set(fakeRight2->Get());
	leftMotor1->Set(fakeLeft1->Get());
	leftMotor2->Set(fakeLeft2->Get());
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
