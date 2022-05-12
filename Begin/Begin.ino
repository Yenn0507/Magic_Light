#include <FastLED.h>

#define NUM_LEDS 12     //whitch is leds number.
#define DATA_PIN D2     //the led data signal is on D2 pin.
#define BRIGHTNESS 64   //set the max brightness of leds. (0-255)
#define BUTTON_PIN D4   //the button is connect with D4 pin.     

CRGB leds[NUM_LEDS];    //use CRGB to make an arry, named "leds".

void setup() 
{
  FastLED.addLeds <NEOPIXEL, DATA_PIN> (leds, NUM_LEDS);
  FastLED.setBrightness (BRIGHTNESS);
  pinMode(BUTTON_PIN, INPUT);    //set the BUTTON_PIN is an-input-pin.

  FastLED.clear();      //Reset all the LEDS.
  FastLED.show();       //FastLED.show() will show the changes.
  delay(250);
}

void loop() 
{
  leds[0]=CRGB::Red;   //leds[i] i is the light postion. 
/**There is more colors: Red, Blue, Greeen, Yellow, Purple, Aqua, White, and Black.**/
  fill_solid(leds, NUM_LEDS, CRGB(0,22,75));
  FastLED.show();
  delay(500);
  fill_solid(leds, NUM_LEDS, CRGB(0,0,0));
  FastLED.show();
  delay(500);
}
