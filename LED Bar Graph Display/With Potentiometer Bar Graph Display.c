/***********************************************************
File name: Bar graph display with potentiometer.ino.c
Description: With the help of Potentiometer Bar graph display changing(line.no 18, 36 and 37).
E-mail: wisdom.valley.ka@gmail.com
Date: 01/04/2024 
***********************************************************/
int pin1 = 1;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;            // Define digital pins 1 to 10 to control the LEDs

int potentiometerPin = 0;  // Potentiometer connected to analog pin 0

void setup()
{
  pinMode(pin1, OUTPUT);   // Set digital pins 1 to 10 as outputs
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead(potentiometerPin); // Read the potentiometer value
  int ledLevel = map(sensorValue, 0, 1023, 0, 16); // Map the potentiometer value to LED levels (0 to 10)
  
  for (int i = 1; i <= 10; i++) {
    if (i <= ledLevel) { // Turn on LEDs up to the LED level
      digitalWrite(i, HIGH);
    } else { // Turn off LEDs beyond the LED level
      digitalWrite(i, LOW);
    }
  }

  delay(50); // Delay for stability
}
