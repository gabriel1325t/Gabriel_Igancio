//Declaração de uma constante que armazena o pino do push button*/
#define pinoButton 8

//Declaração das variáveis que representa o pino do led
int ledVermelho = 9;
bool status = false;


void setup() {
  //Definir a modalidade do pino
  pinMode(pinoButton, INPUT);

  Serial.begin(9600);

  delay(1000);  //parada estratégica

  //Definindo os tipos do pino
  pinMode(ledVermelho, OUTPUT);

  delay(1000);  //parada estratégica
}
void loop() {
  //lendo o pino digital através da constante
  Serial.println(digitalRead(pinoButton));
  if (digitalRead(pinoButton) == HIGH && status == false) {
    Serial.print("led e botão ligados");
    digitalWrite(ledVermelho, 1);
    status = true;
    delay(1000);
  } else if (digitalRead(pinoButton) == HIGH && status == true) {
    Serial.print("led e botão apagados");
    digitalWrite(ledVermelho, 0);
    status = false;
    delay(1000);
  }

}
