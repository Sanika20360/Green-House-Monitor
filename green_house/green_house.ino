#include <SimpleDHT.h>
// for DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
int pinDHT11 = 13;
SimpleDHT11 dht11(pinDHT11);
int count=0;
int valc=0;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  count++;
  valc=count*10;
  Serial.print("Temp="+String(tempature));
  Serial.print("#HUM="+String(humidity));
  if(digitalRead(13)==1)
  {
  Serial.print("#LED ON");
  }else
  {
  Serial.print("#LED OFF");
  }
  Serial.println();
  delay(3000);
  
  Serial.print("++++++++++++++++++++++++++++++++++");
  Serial.println("Sample DHT11...");
  
  byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
   delay(1000);
    return;
  }
  
  Serial.print("Sample OK: ");
  Serial.print((int)temperature); 
  Serial.print(" *C, "); 
  Serial.print((int)humidity); 
  Serial.println(" H");
  Serial.print("Read DHT11 failed, err=");
  Serial.print(SimpleDHTErrCode(err));
    Serial.print(",");
    Serial.println(SimpleDHTErrDuration(err));
  delay(1500);
}

void serialEvent() {
  while (Serial.available()) {

   char inChar = (char)Serial.read();
    
   if (inChar == 'A') {
        digitalWrite(13, HIGH);
    }
    
   if (inChar == 'B') {
          digitalWrite(13, LOW);
    }
  }
}
