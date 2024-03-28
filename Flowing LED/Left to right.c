//flowing lights from left to right
unsigned char direction = 0; // 0 for left to right, 1 for right to left

void setup()
{ 
  for(unsigned char ledPin = 1; ledPin <= 8; ledPin++) // Set pins 1 ~ 8 to output mode 
    pinMode(ledPin, OUTPUT);
}

void loop()
{   
  {
    for(unsigned char ledPin = 1; ledPin <= 8; ledPin++)
    {
      digitalWrite(ledPin, HIGH); // Turn LED on
      delay(200);
      digitalWrite(ledPin, LOW); // Turn LED off
    }
  }


}
