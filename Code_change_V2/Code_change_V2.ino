#define red_led 4
#define yellow_led 5
#define green_led 18
void setup() {
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);

}

void redlight()
{
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, LOW);
  digitalWrite(yellow_led, LOW);
}

void greenlight()
{
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, HIGH);
  digitalWrite(yellow_led, LOW);
}

void yellowlight()
{
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, LOW);
  digitalWrite(yellow_led, HIGH);
}

void loop() {
  redlight();
  delay(5000);

  greenlight();
  delay(5000);

  yellowlight();
  delay(2000);
}

