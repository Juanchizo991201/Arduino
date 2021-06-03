/*FECHA:24/04/2020
 *AUTOR: Elías Montengro Ramos 
 *DESCRIPCIÓN DEL PROGRAMA: Manejo de señales Analogas
 *conexión de un piezoelectrico al Arduino salida parlante.
 */
int speaker = 8; //puerto de salida sonido 
int sensorPin = A0; // pin analogo a usar 
int sensorValor = 0; // variable donde se guardaran los valores
int referencia = 200; // Valor de referencia
int toneDuracion = 40;
int toneFrecuencia = 262;
void setup() 
   {
     Serial.begin (9600); // habilitamos montor seriala 9600
   }

void loop()
   {
    sensorValor =analogRead(sensorPin);// capturamos la lectura en la variable
    if(sensorValor > referencia)
       {
       tone(speaker, toneFrecuencia, toneDuracion);
       Serial.print("Sensor = ");// mandamos mensaje al monitor serial
       Serial.println(sensorValor,DEC);// visualizacomos los valores capturados
       }
   }
//Nota : no hay que definir elpuerto A0  como entrada 
// este ya viene definido por default.
