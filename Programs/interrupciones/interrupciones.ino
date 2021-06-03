/*FECHA: 22/04/2020
 *AUTOR: Elias Montenegro Ramos  
 *DESCRIPCIÓN DEL PROGRAMA: Programa que describe el uso de una unterrupción
 *volatile int estado = LOW; Ejecuta la interrupción desde laRAM es mas rapido
 *attachInterrupt(digitalPinToInterrupt(pin), función, tipo de Cambio);
 */
int pulsador = 2; //Entrada de interrupciones 0
int LED = 4;
volatile int estado = LOW;// volatile se ejecuta en la RAM.

void setup()
   { 
    Serial.begin(9600);
    pinMode(pulsador, INPUT);
    pinMode(LED, OUTPUT);
    attachInterrupt(digitalPinToInterrupt(pulsador), cambio_estado, CHANGE);
    // arriba - instrucción de la intrupción. 
   }

void loop()
   {
    estado = digitalRead(pulsador);
    digitalWrite(LED, estado);
    Serial.println("Estoy Leyendo el estado del pulsdaor");
    for(int i=0; i<50; i++)
       {
        delay(10);
       }
 }
void cambio_estado()
   {
    Serial.println("Me interrupieron chao!!!CONTINUO!!!");
    estado = !estado;
    digitalWrite(LED, estado);   
   }
  /*Nota: El pulsador lo fijamos con PullDown se puede fijar
   *con las resistencias internas del Arduino.
   *pinMode(pulsador,INPUT_PULLUP);
   */
