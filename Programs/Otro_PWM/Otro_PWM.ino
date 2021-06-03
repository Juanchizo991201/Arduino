
/*FECHA: 16/04/2020
 *AUTOR: Elías Montenegro Ramos
 *DESCRIPCIÓN DEL PROGRAMA: PMW con un LED salida por el pin Analogo númerto 3 del Arduino
 */
const int LED = 3; //Declaramos una Constante Entera Llamada LED.
int Brillo = 0; //Declaramos una variable entera llamada Brillo.

void setup()
   {
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
   }

void loop() 
   { 
    for(Brillo = 0; Brillo < 256; Brillo++)
    {
      analogWrite(LED, Brillo);
      delay(100);
      Serial.println(Brillo);
    }
    for(Brillo = 255; Brillo > 0; Brillo--)
    {
      analogWrite(LED, Brillo);
      delay(100);
      Serial.println(Brillo);
    }
   }
