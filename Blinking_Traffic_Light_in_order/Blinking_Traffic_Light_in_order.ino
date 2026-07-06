#define green_led 18
#define red_led 4
#define yellow_led 5

void setup() {
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
}

void loop() {
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, LOW);
  digitalWrite(yellow_led, LOW);
  delay(5000);

  digitalWrite(red_led, LOW);
  digitalWrite(green_led, HIGH);
  digitalWrite(yellow_led, LOW);
  delay(5000);

  digitalWrite(red_led, LOW);
  digitalWrite(green_led, LOW);
  digitalWrite(yellow_led, HIGH);
  delay(2000);
}
