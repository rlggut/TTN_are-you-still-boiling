const int buttonPin = 3;
int buttonState = 0;         // переменная для хранения состояния кнопки
int ledPin = 9;    // LED connected to digital pin 9

void setup() {
  pinMode(buttonPin, INPUT); 
}

void loop() {
  buttonState = digitalRead(buttonPin);
  int t=0;
  if (buttonState == HIGH) {
    while(t<20000)
    {
      analogWrite(ledPin, sin((3.14*t)/180)*122+123);
      delay(30);
      t++;
    }
    analogWrite(ledPin, 0);
/*    while(t<20000)
    {
      analogWrite(ledPin, 255);
      delay(30);
      t++;
    }
    analogWrite(ledPin, 0);*/
    /*while(t<20000)
    {
      analogWrite(ledPin, 255*(t%2));
      delay(30);
      t++;
    }
    analogWrite(ledPin, 0);*/
  }
}

