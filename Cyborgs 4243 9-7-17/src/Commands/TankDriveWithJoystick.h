#ifndef TankDriveWithJoystick_H
#define TankDriveWithJoystick_H

#include "Commands/Command.h"

class TankDriveWithJoystick: public Command{
public:
	TankDriveWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
