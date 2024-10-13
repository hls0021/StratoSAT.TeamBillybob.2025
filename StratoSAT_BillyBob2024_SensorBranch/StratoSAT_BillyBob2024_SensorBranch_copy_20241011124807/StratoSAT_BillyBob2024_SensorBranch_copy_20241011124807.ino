#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <Adafruit_BMP3XX.h>

// BNO055 sensor object
Adafruit_BNO055 bno = Adafruit_BNO055(55);
// GPS object 
Adafruit_GPS GPS(&Serial1);
// Declare global variables and constants 
unsigned long startTime; 
unsigned long currentTime; 
int totalPackets = 1; 
const char* teamID = "BillyBob"; //Subject to change
void setup() {
  
  Serial.begin(115200);

  while (!Serial) delay(10);  // wait for serial port to open!
  
  if (!bno.begin())
  {
    Serial.print("No BNO055 detected");
    while (1);
  }

  delay(1000);

	//serial communication
	Serial.begin(9600);
	Serial1.begin(9600);
//GPS
}



void loop() {

delay(50)
//collect and output absolute orientation by euler angle
imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);

 //collect and output angular velocity with the gyro
imu::Vector<3> gyro = bno.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);

// Collect and output acceleration
imu::Vector<3> accel = bno.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);

//collect and output temperature
int = bno.getTemp()

// gather and output GPS data
?????????
 
}