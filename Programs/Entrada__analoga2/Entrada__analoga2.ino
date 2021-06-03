/*FECHA:24/04/2020
 *AUTOR: Elías Montengro Ramos 
 *DESCRIPCIÓN DEL PROGRAMA: Manejo de señales Analogas
 *conexión de un potenciometroal Arduino.
 */
 
int sensorPin = A0; // pin analogo a usar 
int sensorValor = 0; // variable donde se guardaran los valores
double conver; //variable para conver el valor a voltaje
float K = 0.0049;// Incremoento de voltaje por cada incremento
void setup() 
   {
     Serial.begin (9600); // habilitamos montor seriala 9600
   }

void loop()
   {
    sensorValor =analogRead(sensorPin);// capturamos la lectura en la variable
    Serial.print("Sensor Valor = ");// mandamos mensaje al monitor serial
    Serial.println(sensorValor);
    conver = sensorValor * K;
    Serial.print("Sensor Valor en voltios = ");
    Serial.println(conver);
    Serial.print("Sensor Valor en Binario = ");
    Serial.println(sensorValor,BIN);// visualizacomos los valores capturados binario
    Serial.println(" ");
    delay (2000); // nos demoramos un poco entre lectura y lectura
   }
//Nota : no hay que definir elpuerto A0  como entrada 
// este ya viene definido por default.
