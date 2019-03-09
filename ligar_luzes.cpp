int VERMELHO = 8;
int AMARELO = 7;
int PINO = 3;
bool estadoBotao = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(PINO, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 /* digitalWrite(VERMELHO, HIGH);
  delay(250);
  digitalWrite(AMARELO, HIGH);
  delay(250);
  digitalWrite(VERMELHO, LOW);
  delay(250);
  digitalWrite(AMARELO, LOW);
  delay(250);*/
  estadoBotao ? digitalWrite(VERMELHO, HIGH) : digitalWrite(VERMELHO, LOW);
  
  if (digitalRead(PINO) == HIGH && !estadoBotao) estadoBotao = true;
  if (digitalRead(PINO) == HIGH && estadoBotao) estadoBotao = false;
}
