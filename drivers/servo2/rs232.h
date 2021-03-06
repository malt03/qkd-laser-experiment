#ifndef ___RS232_H_INCLUDED_
#define ___RS232_H_INCLUDED_

#define F_CPU   8000000UL // 8MHz
#define BAUD    9600
#define UBRR    F_CPU/16/BAUD-1

#include<inttypes.h>

void USART_init( unsigned int ubrr );
unsigned char rx_1byte_USART( void );
void tx_1byte_USART( unsigned char data );
void tx_string_USART( char *str );

#endif
