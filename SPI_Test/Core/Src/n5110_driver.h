#ifndef N5110_DRIVER_H
#define N5110_DRIVER_H

#define SCREEN_WIDTH 84
#define SCREEN_HEIGHT 48

enum DC {
	DATA,
	COMMAND
};


void init_n5110();
void spi_tx_byte(uint8_t byte, int dc);
void clear_screen();
void write_char(char character);


#endif