int runled = 13; //Alias para pin 13
int led0 = 9; //Alias para pin 9
int led1 = 10; //Alias para pin 10
int motorDerecha0 = 6;
int motorDerecha1 = 11;
int pwmDerecha = 5;
int motorIzquierda0 = 7;
int motorIzquierda1 = 8;
int pwmIzquierda= 3;
int ProximidadDerecho;
int ProximidadIzquierdo;
int PisoDerecho;
int PisoIzquierdo;
//Funciones
void adelante();
void atras();
void detenido();
void giroderecha();
void giroizquierda();
void setup()
{
//Configuración de entradas y salidas
pinMode(runled, OUTPUT); //Salida digital en runled = pin 13
pinMode(led0, OUTPUT); //Salida digital en led0 = pin 9
pinMode(led1, OUTPUT); //Salida digital en led1 = pin 10
pinMode(motorDerecha0,OUTPUT);
pinMode(motorDerecha1,OUTPUT);
pinMode(pwmDerecha, OUTPUT);
pinMode(motorIzquierda0,OUTPUT);
pinMode(motorIzquierda1,OUTPUT);
pinMode(pwmIzquierda, OUTPUT);
//Configuración de módulos
giroderecha();
}
void loop()
{
//Código que se repetirá infititamente
ProximidadDerecho = analogRead(A0);
ProximidadIzquierdo = analogRead(A1);
PisoDerecho = analogRead(A2);
PisoIzquierdo = analogRead(A3);
//Condición principal
//if(PisoDerecho > 512 || PisoIzquierdo > 512)
//{
//atras();
//delay(200);
//giroderecha();
//delay(200);
//}
if(ProximidadDerecho > 350 && ProximidadIzquierdo > 300)
{
adelante();
}
if(ProximidadDerecho < 350 && ProximidadIzquierdo > 300)
{
giroizquierda();
}
if(ProximidadDerecho > 350 && ProximidadIzquierdo < 300)
{
giroderecha();
}
}
void adelante()
{
digitalWrite(motorDerecha0, HIGH);
digitalWrite(motorDerecha1, LOW);
digitalWrite(pwmDerecha, HIGH);
digitalWrite(motorIzquierda0, HIGH);
digitalWrite(motorIzquierda1, LOW);
digitalWrite(pwmIzquierda, HIGH);
}
void atras()
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
