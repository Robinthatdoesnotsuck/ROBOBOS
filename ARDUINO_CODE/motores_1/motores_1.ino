/* Declaración de los puertos digitales que se van a usar
 * Se declaran con una variable entera que se le asigna el valor */

int motor_1 = 3;
int motor_2 = 2;

/*  En el setup se programa el modo en el que se quieren
    usar los pines digitales*/
void setup() {
  // put your setup code here, to run once:
  pinMode(motor_1, OUTPUT);
  pinMode(motor_2, OUTPUT);
}
/*  En el loop se repite constantemente el mismo código
    usualmente se escribe aquí las instrucciones para controlar
    voltaje o el sentido en el que van los motores*/
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motor_1, HIGH);
  digitalWrite(motor_2, HIGH);
  delay(1000);
  digitalWrite(motor_1, LOW);
  digitalWrite(motor_2, LOW);
}
