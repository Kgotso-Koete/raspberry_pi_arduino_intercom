#define BUZZER_PIN 8

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN, OUTPUT); 
  tone(BUZZER_PIN, 200,2000); 
}

void loop() {
  // put your main code here, to run repeatedly:
}
