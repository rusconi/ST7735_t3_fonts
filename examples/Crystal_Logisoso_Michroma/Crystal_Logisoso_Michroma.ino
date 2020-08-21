#include <SPI.h>
#include <ST7735_t3.h>
#include <font_Crystal.h>
#include <font_Logisoso.h>
#include <font_Michroma.h>

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
  tft.setFont(Crystal_40_Italic);
  tft.setCursor(xx, 10);
  tft.print("CRYSTAL 123");
  tft.setCursor(xx, 80);
  tft.setFont(Logisoso_48);
  tft.print("Logisoso");
  tft.setCursor(xx, 164);
  tft.setFont(Michroma_32);
  tft.print("Michroma");
}

void loop(void) {
}

