void setup() {
  pinMode(7,OUTPUT);
  Serial.begin(115200);
  while(!Serial){

  }
  digitalWrite(7,0);
  delay(1000);
}
  
void loop() {
  
  for(int i = 0; i < 5; i ++){
    delay(100);
    digitalWrite(7,0);
    Serial.println("light");
    delay(100);
    digitalWrite(7,1);
  }
  while(1){}
}
