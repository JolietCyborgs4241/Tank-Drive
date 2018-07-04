#include "Robot.h"

#include "WPIlib.h"
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "SmartDashboard/SmartDashboard.h"
#include "SmartDashboard/SendableChooser.h"
#include "IterativeRobot.h"

DriveTrain* Robot::driveTrain = NULL;
OI* Robot::oi = NULL;

void Robot::RobotInit() {
	RobotMap::init();

	driveTrain = new DriveTrain();

	oi = new OI();

	lw = LiveWindow::GetInstance();

	frc::SmartDashboard::PutData("Auto Modes", &Chooser);
}

void Robot::DisabledInit() {
}

void Robot::DisabledPeriodic() {
}
	
void Robot::AutonomousInit() {
}
	
void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}
	
void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to 
	// continue until interrupted by another command, remove
	// this line or comment it out.
	cycleTime = GetClock();
}
	
void Robot::TeleopPeriodic() {
	SmartDashboard::PutNumber("CycleTime", GetClock() - cycleTime);
	cycleTime = GetClock();

	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);