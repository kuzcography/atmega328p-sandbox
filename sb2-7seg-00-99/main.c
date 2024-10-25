#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	
	uint8_t numero[10] = {0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	
	DDRC = 0x00; // entrada C
	DDRB = 0xFF; // salida B
	DDRD = 0xFF; // salida D
	PORTC = 0xFF; // pull up activo
	while (1) {
		switch (PINC) {
			case 0b1111110:
				//PC0 = 0 -> switch prendido -> incremental
				for(int16_t i = 0;i<=9;i++){
					for(int16_t u = 0;u<=9;u++){
						PORTD = numero[i];
						PORTB = numero[u];
						_delay_ms(800);
						if (PINC != 0b1111110){
							break;
						}
					}
					if (PINC != 0b1111110){
						break;
					}
				}
				if(PINC != 0b1111110){
					break;
				}
			case 0b1111111:
				//PC0 = 1 -> switch apagado -> decremental
				for(int16_t e = 9;e>=0;e--){
					for(int16_t d = 9;d>=0;d--){
						PORTD = numero[e];
						PORTB = numero[d];
						_delay_ms(800);
						if (PINC != 0b1111111) {
							break;
						}
					}
					if (PINC != 0b1111111) {
						break;
					}
				}
				if (PINC != 0b1111111) {
					break;
				}
			
			default:
				PORTB = 0b01110110;
				PORTD = 0b01110110;
				break;
		}
	}
}
