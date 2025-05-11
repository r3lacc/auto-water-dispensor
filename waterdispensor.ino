#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 8;

Servo myservo; //creates a servo object named myservo using the servo library. Its like creating a remote control that lets you tell the servo motor what angle to move to

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(servoPin);
  myservo.write(0); //initial closed position

}

void loop() {
  long duration;
  float distance;

  digitalWrite(trigPin, LOW); //make sure its low first and ready
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); //trigger the ultrasonic pulse wave
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //That HIGH voltage tells the sensor: "Start measuring now."
  //Echo is the input pin from the sensor to arduino. That means that the arduino can read data that the echo pin sends
  //After the trig pulse, the sensor emits an ultrasonic sound. It waits for the sound to bounce off an object and come back. The echo pin then goes high for a duration equal to the time it took for the wave to go and come back.

  duration = pulseIn(echoPin, HIGH);
  //pulseIn reads the time that the echo pin was in the HIGH state

  distance = (duration * 0.0343) / 2;
  //calculate the distance of the object

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 0 && distance <= 10) {
    myservo.write(90);  //servo turns and open the water
  } else {
    myservo.write(0); //closed position
  }

  delay(200);

}
