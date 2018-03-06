#ifndef COMM_DATA_H_
#define COMM_DATA_H_

struct CommData{
  byte driveLB;
  byte driveLF;
  byte driveRB;
  byte driveRF;

  int intakePistons;
  int rampPistons;
  
  int pulleyPiston;
  int pulleyMotor;

  /**
   * ADD MORE HERE
   */
  
  
  CommData() :
    driveLB(90),
    driveLF(90),
    driveRB(90),
    driveRF(90),
    intakePistons(0),
    rampPistons(0)
  {}
};

#endif
