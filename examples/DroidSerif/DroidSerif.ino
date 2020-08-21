#include <SPI.h>
#include <ST7735_t3.h>
#include <font_DroidSerif_Regular.h>
#include <font_DroidSerif_Bold.h>
#include <font_DroidSerif_Italic.h>
#include <font_DroidSerif_BoldItalic.h>

#define TFT_DC  9
#define TFT_CS 10

// Use hardware SPI (#13, #12, #11) and the above for CS/DC
ST7735_t3 tft = ST7735_t3(TFT_CS, TFT_DC);

void setup() {
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(ST7735_BLACK);
  tft.setTextColor(ST7735_YELLOW);
  //tft.setTextSize(2);
  //tft.println("Waiting for Arduino Serial Monitor...");

  Serial.begin(9600);
  //while (!Serial) ; // wait for Arduino Serial Monitor
  //tft.fillScreen(ST7735_BLACK);
  Serial.println("ST7735 Test!"); 

  int xx = 20;
  tft.setFont(DroidSerif_32);
  tft.setCursor(xx, 4);
  tft.print("Droid Serif");
  tft.setCursor(xx, 61);
  tft.setFont(DroidSerif_32_Bold);
  tft.print("Droid Serif");
  tft.setCursor(xx, 122);
  tft.setFont(DroidSerif_32_Italic);
  tft.print("Droid Serif");
  tft.setCursor(xx, 183);
  tft.setFont(DroidSerif_32_Bold_Italic);
  tft.print("Droid Serif");
}

void loop(void) {
}

