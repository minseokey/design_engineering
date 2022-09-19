#define PIN_LED 13
unsigned int count, toggle;

unsigned int toggle_state(unsigned int count){
  toggle = count % 2;
  return toggle;
}

void setup() {
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200);
  while(!Serial){

  }
  Serial.println("Hello World");
  count = 0;
  toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(count);
  digitalWrite(PIN_LED,toggle);
  delay(1000); 
}
