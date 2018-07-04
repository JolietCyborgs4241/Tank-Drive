#pragma once

#include "WPILib.h"

class RobotMap {
	
public:
	static SpeedController* driveTrainFrontLeftDrive;
	static SpeedController* driveTrainFrontRightDrive;
	static SpeedController* driveTrainRearLeftDrive;
	static SpeedController* driveTrainRearRightDrive;

	static void init();
};