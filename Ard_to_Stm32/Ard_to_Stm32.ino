char Sendmessage = 'A';

void setup(){
  Serial.begin(115200);
  Serial.println("Start Send");
}

void loop(){

    Serial.println(Sendmessage);     
    while(Serial.available()){
      char data = Serial.read();
      Serial.print("수신: ");
      Serial.println(data);    
    }
    delay(1000);
}
