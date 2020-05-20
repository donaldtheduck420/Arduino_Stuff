int redPin = 11;    //rgb pins connected to digital pin numbers 11, 10, and 9
int greenPin = 10;
int bluePin = 9;

void setup(){
  pinMode(redPin, OUTPUT);   //initializing pins as outputs 
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void setColor(int redVal, int greenVal, int blueVal){ //function that tells the arduino to send electricity to either the red, green, and/or blue pinbased on the values when the function is called
  analogWrite(redPin, redVal);     //for the Arduino pin it has to write to, it sets the output of that pin based on its value (0 - 255)
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, bluePin);

}

void loop(){
  setColor(0,255,0); //green
  delay(3000);

  setColor(255,255,0); //yellow
  delay(3000);
  
    setColor(255,0,0); //red
  delay(2500);
  

}


