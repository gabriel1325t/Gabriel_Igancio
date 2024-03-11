/*Declaração das variáveis / 
numéros Reais*/
float salario, novosalario;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000);  //Espera estratégica
}

void loop() {

  Serial.print("Digite o salario: ");  
  while(Serial.available() == 0){
  
  }

  salario = Serial.parseFloat();
  Serial.println(salario);

  novosalario = salario + (salario * 25/100);

  Serial.print("o novo salario");
  Serial.println(novosalario);
  delay(1000);

}
