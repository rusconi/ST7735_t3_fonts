#include <SPI.h>
#include <ST7735_t3.h>
#include <font_LiberationSansNarrowBold.h>
#include <font_LiberationSansNarrowBoldItalic.h>
#include <font_LiberationSansNarrow.h>
#include <font_LiberationSansNarrowItalic.h>

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

  int xx = 0;
  tft.setFont(LiberationSansNarrow_24);
  tft.setCursor(xx, 4);
  tft.print("LiberationSansNarrow");
  tft.setCursor(xx, 61);
  tft.setFont(LiberationSansNarrow_24_Bold);
  tft.print("LiberationSansNarrow");
  tft.setCursor(xx, 122);
  tft.setFont(LiberationSansNarrow_24_Italic);
  tft.print("LiberationSansNarrow");
  tft.setCursor(xx, 183);
  tft.setFont(LiberationSansNarrow_24_Bold_Italic);
  tft.print("LiberationSansNarrow");
}

void loop(void) {
}

