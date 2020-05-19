class Blinker{
  
  int ledPin;
  int ledStatus;
  long onTime;
  long offTime;
  unsigned long previousMillis;
  
  public:
  Blinker(int pin, long on, long off){
    ledPin = pin;
    pinMode(ledPin, OUTPUT);
    onTime = on;
    offTime = off;
    ledStatus = LOW;
    previousMillis = 0;

  }
  
  void Update(){
    unsigned long currentMillis = millis();
    
    if ((currentMillis - previousMillis >= onTime) && (ledStatus == HIGH)){
     ledStatus = LOW;
     previousMillis = currentMillis;
     digitalWrite(ledPin, ledStatus);
   
   }
    
   else if ((currentMillis - previousMillis >= offTime) && (ledStatus == LOW)){
      ledStatus = HIGH;
      previousMillis = currentMillis;
      digitalWrite(ledPin, ledStatus);
    
    }
  
  
  }


};



Blinker led1(8, 300, 300);
Blinker led2(9, 310, 310);
Blinker led3(10, 320, 320);

void setup(){

}

void loop(){
  led1.Update();
  led2.Update();
  led3.Update();

}



