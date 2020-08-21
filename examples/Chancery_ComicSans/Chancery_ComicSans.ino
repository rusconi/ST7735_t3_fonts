#include <SPI.h>
#include <ST7735_t3.h>
#include <font_ChanceryItalic.h>
#include <font_ComicSansMSBold.h>
#include <font_ComicSansMS.h>

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

  tft.setFont(Chancery_60_Italic);
  tft.setCursor(0, 10);
  tft.println("Chancery");
  tft.setCursor(0, 100);
  tft.setFont(ComicSansMS_40);
  tft.printf("Comic Sans");
  tft.setFont(ComicSansMS_40_Bold);
  tft.printf("Comic Sans");
}

void loop(void) {
}

