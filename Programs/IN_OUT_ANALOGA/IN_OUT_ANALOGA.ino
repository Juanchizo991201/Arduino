/*FECHA:16/04/2020
 *AUTOR: Elias Montengro Ramos
 *DESCRIPCIÓN DELPROGRAMA: Entrada y salida Analogas de Arduino.
*/
const int LED =3;
int POT;
int Brillo;

void setup()
   {
     pinMode(LED, OUTPUT);
     // No se programa las Entradas 0  Analogas, Estan por Default.
   }

void loop()
   { 
    Brillo = analogRead(POT)/4; //los valores están entre 0 y 1024
                                // Por tal razon se igualan.
             analogWrite(LED, Brillo);
   }
 Nota: sacamos los 5 Vol y la tierra GND del mismo Arduino.
       El Potencionetro se conecta pines GND,SALIDA, 5Vol - 1K.
