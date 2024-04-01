/***********************************************************
File name: Bar graph display without potentiometer.ino.c
Description: Without using Potentiometer Bar graph display changing.
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
  for (int i = 1; i <= 10; i++) {
    digitalWrite(i, HIGH);  // Turn on LED
    delay(500);             // Wait for 500 milliseconds
    digitalWrite(i, LOW);   // Turn off LED
  }

  delay(500);               // Delay between cycles
}
