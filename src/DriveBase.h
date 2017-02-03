#include "Shared.h"
#include <Compressor.h>
//#include <Solenoid.h>
#include <DoubleSolenoid.h>
#include <AHRS.h>
//#include "DriveBase.cpp"

class DriveBase {
	//initializes front left
	static CANTalon* fl;

	//initializes rear left
	static CANTalon* rl;

	//initializes front right
	static CANTalon* fr;

	//initializes rear right
	static CANTalon* rr;

	//initializes robot drive
	static frc::RobotDrive* robotDrive;

	//initializes solenoid for pneumatics
	static frc::DoubleSolenoid* solenoid;

	//initializes the gear state
	static int gearState;
public:

	//starts navX
	static AHRS ahrs;

	//initializes base robot code
	static void init();

	static void drive(double left, double right); //tank drive robot drive with left and right side

	static void switchGear(bool gear); //set piston forward if true and reverse if false

	static int getGearState(); //check whether gear has been released or not

	static double DriveBase::getEncoderfl(); //gets the encoder position of encoder front left

	static void DriveBase::resetEncoderfl(); //resets the front left encoder

	static double DriveBase::getEncoderfr(); // get the encoder position of encoder front right

	static void DriveBase::resetEncoderfr(); //resets the front right encoder
};

/**TODO:
 * Create DriveBase class that:
 * has a constructor that:
 *  - initializes all CANTalons used on DriveBase
 *  - initializes all sensors used on DriveBase (Encoders, Accel, Gyro)
 *  - resets sensors
 *  - configures CANTalons (Followers)
 * has a drive(double left, double right)
 *  - Drives the robot in TankDrive using the left/right provided
 * has a resetGyro()
 *  - resets the gyro
 * has a resetAccel()
 *  - resets the accel
 * has a resetEncoder()
 *  - resets the encoders
 * has a getGyro()
 *  - returns a DOUBLE with the current Gyro value
 * has a getAccel()
 *  - returns a DOUBLE with the current Accel value
 * has a getEncoder()
 *  - returns a DOUBLE with the current Encoder value
 * has a enable()
 *  - enables the DriveBase. TURNED ON BY DEFAULT
 * has a disable()
 *  - disables the DriveBase CANTalons
 *\]
 * QUESTIONS:
 *  - Have a PID mode to set position encoders/gyro/accel should be at?
 *    = would need a set(double position) function as well as a PIDMode() function and a VbusMode() function to swith between the two
 */
