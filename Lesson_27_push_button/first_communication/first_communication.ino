#define BUTTON_PIN 7

unsigned long lastTimeButtonChanged = millis();
unsigned long buttonDebounce = 50;
byte previousButtonState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT);
  previousButtonState = digitalRead(BUTTON_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long timeNow = millis();

  if ((timeNow - lastTimeButtonChanged) >= buttonDebounce) {
    byte buttonState = digitalRead(BUTTON_PIN);

    if (buttonState != previousButtonState) {

      lastTimeButtonChanged = timeNow;
      previousButtonState = buttonState;

      if (buttonState == HIGH) {
        Serial.println("Button has been pressed");
      }
    }
  }
}
