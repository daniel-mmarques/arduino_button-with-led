#define led 2
#define botao 11

int pressionado;

void setup() {

  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
  
}

void loop() {
  
  pressionado = digitalRead(botao);

  if(pressionado == HIGH){

    digitalWrite(led,HIGH);
    
  } else {

    digitalWrite(led,LOW);
 
  }
}
