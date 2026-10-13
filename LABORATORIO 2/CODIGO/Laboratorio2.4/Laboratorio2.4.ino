int pinLED = 3;

void setup() {
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Sube el brillo de 0 a 255
  for (int brillo = 0; brillo <= 255; brillo++) {
    analogWrite(pinLED, brillo);
    Serial.println(brillo);
    delay(10);
  }

  // Baja el brillo de 255 a 0
  for (int brillo = 255; brillo >= 0; brillo--) {
    analogWrite(pinLED, brillo);
    Serial.println(brillo);
    delay(10);
  }
}