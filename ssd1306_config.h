//SSD1306 setup
#define SSD1306_ADDRESS 0x3C ///< SSD1306 (display) I2C address
#define SSD1306_VERTICAL_RESOLUTION 64 ///< vertical resolution of display, 64 pixels tall
#define SSD1306_HORIZONTAL_RESOLUTION 128 ///< Horizontal resolution of display, 128 pixels across

#define SSD1306_PAGE_HEIGHT 8 ///< each "page" is 8 pixels high, see SSD1306 datasheet for more information
#define SSD1306_PAGES (SSD1306_VERTICAL_RESOLUTION / SSD1306_PAGE_HEIGHT) ///< each page is a vertical 8 bits and goes across the entire display
