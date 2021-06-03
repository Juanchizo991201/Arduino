/* FECHA: 14/04/2020
 * AUTOR: Elias Montengro Ramos 
 * DESCRIPCIÓN DEL PROGRAMA: Programa cntador de pulsos 
 * cuando llega a 5 enciende un LED coando llega a 8 apaga
 * el LED abre el programa monitor.
 */
int conta =0;

void setup() 
   {
     Serial.begin(9600);
     pinMode(2, INPUT);
     pinMode(13, OUTPUT);
   }

void loop()
   {
    if (digitalRead(2) == HIGH) //HardWare anclado a PullDown.
       {
        delay(100);
        if (digitalRead(2) == LOW)
           {
            conta ++;
            Serial.println(conta);
            delay(100);
           }
       }
    if(conta == 5)
       {
        digitalWrite(13, HIGH);
       }

    if (conta == 8)
       {
        digitalWrite(13, LOW);
        conta = 0;
       }
   }
   
