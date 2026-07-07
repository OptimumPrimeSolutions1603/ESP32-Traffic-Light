#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

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

  //OLED initialisation
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    while (true);
  }

  display.clearDisplay();
  display.display();

  redlight(); //Starting with red light

}

unsigned long previousMillis=0; //Keeps track of when last light change happened

int currentState=0; //0=Red, 1=Green, 2=Yellow

unsigned long interval=5000;

void updateDisplay()
{
  unsigned long elapsed =millis()-previousMillis;
  unsigned long remaining=(interval-elapsed)/1000+1;

  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);

  switch(currentState)
  {
    case 0:
      display.setCursor(40, 5);
      display.println("RED");
      break;
    
    case 1:
      display.setCursor(30, 5);
      display.println("GREEN");
      break;

    case 2:
      display.setCursor(25, 5);
      display.println("YELLOW");
      break;
  }

  display.setTextSize(4);
  display.setCursor(50, 30);
  display.println(remaining);
  display.display();
}


void loop() {
  unsigned long currentMillis=millis();

  updateDisplay();
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


