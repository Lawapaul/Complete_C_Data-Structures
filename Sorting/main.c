#include <DHT.h>
#include <Servo.h>

#define DHTPIN 9
#define DHTTYPE DHT11
#define LDR_PIN A0
#define SERVO_PIN 12
#define LIGHT_PIN 8

DHT dht(DHTPIN, DHTTYPE);
Servo myServo;

unsigned long ventStart = 0;
bool ventOpen = false;

void setup() {
  Serial.begin(9600);
  dht.begin();
  myServo.attach(SERVO_PIN);
  pinMode(LIGHT_PIN, OUTPUT);
  myServo.write(0); // vent closed initially
}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  // --- Temperature Control ---
  if (temp > 35 && !ventOpen) {
    myServo.write(90);          // open vent
    ventStart = millis();       // start timing
    ventOpen = true;
  }

  if (ventOpen && millis() - ventStart >= 600000) { // 10 min
    myServo.write(0);   // close vent
    ventOpen = false;
  }

  // --- LDR Light Measurement ---
  int adcVal = analogRead(LDR_PIN);
  float voltage = adcVal * (5.0 / 1023.0);
  float lux = voltage / 0.01;  // 10mV per lux

  if (lux < 200) {
    digitalWrite(LIGHT_PIN, HIGH); // turn on supplemental light
  } else {
    digitalWrite(LIGHT_PIN, LOW);
  }

  // --- Serial Output ---
  Serial.print("Temp: "); Serial.print(temp); Serial.print(" °C, ");
  Serial.print("Humidity: "); Serial.print(humidity); Serial.print(" %, ");
  Serial.print("Light: "); Serial.print(lux); Serial.print(" lux, ");
  Serial.print("Vent: "); Serial.println(ventOpen ? "OPEN" : "CLOSED");

  delay(1000);
}