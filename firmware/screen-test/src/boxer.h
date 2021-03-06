#include <avr/pgmspace.h>

PROGMEM const uint8_t boxer[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 4, 0, 1, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 4, 0, 1, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 12, 0, 1, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 8, 0, 1, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 8, 0, 1, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 16, 128, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 16, 0, 0, 32, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 
	0, 0, 0, 128, 1, 0, 0, 0, 2, 0, 0, 0, 
	0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 12, 224, 255, 1, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 112, 128, 7, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 8, 0, 12, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 12, 0, 24, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 6, 0, 48, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 2, 0, 32, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 3, 0, 96, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 1, 0, 64, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 1, 0, 64, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 1, 0, 64, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 3, 0, 64, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 3, 0, 64, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 3, 0, 64, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 2, 0, 64, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 2, 0, 224, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 123, 0, 175, 0, 0, 0, 0, 
	0, 0, 0, 0, 128, 195, 225, 129, 0, 0, 0, 0, 
	0, 0, 0, 0, 128, 1, 33, 128, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 113, 0, 195, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 225, 193, 65, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 3, 0, 64, 0, 0, 0, 0, 
	0, 0, 0, 0, 128, 7, 0, 96, 2, 0, 0, 0, 
	0, 0, 0, 0, 96, 4, 0, 48, 6, 0, 0, 0, 
	0, 0, 0, 0, 56, 4, 118, 24, 12, 0, 0, 0, 
	0, 0, 0, 0, 12, 12, 28, 8, 24, 0, 0, 0, 
	0, 0, 0, 0, 3, 8, 0, 136, 16, 0, 0, 0, 
	0, 0, 0, 128, 1, 8, 0, 204, 48, 0, 0, 0, 
	0, 0, 0, 192, 0, 24, 127, 196, 32, 0, 0, 0, 
	0, 0, 0, 96, 0, 48, 65, 70, 32, 0, 0, 0, 
	0, 0, 0, 48, 0, 32, 28, 67, 32, 0, 0, 0, 
	0, 0, 0, 14, 0, 64, 0, 33, 32, 0, 0, 0, 
	0, 0, 128, 3, 0, 128, 128, 48, 32, 0, 0, 0, 
	0, 0, 192, 0, 0, 128, 97, 16, 16, 0, 0, 0, 
	0, 0, 48, 0, 30, 0, 63, 24, 18, 0, 0, 0, 
	0, 0, 24, 0, 112, 0, 0, 12, 26, 0, 0, 0, 
	0, 0, 12, 0, 128, 7, 0, 2, 14, 0, 0, 0, 
	0, 0, 6, 0, 0, 60, 0, 3, 6, 0, 0, 0, 
	0, 0, 3, 0, 0, 224, 63, 1, 6, 0, 0, 0, 
	0, 0, 1, 0, 0, 0, 32, 0, 4, 0, 0, 0, 
	0, 128, 1, 0, 0, 0, 0, 0, 6, 0, 0, 0, 
	0, 128, 0, 0, 0, 0, 0, 0, 4, 0, 255, 0, 
	0, 192, 0, 0, 0, 0, 0, 0, 6, 192, 129, 3, 
	0, 96, 0, 0, 0, 0, 0, 0, 2, 112, 0, 14, 
	0, 16, 0, 0, 0, 0, 128, 0, 2, 24, 0, 24, 
	0, 8, 0, 0, 0, 0, 128, 0, 3, 12, 0, 16, 
	0, 12, 0, 128, 1, 0, 192, 0, 1, 4, 0, 240, 
	0, 4, 0, 224, 0, 0, 64, 128, 1, 132, 0, 144, 
	0, 6, 0, 127, 0, 0, 96, 224, 224, 135, 0, 16, 
	0, 2, 128, 203, 0, 0, 32, 156, 49, 2, 1, 16, 
	0, 1, 0, 8, 3, 0, 144, 7, 31, 130, 3, 28, 
	128, 1, 0, 12, 6, 0, 140, 2, 12, 194, 142, 7, 
	128, 0, 0, 4, 12, 0, 7, 2, 4, 98, 248, 1, 
	64, 0, 0, 2, 48, 240, 0, 2, 6, 34, 0, 0, 
	96, 0, 128, 1, 192, 31, 0, 1, 2, 34, 0, 0, 
	48, 255, 249, 0, 0, 0, 0, 1, 2, 50, 0, 0, 
	16, 2, 31, 0, 0, 0, 128, 0, 2, 50, 0, 0, 
	8, 0, 6, 0, 0, 0, 192, 255, 3, 50, 0, 0, 
	12, 0, 12, 63, 128, 255, 231, 0, 7, 34, 0, 0, 
	6, 0, 216, 193, 240, 15, 62, 0, 12, 34, 0, 0, 
	2, 0, 112, 158, 29, 0, 96, 0, 6, 34, 0, 0, 
	2, 0, 48, 115, 7, 0, 192, 0, 2, 34, 0, 0, 
	2, 0, 144, 193, 3, 0, 128, 1, 6, 38, 0, 0, 
	2, 0, 88, 192, 0, 0, 0, 1, 4, 36, 0, 0, 
	60, 0, 108, 96, 0, 0, 0, 3, 12, 100, 0, 0, 
	120, 0, 36, 32, 0, 0, 0, 2, 248, 79, 0, 0, 
	128, 1, 22, 16, 0, 0, 0, 6, 224, 89, 0, 0, 
	0, 14, 22, 24, 0, 0, 0, 4, 0, 240, 0, 0, 
	0, 248, 19, 12, 0, 0, 0, 4, 0, 224, 0, 0, 
	0, 0, 114, 4, 0, 0, 0, 12, 0, 128, 1, 0, 
	0, 0, 194, 7, 0, 0, 0, 12, 0, 0, 3, 192, 
	0, 0, 6, 6, 0, 0, 0, 8, 0, 0, 28, 127, 
	0, 0, 6, 4, 0, 0, 0, 8, 0, 0, 240, 3, 
	0, 0, 4, 4, 0, 0, 0, 8, 0, 0, 0, 0, 
	0, 0, 12, 12, 0, 0, 0, 8, 0, 0, 0, 0, 
	0, 0, 24, 8, 0, 0, 0, 12, 0, 0, 0, 0, 
	0, 0, 48, 24, 0, 0, 0, 12, 0, 0, 0, 0, 
	0, 0, 240, 31, 0, 0, 0, 28, 0, 0, 0, 0, 
	0, 0, 144, 55, 0, 0, 0, 54, 0, 0, 0, 0, 
	0, 0, 216, 96, 0, 0, 0, 98, 0, 0, 0, 0, 
	0, 0, 72, 192, 0, 0, 0, 195, 0, 0, 0, 0, 
	0, 0, 72, 128, 1, 0, 192, 129, 1, 0, 0, 0, 
	0, 0, 72, 0, 3, 0, 96, 0, 3, 0, 0, 0, 
};

