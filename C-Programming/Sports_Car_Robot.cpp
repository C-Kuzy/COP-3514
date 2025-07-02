/*
 Author: Connor Kouznetsov
 Description: Engineering Lab Robot Race Car Project Code

              Functionality of the following parts: 

              1. Infrared (IR) Sensors: Placed on Front of Chasis
              2. 4x DC Motors: Place within chasis to evenly distribute weight
                               and allow forward/backward movement at speeds 
                               of 3 m/s (meters per second). 
              3. Arudino Control Unit: Respons
              4. 2x 12v batteries: 
              5. 

*/

#include <stdio.h>
#include <Servo.h>

#define LeftIR 11  //serves as the Arduino Input for the Left Sensor
#define RightIR 12  //serves as the Arduino Input for the Right Sensor
#define OVERALLMOTOR_Speed 150

Servo RobotLeftWheel;//This is the Left tire on the front axle
Servo RobotRightWheel;//This is the Right tire on the the front axle

//Enabling Infrared Sensors to work
int LeftSideIRStats; //Sensor statistical readings of the environment
int RightSideIRStats; //Sensor statistical readings of the environment

//Left Powered Motor
int EnableLeftPoweredMotor=6;
int MotorPin1Left=7;
int MotorPin2Left=8;

//Right Powered Motor
int EnableRightPoweredMotor=5;
int MotorPin1Right=9;
int MotorPin2Right=10;

void setup() {
  
  //--Setup IR Sensors
  pinMode(LeftIR,INPUT);//Left Sensor
  pinMode(RightIR,INPUT);// Right Sensor

  //--Setup Vehicle Wheels
  pinMode (EnableLeftPoweredMotor,OUTPUT);//Left Wheel
  pinMode (MotorPin1Left,OUTPUT);
  pinMode (MotorPin2Left,OUTPUT);

  pinMode (EnableRightPoweredMotor, OUTPUT);//Right Wheel
  pinMode (MotorPin1Right, OUTPUT);
  pinMode (MotorPin2Right, OUTPUT);

  rotateMotor (0,0);


  Serial.begin(9600);
}

void loop() {

  //--Setup IR Reading Ability
  LeftSideIRStats = digitalRead(LeftIR);//Conducts Stats from Left Sensor
  RightSideIRStats = digitalRead(RightIR);//Conducts Stats from Right Sensor

  Serial.println(LeftSideIRStats);//Prints data from the Left Ir sensor
  Serial.println(RightSideIRStats);//Prints data from the Right Ir sensor

  if (LeftSideIRStats == LOW && RightSideIRStats == LOW) {
    RobotLeftWheel.write(87);
    RobotRightWheel.write(87);
    {
      rotateMotor(OVERALLMOTOR_Speed, OVERALLMOTOR_Speed);
    }
  }
  else if (LeftSideIRStats == HIGH && RightSideIRStats == LOW) {
    RobotLeftWheel.write(90);
    RobotRightWheel.write(87);
    {
      rotateMotor(-OVERALLMOTOR_Speed, OVERALLMOTOR_Speed);
    }
  }
  else if (LeftSideIRStats == LOW && RightSideIRStats == HIGH) {
    RobotLeftWheel.write(87);
    RobotRightWheel.write(90);
    {
      rotateMotor(OVERALLMOTOR_Speed, -OVERALLMOTOR_Speed);
    }
      }
  else 
  {
   rotateMotor (0,0);
  }
  delay(10);//Set delay for the function  
}

void rotateMotor (int MotorRIGHTSpeed, int MotorLEFTSpeed)
{

  if (MotorRIGHTSpeed < 0)
  {
    digitalWrite(MotorPin1Right,LOW);
    digitalWrite(MotorPin2Right,HIGH);
  }
  else if (MotorRIGHTSpeed > 0)
  {
    digitalWrite(MotorPin1Right,HIGH);
    digitalWrite(MotorPin2Right,LOW);
  }
  else
  {
    digitalWrite(MotorPin1Right, LOW);
    digitalWrite(MotorPin2Right, LOW);
  }
  
  if (MotorLEFTSpeed < 0)
  {
    digitalWrite(MotorPin1Left,LOW);
    digitalWrite(MotorPin2Left,HIGH);
  }
  else if (MotorLEFTSpeed < 0)
  {
    digitalWrite(MotorPin1Left,HIGH);
    digitalWrite(MotorPin2Left,LOW);
  }
  else
  {
    digitalWrite(MotorPin1Right,LOW);
    digitalWrite(MotorPin2Right,LOW);
  }
}