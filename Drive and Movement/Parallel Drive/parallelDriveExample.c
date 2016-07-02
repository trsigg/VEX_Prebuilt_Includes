#pragma config(Motor,  port1,           lfd,           tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           lbd,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           rfd,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           rbd,           tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "parallelDrive.c"

task main() {
	parallel_drive drive;
	tMotor leftMotors[2] = {lfd, lbd};
	tMotor rightMotors[2] = {rfd, rbd};
	initializeDrive(drive, &(leftMotors[0]), &(rightMotors[0]));

	while (true) driveRuntime(drive);
}