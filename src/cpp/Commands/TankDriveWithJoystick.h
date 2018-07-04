#ifndef TankDriveWithJoystick_H
#define TankDriveWithJoystick_H

#include "Commands/Command.h"

class TankDriveWithJoystick: public frc::Command{
public:
	TankDriveWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
