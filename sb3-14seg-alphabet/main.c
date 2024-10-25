#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
int main(void) {
	// Entrada
	const char* pd0[] = {"M","A","X","I","M","E"};
	size_t len_pd0 = sizeof(pd0)/sizeof(pd0[0]);
	const char* pd1[] = {"M","I","G","U","E","L"};
	size_t len_pd1 = sizeof(pd1)/sizeof(pd1[0]);
	const char* pd2[] = {"J","U","A","N"};
	size_t len_pd2 = sizeof(pd2)/sizeof(pd2[0]);
	const char* pd3[] = {"O","L","I","V","I","A"};
	size_t len_pd3 = sizeof(pd3)/sizeof(pd3[0]);
	const char* pd4[] = {"J","A","M","E","S"};
	size_t len_pd4 = sizeof(pd4)/sizeof(pd4[0]);
	const char* pd5[] = {"I","V","A","N"};
	size_t len_pd5 = sizeof(pd5)/sizeof(pd5[0]);
	const char* pd6[] = {"G","U","S","T","A","V","O"};
	size_t len_pd6 = sizeof(pd6)/sizeof(pd6[0]);
	const char* pd7[] = {"R","O","D","R","I","G","O"};
	size_t len_pd7 = sizeof(pd7)/sizeof(pd7[0]);
	
	// Alfabeto
	const char* key[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	int32_t numero[26][2] = {
		{0b00110111,0b0100010}, //A
		{0b10001111,0b0001010}, //B
		{0b00111001,0b0000000}, //C
		{0b10001111,0b0001000}, //D
		{0b00111001,0b0100000}, //E
		{0b00110001,0b0100000}, //F
		{0b00111101,0b0000010}, //G
		{0b00110110,0b0100010}, //H
		{0b10001001,0b0001000}, //I	
		{0b00011110,0b0000000}, //J
		{0b00110000,0b0100101}, //K
		{0b00111000,0b0000000}, //L
		{0b01110110,0b0000001}, //M
		{0b01110110,0b0000100}, //N
		{0b00111111,0b0000000}, //O
		{0b00110011,0b0100010}, //P
		{0b00111111,0b0000100}, //Q
		{0b00110011,0b0100110}, //R
		{0b00101101,0b0100010}, //S
		{0b10000001,0b0001000}, //T
		{0b00111110,0b0000000}, //U
		{0b00110000,0b0010001}, //V
		{0b00110110,0b0010100}, //W
		{0b01000000,0b0010101}, //X
		{0b01000000,0b0001001}, //Y
		{0b00001001,0b0010001}, //Z
	};
	size_t len_key = sizeof(key)/sizeof(key[0]);
	
	DDRD = 0x00; // entrada B
	DDRC = 0xFF; // salida C
	DDRB = 0xFF; // salida D
	PORTD = 0xFF; // pull up activo
	
	while (1) {
		
		switch (PIND){
			case 0b11111110 :
				//PD0 = 0 => switch prendid0
				for(int16_t i = 0;i<len_pd0;i++){
					for(int16_t j = 0;j<len_key;j++){
						if(strcmp(key[j],pd0[i]) == 0){
							PORTB = numero[j][0];
							PORTC = numero[j][1];
							_delay_ms(500);
							break;
						}
					}
				}
				PORTB = 0x00;
				PORTC = 0x00;
				_delay_ms(1000);
				break;
			case 0b11111101 :
				//PD1 = 1 => switch prendid0
				for(int16_t i = 0;i<len_pd1;i++){
					for(int16_t j = 0;j<len_key;j++){
						if(strcmp(key[j],pd1[i]) == 0){
							PORTB = numero[j][0];
							PORTC = numero[j][1];
							_delay_ms(500);
							break;
						}
					}
				}
				PORTB = 0x00;
				PORTC = 0x00;
				_delay_ms(1000);
				break;
			case 0b11111011 :
				//PD2 = 1 => switch prendid0
				for(int16_t i = 0;i<len_pd2;i++){
					for(int16_t j = 0;j<len_key;j++){
						if(strcmp(key[j],pd2[i]) == 0){
							PORTB = numero[j][0];
							PORTC = numero[j][1];
							_delay_ms(500);
							break;
						}
					}
				}
				PORTB = 0x00;
				PORTC = 0x00;
				_delay_ms(1000);
				break;
			case 0b11110111 :
				//PD3 = 1 => switch prendid0
				for(int16_t i = 0;i<len_pd3;i++){
					for(int16_t j = 0;j<len_key;j++){
						if(strcmp(key[j],pd3[i]) == 0){
							PORTB = numero[j][0];
							PORTC = numero[j][1];
							_delay_ms(500);
							break;
						}
					}
				}
				PORTB = 0x00;
				PORTC = 0x00;
				_delay_ms(1000);
				break;
			case 0b11101111 :
				//PD4 = 1 => switch prendid0
				for(int16_t i = 0;i<len_pd4;i++){
					for(int16_t j = 0;j<len_key;j++){
						if(strcmp(key[j],pd4[i]) == 0){
							PORTB = numero[j][0];
							PORTC = numero[j][1];
							_delay_ms(500);
							break;
						}
					}
				}
				PORTB = 0x00;
				PORTC = 0x00;
				_delay_ms(1000);
				break;
			case 0b11011111 :
				//PD5 = 1 => switch prendid0
				for(int16_t i = 0;i<len_pd5;i++){
					for(int16_t j = 0;j<len_key;j++){
						if(strcmp(key[j],pd5[i]) == 0){
							PORTB = numero[j][0];
							PORTC = numero[j][1];
							_delay_ms(500);
							break;
						}
					}
				}
				PORTB = 0x00;
				PORTC = 0x00;
				_delay_ms(1000);
				break;
			case 0b10111111 :
				//PD6 = 1 => switch prendid0
				for(int16_t i = 0;i<len_pd6;i++){
					for(int16_t j = 0;j<len_key;j++){
						if(strcmp(key[j],pd6[i]) == 0){
							PORTB = numero[j][0];
							PORTC = numero[j][1];
							_delay_ms(500);
							break;
						}
					}
				}
				PORTB = 0x00;
				PORTC = 0x00;
				_delay_ms(1000);
				break;
			case 0b01111111 :
				//PD7 = 1 => switch prendid0
				for(int16_t i = 0;i<len_pd7;i++){
					for(int16_t j = 0;j<len_key;j++){
						if(strcmp(key[j],pd7[i]) == 0){
							PORTB = numero[j][0];
							PORTC = numero[j][1];
							_delay_ms(500);
							break;
						}
					}
				}
				PORTB = 0x00;
				PORTC = 0x00;
				_delay_ms(1000);
				break;
			default: 
				PORTB = numero[23][0];
				PORTC = numero[23][1];
				break;
		}	
	}
}