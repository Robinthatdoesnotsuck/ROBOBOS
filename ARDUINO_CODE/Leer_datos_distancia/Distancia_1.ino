int motorDerecha0 = 6;
int motorDerecha1 = 11;
int pwmDerecha = 5;
int motorIzquierda0 = 7;
int motorIzquierda1 = 8;
int pwmIzquierda= 3;
int ProximidadDerecho;
int ProximidadIzquierdo;
int PisoIzquierdo;
int PisoDerecho;


void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorDerecha0,OUTPUT);
  pinMode(motorDerecha1,OUTPUT);
  pinMode(pwmDerecha, OUTPUT);
  pinMode(motorIzquierda0,OUTPUT);
  pinMode(motorIzquierda1,OUTPUT);
  pinMode(pwmIzquierda, OUTPUT);
}
void atras()
{
digitalWrite(motorDerecha0, HIGH);
digitalWrite(motorDerecha1, LOW);
digitalWrite(pwmDerecha, HIGH);
digitalWrite(motorIzquierda0, HIGH);
digitalWrite(motorIzquierda1, LOW);
digitalWrite(pwmIzquierda, HIGH);
}
void adelante()
{
digitalWrite(motorDerecha0, LOW);
digitalWrite(motorDerecha1, HIGH);
digitalWrite(pwmDerecha, HIGH);
digitalWrite(motorIzquierda0, LOW);
digitalWrite(motorIzquierda1, HIGH);
digitalWrite(pwmIzquierda, HIGH);
}
void detenido()
{
digitalWrite(pwmDerecha, LOW);
digitalWrite(pwmIzquierda, LOW);
}
void giroderecha()
{
digitalWrite(motorDerecha0, LOW);
digitalWrite(motorDerecha1, HIGH);
digitalWrite(pwmDerecha, HIGH);
digitalWrite(motorIzquierda0, HIGH);
digitalWrite(motorIzquierda1, LOW);
digitalWrite(pwmIzquierda, HIGH);
}
void giroizquierda()
{
digitalWrite(motorDerecha0, HIGH);
digitalWrite(motorDerecha1, LOW);
digitalWrite(pwmDerecha, HIGH);
digitalWrite(motorIzquierda0, LOW);
digitalWrite(motorIzquierda1, HIGH);
digitalWrite(pwmIzquierda, HIGH);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  ProximidadDerecho = analogRead(A0);
  ProximidadIzquierdo = analogRead(A1);
  PisoDerecho = analogRead(A2);
  PisoIzquierdo = analogRead(A3);
  //adelante();
    /*if(PisoDerecho > 490 || PisoIzquierdo > 350)
  {
  atras();
  delay(200);
  giroderecha();
  delay(200);
  }*/
  
  giroderecha();
  delay(650);
  detenido();
  delay(1000);
  //Imprimir datos
  Serial.print("Sensor 1: "); 
  Serial.println(ProximidadDerecho);
  Serial.print("Sensor 2: "); 
  Serial.println(ProximidadIzquierdo);
  delay(1000);
}
