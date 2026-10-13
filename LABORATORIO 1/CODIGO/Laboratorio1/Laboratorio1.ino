int PULSADOR = 2;
int LED = 3;
int estado = LOW;   // recuerda si el LED está encendido o apagado

void setup() {
  pinMode(PULSADOR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (digitalRead(PULSADOR) == HIGH) {
    estado = !estado;               // invierte el estado
    digitalWrite(LED, estado);
    while (digitalRead(PULSADOR) == HIGH) { }   // espera a que sueltes el botón
  }
}