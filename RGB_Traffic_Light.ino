int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void setColor(int redVal, int greenVal, int blueVal){
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, bluePin);

}

void loop(){
  setColor(255,245,45);
  delay(3000);

  setColor(0,255,0);
  delay(3000);
  
    setColor(255,0,255);
  delay(2500);
  

}


