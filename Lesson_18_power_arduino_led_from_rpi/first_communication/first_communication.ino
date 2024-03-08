#define LED_PIN 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while(!Serial){}
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    String cmd = Serial.readStringUntil('\n');
    
    if(cmd == "on"){
      digitalWrite(LED_PIN, HIGH);
    }
    
    else if(cmd == "off"){
      digitalWrite(LED_PIN, LOW);
    }
    else{
      // do nothing
    }
  }
}
