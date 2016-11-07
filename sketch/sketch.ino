#include "FastLED.h"

#define GREEN     0x000000ff
#define RED       0x0000ff00
#define YELLOW    0x0000ffff
#define ORANGE    0x0000ff88
#define BLUE      0x00ff0000
#define WHITE     0xff000000

#define NUM_LEDS 170
uint32_t leds[NUM_LEDS];

void setup() { FastLED.addLeds<SK6812, 6, RGB>((CRGB*)leds, NUM_LEDS*4/3); }
void loop() {
    for(int i = 0; i < NUM_LEDS; i++){
      if(i%10 == 9){
        leds[i] = BLUE;
      }else{
        leds[i] = YELLOW;
      }
    }
    FastLED.show(); 
    delay(100000);
}


