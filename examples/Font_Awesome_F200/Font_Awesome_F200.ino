#include <SPI.h>
#include <ST7735_t3.h>
#include <font_Arial.h>
#include <font_AwesomeF200.h>

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

  int xx = 50;
  tft.setFont(Arial_12);
  tft.println("Font-Awesome (F200)");
  tft.setFont(AwesomeF200_18);
  tft.setCursor(0, 12);
  for (int i=0; i < 128; i++) {
    if (i == 10) continue;
    tft.print((char)i);
  }
}

void loop(void) {
}

