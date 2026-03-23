#include <DHT.h>

#define DHTPIN 2        // PD2
#define DHTTYPE DHT11

#define SOIL_PIN A0     // PC0
#define VIB_PIN  3      // PD3

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);   // Start serial communication
  dht.begin();

  pinMode(VIB_PIN, INPUT_PULLUP);

  Serial.println("Agri Monitor System Starting...");
  delay(1500);
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  int soil = analogRead(SOIL_PIN);
  int vib = digitalRead(VIB_PIN);

  // Print Temperature & Humidity
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" °C | ");

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" % | ");

  // Print Soil Moisture
  Serial.print("Soil: ");
  Serial.print(soil);
  Serial.print(" | ");

  // Print Vibration Status
  if (vib == LOW) {
    Serial.println("Vibration Detected!");
  } else {
    Serial.println("No Vibration");
  }

  delay(2000);
}