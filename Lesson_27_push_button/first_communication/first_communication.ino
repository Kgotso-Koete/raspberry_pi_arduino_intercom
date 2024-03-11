#define BUTTON_PIN 7 // wire pin 7 to ground for INPUT PULLUP

unsigned long lastTimeButtonChanged = millis();
unsigned long buttonDebounce = 50;
byte previousButtonState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP); // use Arduino built in pull up resister by SWAPING INPUT for INPUT_PULLUP
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

      // INPUT PULLUP uses inverse states
      if (buttonState == LOW) {
        Serial.println("Button has been pressed");
      }
    }
  }
}
