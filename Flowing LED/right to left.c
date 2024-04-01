/***********************************************************
File name: Led Flow From Right to Left.c
Description: Flowing lights from Right to Left. See in line.no 13 and 20 set the ledPin to 8
             and inside for loop write condition as ledPin greater than or equal to 1 and decreased the ledPin.
			 or
			 We have to change the direction value from 0 to 1 in line.no 10(0 for left to right and 1 for right to left direction). 
E-mail: wisdom.valley.ka@gmail.com
Date: 01/04/2024 
***********************************************************/
unsigned char direction = 0; // 0 for left to right, 1 for right to left
void setup()
{ 
  for(unsigned char ledPin = 8; ledPin >= 1; ledPin--) // Set pins 1 ~ 8 to output mode 
    pinMode(ledPin, OUTPUT);
}

void loop()
{   
  {
    for(unsigned char ledPin = 8; ledPin >= 1; ledPin--)
    {
      digitalWrite(ledPin, HIGH); // Turn LED on
      delay(200);
      digitalWrite(ledPin, LOW); // Turn LED off
    }
  }


}
