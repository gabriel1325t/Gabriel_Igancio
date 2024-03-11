  /*Declaração das variáveis / 
numéros Reais*/
float sal,Novosal Numerico

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000);  //Espera estratégica

}



void loop() {

  Serial.print("Digite a nota 1: ");
  // Lê o valor do serial e guarda na variável nota1
  nota1 = aguardaEntradaNumerica();
  Serial.println(sal);

  Serial.print("Digite a nota 2: ");
  nota2 = aguardaEntradaNumerica();
  Serial.println(Novosal);

}

  //Cálculo da média ponderada:
  Novosal= sal + sal * 25/100

  //Exibe o valor da média calculada
  Serial.print("Media ponderada: ");
  Serial.println(Novosal, 1);
  delay(1000);
}

//criando uma função chamada
float aguardaEntradaNumerica() {
  while (!Serial.available()) {
    //Aguarda até que um valor seja digitado
  }

  //Verifica se a entrada é numérica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != ".") {
    //descarta a entrada não numerica
    Serial.read();
    while (Serial.available() == 0) {
      //Aguarda a nova entrada do usuario
    }
  }

  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}