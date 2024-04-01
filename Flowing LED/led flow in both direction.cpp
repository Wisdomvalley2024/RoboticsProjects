/***********************************************************
File name: Led Flow in both directions.c
Description: Flowing lights from Left to Right and Right to Left. 
			 We have to use if else condition for direction to flow lights in both direction ,See in line.no 20.
			 0 for left to right and 1 for right to left direction).
             if direction is equal to 0 , lights flow from left to right otherwise lights must be flow from right to left.
E-mail: wisdom.valley.ka@gmail.com
Date: 01/04/2024 
***********************************************************/
unsigned char direction = 0; // 0 for left to right, 1 for right to left

void setup()
{ 
  for(unsigned char ledPin = 1; ledPin <= 8; ledPin++) // Set pins 1 ~ 8 to output mode 
    pinMode(ledPin, OUTPUT);
}

void loop()
{   
  if(direction == 0) // Left to right
  {
    for(unsigned char ledPin = 1; ledPin <= 8; ledPin++)
    {
      digitalWrite(ledPin, HIGH); // Turn LED on
      delay(200);
      digitalWrite(ledPin, LOW); // Turn LED off
    }
  }
  else // Right to left
  {
    for(unsigned char ledPin = 8; ledPin >= 1; ledPin--)
    {
      digitalWrite(ledPin, HIGH); // Turn LED on
      delay(200);
      digitalWrite(ledPin, LOW); // Turn LED off
    }
  }
  // Toggle direction
  direction = 1 - direction;
}
