
// Including the package of the sensor
#include <DHT.h>
DHT dht(17,DHT22);

void setup() {
  // begin to measure
  dht.begin();
  //delay(1000);
  Serial.begin(9600);
}

void loop() {
// defining two variables
// the first one is for temperature
// and the second is for hummidity
float Temp_value=dht.readTemperature();
float Humidity_value=dht.readHumidity();

// outputing by printing the results 
// on the serial monitor in the IDE
// temperature is measured with C 
Serial.print("TEMP : ");
Serial.print(Temp_value);
Serial.print(" C ");
// hummidity is measured in percentage %
Serial.print("___ HUMIDITY : ");
Serial.print(Humidity_value);
Serial.print(" % ");
Serial.println("");
// giving some delay between two records
delay(1000);

}
