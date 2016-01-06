#include "cc1110.h"

#define nop()	__asm nop __endasm;

void delay (unsigned char n)
{
	unsigned char i = 0;
	unsigned char j = 0;

	n <<= 1;
	while (--n != 0)
		while (--i != 0)
		  while (--j != 0)
			  nop();
}

void main(void)
{
    // toggle P1_7
    P1DIR |= (1<<7);
    P1_7 = 0;

    while (1)
    {
        P1_7 ^= 1;
        delay(3);
    }
}
