/*FECHA:27/04/2020
 *AUTOR:Elias Montengro Ramos
 *DESCRIPCIÓN DEL PROGRAMA:Función MAP() 
 *Parametros de la función map(Variable analoga a ser convertida, 
 *valor minimo de la variable analoga, valor maximo de la variable analoga,
 *valor minimo del rango de porcentaje, valor maximo del rango de porecentaje);
 *para el caso de un potennciometro conectado directamente a la entrada analoga A0
 *los valores que podemos obtener con entre 0 y 1023 - (10 bits) y la salida
 *la queremos expresar en porcentaje de 0% al 100% por lo tanto la funcion quedaria 
 *agregando linea de lectura seria:
 *lectura = analogRead(entrada_pin); 
 *porcentaje = map(lectura, 0, 1023, 0, 100);
 *de esta forma y casi por una regle de tres convertimos los valores de la variable 
 *en valores de porcentaje.
 *podemos crear nuestras propias escalas de acuerdo al sensor.
*/
 int entrada_pin = A0;
 int lectura;
 int valor_in;
 int porcentaje;
     
 void setup()
    {
     Serial.begin(9600); 
    }

void loop()
   {
    lectura = analogRead(entrada_pin);
    porcentaje = map(lectura, 0, 1023, 0, 100);
    Serial.print (" Valor lectura pin de entrada = ");
    Serial.print (lectura);
    Serial.print (" Valor lectura en porcentaje = ");
    Serial.print (porcentaje);
    Serial.print (" % ");
    Serial.println();
    delay (1000);
   }
