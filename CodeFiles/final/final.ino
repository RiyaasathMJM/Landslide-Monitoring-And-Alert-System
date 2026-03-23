#include <LiquidCrystal.h>
#include <DHT.h>

#define DHTPIN 2        // PD2
#define DHTTYPE DHT11

#define SOIL_PIN A0     // PC0
#define VIB_PIN  3      // PD3

LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.begin(16, 2);
  dht.begin();

  pinMode(VIB_PIN, INPUT_PULLUP);

  lcd.setCursor(0, 0);
  lcd.print("Agri Monitor");
  delay(1500);
  lcd.clear();
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  int soil = analogRead(SOIL_PIN);
  int vib = digitalRead(VIB_PIN);

  // Line 1: Temp & Humidity
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(t, 0);
  lcd.print("C ");

  lcd.print("H:");
  lcd.print(h, 0);
  lcd.print("% ");

  // Line 2: Soil & Vibration
  lcd.setCursor(0, 1);
  lcd.print("Soil:");
  lcd.print(soil);

  if (vib == LOW) {
    lcd.print(" Vib!");
  } else {
    lcd.print("     ");
  }

  delay(2000);
}
