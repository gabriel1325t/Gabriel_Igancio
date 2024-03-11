//Contante para o pino da buzzer
#define pinoBuzzer 2

#define pinoLedVermelho 3

#define pinoButton 8
bool status = false;

void setup() {
  Serial.begin(9600);


  //modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoButton, INPUT);
  pinMode(pinoLedVermelho, OUTPUT);
}

void loop() {
  if (digitalRead(pinoButton) == 1) {
    tone(pinoBuzzer, 523);
    delay(1000);
    if (digitalRead(pinoButton) == 0) {
      
      if (digitalRead(pinoButton) == 1)
tone(pinoBuzzer, 100);

        digitalWrite(pinoLedVermelho, HIGH);
  }

  else if (digitalRead(pinoButton) == 0) {
    noTone(pinoBuzzer);                  //deliga o buzzer
    digitalWrite(pinoLedVermelho, LOW);  //apaga o Led
  }

}