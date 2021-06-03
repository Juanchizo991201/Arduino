/*FECHA: 21/04/2020
 * AUTOR: Elias Montenegro Ramos
 * DESCRIPCION DEL PROGRAMA:Prueba de nterupciones Pin 2 
 * sin usar _interrupciones.
 */
int pulsador = 2;

volatile int estado = LOW; // SeEjecuta desde la RAM con Volatile 


void setup()
   { 
    Serial.begin(9600);
    pinMode(pulsador, INPUT);
    attachInterrupt(digitalPinToInterrupt(pulsador), tarea, CHANGE);
    //La estructura de la instrucción para ejecutar la interupción 
   }

void loop()
   {
    estado = digitalRead(pulsador);
    Serial.println(estado);
   }
   void tarea()
   {
    for(int i= 0; i<50; i++)
       {
         Serial.println("Me interrupieron chao!!!CONTINUO!!!");
         delay(100);
       }
     }
     //Nota: El switche lo fijamos a Pull Down
