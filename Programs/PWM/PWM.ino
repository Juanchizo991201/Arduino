/*FECHA: 14/04/2020
 *AUTOR: Elías Montengro Ramos
 *DESCRIPCIÓN DEL PROGRAMA: Modulación del Brillo de unLED por Amplitud de Pulso PWM.
*/
int LED = 5;
int Brillo = 0;
int Aumento = 5;

void setup()
   {
    Serial.begin(9600); // Inicio puerto serial a 9600.
     pinMode(LED, OUTPUT);
   }

void loop()
   {
     analogWrite(LED, Brillo); // Parametros puerto (5~), un numero entre 0 y 255. 
     Serial.println (Brillo); // Se visualiza en el programa monitor.
     delay(1000);
     Brillo = Brillo + Aumento;
     if (Brillo == 0 || Brillo == 255)// si Brillo esta entre 0 y 255.
        {
          Aumento = -Aumento; //Aument va hasta 255 y luego empieza a disminuir hasta 0.
        }
     delay(30);
   }
