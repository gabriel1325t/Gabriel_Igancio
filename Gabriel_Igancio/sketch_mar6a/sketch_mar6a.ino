//definição das constantes: pinos de entrada

#define pinoBuzzer 2


//leds
#define pinoDo 3
#define pinoRe 4

byte doh, re, mi, fa, so, la, si = 0;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // Leitura dos botoes armazenada nas váriavaes de controle
  doh = digitalRead(pinoDo);
  re = digitalRead(pinoRe);
  
}
