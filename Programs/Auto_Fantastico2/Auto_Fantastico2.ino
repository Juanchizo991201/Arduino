/* FECHA: 08/04/2020
 * AUTOR: Elias Montenegro Ramos 
 * DESCRIPCIÓN: Practica N°2 Auto Fantástico 
 * Este programa visualiza una secuencia de prendido y apagado de LEDs.
 * Programa Optimizadocon un for.
*/
 
int T = 200;

void setup()
    {
     Serial.begin(9600);
     pinMode (2, OUTPUT);
     pinMode (3, OUTPUT);
     pinMode (4, OUTPUT);
     pinMode (5, OUTPUT);
     pinMode (6, OUTPUT);
    }

void loop()
    {
     for(int i=2; i<=6; i++)
         {
          digitalWrite(i,HIGH);
          delay(T);
          digitalWrite(i,LOW);
         }
     for(int i=5; i>=2; i--)
         {
          digitalWrite(i,HIGH);
          delay(T); 
          digitalWrite(i,LOW);
         }  
    }
