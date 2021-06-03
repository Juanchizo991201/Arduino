/*FECHA: 20/04/2020
 *AUTOR:Elias Montenegro Ramos
 *DESCRIPCIÓN DEL PROGRAMA:Generamos por el pin 3 PWM para generar 
 *Diferentes tonos.
 */

void setup()
   {
    int pinOut =3;
    int freq =110;
    int duracion = 1000;
    for(int i=0; i<40; i++)
       {
       tone(pinOut, freq*i, duracion);
       int pausaEntreNotas =duracion * 1.30;
       delay(pausaEntreNotas);
       noTone(3);
       }
   }

void loop()
{
  
}
