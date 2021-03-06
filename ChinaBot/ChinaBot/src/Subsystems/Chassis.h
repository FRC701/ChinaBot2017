// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "CANTalon.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Chassis: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<CANTalon> rightDrive;
	std::shared_ptr<CANTalon> rightDrive2;
	std::shared_ptr<CANTalon> leftDrive1;
	std::shared_ptr<CANTalon> leftDrive2;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	Chassis();
	void InitDefaultCommand();
	void SetTankDrive(double speedLeft, double speedRight);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
