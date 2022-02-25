void setup(){
  Serial.begin(115200);
  Serial.println("Start Receive");
}

void loop(){
  while(Serial.available()){
    char data = Serial.read();
    Serial.println(data);
  }  
}
