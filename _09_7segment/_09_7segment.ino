#include <LiquidCrystal.h>

int trig = 7;
int echo = 6;

long timeInMicro;
long distanceInCm;

// Initialize the LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD pins connected to Arduino

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  timeInMicro = pulseIn(echo, HIGH);
  distanceInCm = ((timeInMicro / 29) / 2);
  
  Serial.println(distanceInCm);
  
  // Clear the LCD
  lcd.clear();
  
  // Print the distance on LCD
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(distanceInCm);
  lcd.print(" cm");
  
  delay(100);
}
