//flowing lights in two way 
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
