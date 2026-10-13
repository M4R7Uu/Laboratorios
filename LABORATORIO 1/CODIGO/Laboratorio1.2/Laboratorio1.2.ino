int PULSADOR = 2;
int LED = 3;
int estado = LOW;

void setup() {
  pinMode(PULSADOR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  while (digitalRead(PULSADOR) == LOW) { }    // 1: espera a que presionen
  delay(20);                                   // deja pasar el rebote al presionar

  estado = !estado;
  digitalWrite(LED, estado);

  while (digitalRead(PULSADOR) == HIGH) { }   // 2: espera a que suelten
  delay(20);                                   // deja pasar el rebote al soltar
}