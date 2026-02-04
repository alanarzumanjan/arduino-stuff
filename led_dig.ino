const int leds[] = {16, 15, 17, 5, 18, 19, 2, 23, 32};
const int ledCount = sizeof(leds) / sizeof(leds[0]);

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], HIGH);
  }
}

void loop() {
}