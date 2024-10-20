#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	
	DDRD = 0x00; //entrada
	DDRB = 0xFF; // salida
	PORTD = 0xFF; // pull up activo
	while (1) {
		switch (PIND) {
			case 0b11111110:
				//1
				PORTB = 0b00000110;
				break;
			case 0b11111101:
				//2
				PORTB = 0b01011011;
				break;
			case 0b11111011:
				//3
				PORTB = 0b01001111;
				break;
			case 0b11110111:
				//4
				PORTB = 0b01100110;
				break;
			case 0b11101111:
				//5
				PORTB = 0b01101101;
				break;
			case 0b11011111:
				//6
				PORTB = 0b01111101;
				break;
			case 0b10111111:
				//7
				PORTB = 0b00000111;
				break;
			case 0b01111111:
				//8
				PORTB = 0b01111111;
				break;
			case 0b00111111:
				//9
				PORTB = 0b01101111;
				break;
			default:
				//0
				PORTB = 0b10111111;
				break;
		}
	}
}