#ifndef TogglePneumatic_H
#define TogglePneumatic_H

#include "Commands/InstantCommand.h"
#include "../Robot.h"

class TogglePneumatic : public InstantCommand {
public:
	TogglePneumatic();
	void Initialize();
};

#endif  // TogglePneumatic_H
