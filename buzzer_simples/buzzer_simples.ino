//Contante para o pino da buzzer
#define pinoBuzzer 2

#define pinoLedVermelho 3


void setup() {
  Serial.begin(9600);


  //modo do pino]
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  delay(1000);  //parada estratégica
}

void loop() {
  tone(pinoBuzzer, 523); //noa musical dó
  digitalWrite(pinoLedVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer); //deliga o buzzer
  digitalWrite(pinoLedVermelho, LOW); //apaga o Led
  delay(1000);
}
