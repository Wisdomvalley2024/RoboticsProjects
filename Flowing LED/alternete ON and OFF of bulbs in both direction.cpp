/***********************************************************
File name: Alternate ON and OFF of LED flow.c
Description: Flowing lights alternately ON and OFF in both directions. 
E-mail: wisdom.valley.ka@gmail.com
Date: 01/04/2024 
***********************************************************/
void setup() {
  for (unsigned char ledPin = 1; ledPin <= 8; ledPin++)
    pinMode(ledPin, OUTPUT); // Set pins 1 ~ 8 to output mode
}

void loop() {
  // Left to Right
  for (unsigned char ledPin = 1; ledPin <= 8; ledPin++) {
    digitalWrite(ledPin, HIGH); // Turn LED on
    delay(200);
    digitalWrite(ledPin, LOW); // Turn LED off
    delay(200);
    if (ledPin < 8) {
      ledPin++; // Skip to the next LED
    }
  }

  // Right to Left
  for (unsigned char ledPin = 8; ledPin >= 1; ledPin--) {
    digitalWrite(ledPin, HIGH); // Turn LED on
    delay(200);
    digitalWrite(ledPin, LOW); // Turn LED off
    delay(200);
    if (ledPin > 1) {
      ledPin--; // Skip to the previous LED
    }
  }
}
