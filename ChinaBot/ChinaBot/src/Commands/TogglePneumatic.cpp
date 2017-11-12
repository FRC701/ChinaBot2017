#include "TogglePneumatic.h"

TogglePneumatic::TogglePneumatic() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called once when the command executes
void TogglePneumatic::Initialize() {
	if (Robot::pneumatics->pneumatic->Get() == DoubleSolenoid::kReverse)
		Robot::pneumatics->pneumatic->Set(DoubleSolenoid::kForward);
	else
		Robot::pneumatics->pneumatic->Set(DoubleSolenoid::kReverse);
}
