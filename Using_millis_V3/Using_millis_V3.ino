#define red_led 4
#define yellow_led 5
#define green_led 18

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

void setup() {
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);

  redlight(); //Starting with red light

}

unsigned long previousMillis=0; //Keeps track of when last light change happened

int currentState=0; //0=Red, 1=Green, 2=Yellow

unsigned long interval=5000;

void loop() {
  unsigned long currentMillis=millis();
  if(currentMillis-previousMillis>=interval)
  {
    previousMillis=currentMillis;
    switch(currentState)
    {
      case 0:
      {
        greenlight();
        currentState=1;
        break;
      }

      case 1:
      {
        yellowlight();
        currentState=2;
        interval=2000;
        break;
      }

      case 2:
      {
        redlight();
        currentState=0;
        interval=5000;
        break;
      }
    }
  }
}

