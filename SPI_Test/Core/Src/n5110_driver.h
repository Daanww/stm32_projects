#ifndef N5110_DRIVER_H
#define N5110_DRIVER_H

#define SCREEN_WIDTH 84
#define SCREEN_HEIGHT 48

enum DC_enum {
	DATA,
	COMMAND
};


void init_n5110();
void spi_tx_byte(uint8_t byte, int dc);
void clear_screen();
void write_screen_buffer();
void write_char(char character);
void set_draw_coordinates(int x, int y);


#endif