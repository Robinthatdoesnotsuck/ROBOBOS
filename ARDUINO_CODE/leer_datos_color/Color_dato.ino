/*--------------------------------Inicio del código--------------------------------*/
int runled = 13; //Alias para pin 13
int led0 = 9; //Alias para pin 9
int led1 = 10; //Alias para pin 10
int PisoDerecho; 
int PisoIzquierdo;
void setup()
{
//Configuración de entradas y salidas
pinMode(runled, OUTPUT); //Salida digital en runled = pin 13
pinMode(led0, OUTPUT); //Salida digital en led0 = pin 9
pinMode(led1, OUTPUT); //Salida digital en led1 = pin 10
//Configuración de módulos
Serial.begin(9600); //Configuración de baudrate
}
void loop()
{
//Código que se repetirá infititamente
PisoDerecho = analogRead(A2); //Lectura analógico del sensor derecho
PisoIzquierdo = analogRead(A3); //Lectura analógica del sensor izquierdo
Serial.print("Sensor de piso derecho: "); //Impresión de leyenda (texto)
Serial.println(PisoDerecho); //Imprime el valor obtenido en la lectura
Serial.print("Sensor de piso izquierdo: "); //Impresión de leyenda (texto)
Serial.println(PisoIzquierdo); //Imprime el valor obtenido en la lectura
delay(1000);
}
/*--------------------------------Fin del código--------------------------------*/
