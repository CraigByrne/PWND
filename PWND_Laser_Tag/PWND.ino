#include <Adafruit_NeoPixel.h>

#define PIN_NEO_PIXEL  5   // Arduino pin that connects to NeoPixel
#define NUM_PIXELS     8

int led = 26;
int kart = 16;

Adafruit_NeoPixel NeoPixel(NUM_PIXELS, PIN_NEO_PIXEL, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  NeoPixel.begin();
  pinMode(kart, OUTPUT);
  NeoPixel.clear();
}

void loop() {
  NeoPixel.setPixelColor(0, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(1, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(2, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(3, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(4, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(5, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(6, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(7, NeoPixel.Color(0, 255, 0));
  NeoPixel.show();

  digitalWrite(kart, HIGH);

  
  delay(5000);                      
  digitalWrite(kart, LOW);
  //5
  NeoPixel.setPixelColor(0, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(1, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(2, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(3, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(4, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(5, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(6, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(7, NeoPixel.Color(0, 255, 0));
  NeoPixel.show();
  delay(1000);  
  //4
  NeoPixel.setPixelColor(0, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(1, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(2, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(3, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(4, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(5, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(6, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(7, NeoPixel.Color(0, 255, 0));
  NeoPixel.show();
  delay(1000);  
  //3
  NeoPixel.setPixelColor(0, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(1, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(2, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(3, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(4, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(5, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(6, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(7, NeoPixel.Color(0, 255, 0));
  NeoPixel.show();
  delay(1000);  
  //2
  NeoPixel.setPixelColor(0, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(1, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(2, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(3, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(4, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(5, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(6, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(7, NeoPixel.Color(0, 255, 0));
  NeoPixel.show();
  delay(1000);  
  //1
  NeoPixel.setPixelColor(0, NeoPixel.Color(255, 0, 0));
  NeoPixel.setPixelColor(1, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(2, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(3, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(4, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(5, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(6, NeoPixel.Color(0, 0, 0));
  NeoPixel.setPixelColor(7, NeoPixel.Color(0, 255, 0));
  NeoPixel.show();
  delay(1000);  
}
