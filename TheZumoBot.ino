#include <Zumo32U4.h> //library for the 32U4 Pololu Zumobot

Zumo32U4Motors motors;   //object of the class Zumo32U4Motors, called motors
Zumo32U4ButtonA buttonA; //object of the class Zumo32U4ButtonA, called buttonA

int defaultSpeed = 160; //a integer called defaultSpeed that holds the value 145, which is the constant speed I use


void setup() {

}

void loop() {
  bool buttonPress = buttonA.getSingleDebouncedPress(); //created a boolean called buttonPress, which returns true if the button is pressed according to the getSingleDebouncedPress(); method of the Zumo32U4ButtonA class, or false if the button is not pressed
  
  if(buttonPress){
    
    delay(1000); //doesn't start moving the zumobot for 1 second, allowing the user to move their hand from the button

    motors.setSpeeds(defaultSpeed, defaultSpeed); //the zumobot moves forwards for 1 second
    delay(1000);

    motors.setSpeeds(0, 0); //zumobot stops for half a second
    delay(500);

    motors.setSpeeds(defaultSpeed, -defaultSpeed); // the zumobot turns right
    delay(550);

    motors.setSpeeds(0, 0); //zumobot stops
    delay(500);

    //and then the pattern repeats, until it makes a square

    motors.setSpeeds(defaultSpeed, defaultSpeed);
    delay(1000);
    
    motors.setSpeeds(0, 0);
    delay(500);

    motors.setSpeeds(defaultSpeed, -defaultSpeed);
    delay(550);

    motors.setSpeeds(0, 0);
    delay(500);

    motors.setSpeeds(defaultSpeed, defaultSpeed);
    delay(1000);

    motors.setSpeeds(0, 0);
    delay(500);

    motors.setSpeeds(defaultSpeed, -defaultSpeed);
    delay(550);

    motors.setSpeeds(0, 0);
    delay(500);

    motors.setSpeeds(defaultSpeed, defaultSpeed);
    delay(1000);

    motors.setSpeeds(0, 0);
    delay(500);

    motors.setSpeeds(defaultSpeed, -defaultSpeed);
    delay(550);

    motors.setSpeeds(0, 0);
    delay(500);
    
  }
  
  
}
