/*FECHA:27/04/2020
 *AUTOR: Elías Montenegro Ramos
 *DESCRIPCIÓN DEL PROGRAMA: Ejemplo del funcionamiento de un LDR 
 *(Resistencia dependiente de Luz)
 *El rango del LDR es de 0 a 700 y lo queremos convertir a porcentaje % de 0 a100
*/
int in_pin = A0; //Entrada del pin del sensor por A0,
int lectura;     // Variable en la cual se van a capturar los datos
int porcentaje;  // variable en la cual se guardaran los valores en porcentaje 

void setup() 
   {
    Serial.begin(9600);
   }

void loop()
   {
    lectura = analogRead(in_pin);
    porcentaje = map(lectura, 0, 700, 0, 100);
    Serial.print ("Lectura del LDR segun su escala = ");
    Serial.print (lectura);
    Serial.print (" Valor en porcentaje = ");
    Serial.print (porcentaje);
    Serial.print (" % ");
    Serial.println ();
    delay (100);
   }
   
   
   
    
