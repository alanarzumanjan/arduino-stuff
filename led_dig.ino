const int leds[] = {16, 15, 17, 5, 18, 19, 21, 22, 23, 0, 32,33,26,25,27,14,12,13};
const int ledCount = sizeof(leds) / sizeof(leds[0]);

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], HIGH);
  }
}

void loop() {
}
