#ifndef DriveBase_H
#define DriveBase_H

#include <Commands/PIDSubsystem.h>
#include <WPILib.h>

class DriveBase : public RobotDrive {
public:
	DriveBase();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif  // DriveBase_H
