#include <DHT11.h>

// Declaración de variables
float tempC,humC;
int tempPin = 0; // Definimos la entrada en pin A0
DHT11 dht11 (tempPin);
int error;
//error = dht11.read(tempC,humC);


void setup()
{
    // Abre puerto serial y lo configura a 9600 bps
    Serial.begin(9600);
}
void loop()
{
    // Lee el valor desde el sensor
    //tempC = analogRead(tempPin); 
    //humC = analogRead(tempPin);
    error = dht11.read(tempC,humC);

    // Convierte el valor a temperatura
    //tempC = (5.0 * tempC * 100.0)/1024.0; 

    // Envia el dato al puerto serial
    Serial.print(error);
    Serial.print(" grados Celsius\n");

    // Espera cinco segundo para repetir el loop
    delay(5000);
}
