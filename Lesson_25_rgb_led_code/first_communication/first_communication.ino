#define RGB_RED_PIN 11
#define RGB_GREEN_PIN 10
#define RGB_BLUE_PIN 9

void setup() {
  // put your setup code here, to run once:
  pinMode(RGB_RED_PIN, OUTPUT);
  pinMode(RGB_GREEN_PIN, OUTPUT);
  pinMode(RGB_BLUE_PIN, OUTPUT);

  //digitalWrite(RGB_RED_PIN, LOW); // pin off
  //digitalWrite(RGB_GREEN_PIN, HIGH); // pin on
  //digitalWrite(RGB_BLUE_PIN, HIGH); // pin on

  analogWrite(RGB_RED_PIN, 180); 
  analogWrite(RGB_GREEN_PIN, 0); 
  analogWrite(RGB_BLUE_PIN, 200); 
}

void loop() {
  // put your main code here, to run repeatedly:
}
