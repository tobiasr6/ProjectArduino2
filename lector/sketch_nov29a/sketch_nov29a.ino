//#include <ArduinoJson.h>

void setup() {
  
  Serial.begin(115200);
  
}

void loop() {
  
  int lectura = analogRead(A0);

  lectura =  map(lectura, 1023, 0, 0, 100);

  Serial.print("La lectura es:");
  Serial.println(lectura);
  
  delay(1500);
}
