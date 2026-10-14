int soilMoistureValue = 0;
int percentage = 0;

void setup() {
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  soilMoistureValue = analogRead(A0);
  percentage = map(soilMoistureValue, 490, 1023, 100, 0); // 100 = wet, 0 = dry
  Serial.println(percentage);

  if (percentage > 80) { // Wet soil, pump ON
    Serial.println("pump ON");
    digitalWrite(3, LOW); // LOW = ON (for typical relay)
  }

  if (percentage < 30) { // Dry soil, pump OFF
    Serial.println("pump OFF");
    digitalWrite(3, HIGH); // HIGH = OFF
  }

  delay(1000); // 1 second delay between readings
}