#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "ctre/Phoenix.h"

frc::SpeedController* RobotMap::driveTrainFrontLeftDrive = NULL;
frc::SpeedController* RobotMap::driveTrainFrontRightDrive = NULL;
frc::SpeedController* RobotMap::driveTrainRearLeftDrive = NULL;
frc::SpeedController* RobotMap::driveTrainRearRightDrive = NULL;

void RobotMap::init() {
	frc::LiveWindow* lw = frc::LiveWindow::GetInstance();
}
