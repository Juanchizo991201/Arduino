/* FECHA:03/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: comunicación serial envio de caracter
 */

int incomingByte = 0;   // para los datos de entrada Aerie

void setup() {
        Serial.begin(9600);     // abre el puerto Serie, configura los datos a 9600 bps
}

void loop() {

        // finaliza solo cuando se reciben los datos:
        if (Serial.available() > 0) {
                // lee el byte de entrada:
                incomingByte = Serial.read();

                // di lo que tienes:
                Serial.print("Recibido: ");
                Serial.println(incomingByte, DEC);
        }
}
