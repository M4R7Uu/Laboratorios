int pinLED = 3;
int pinPOT = A0;

void setup() {
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);              // Inicia la comunicación serial
}

void loop() {
  int valor = analogRead(pinPOT);              // 0 a 1023
  int PWM = map(valor, 0, 1023, 0, 255);       // 0 a 255
  int porcentaje = map(valor, 0, 1023, 0, 100);

  analogWrite(pinLED, PWM);

  Serial.print("Lectura: ");
  Serial.print(valor);
  Serial.print(" | PWM: ");
  Serial.print(PWM);
  Serial.print(" | Brillo: ");
  Serial.print(porcentaje);
  Serial.println("%");

  delay(100);                      // Más pausa para poder leer el monitor
}