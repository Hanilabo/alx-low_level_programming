#include<stdio.h>
#include"main.h"

/**
 * jack_bauer- prints every munite of the dar
 */
void jack_bauer(void)
{
	int hf = 0;
	int hs = 0;
	int mf = 0;
	int ms = 0;
	while(mf < 5 && ms <9)
	{
		_putchar('0'+hf);
		_putchar('0'+hs);
		_putchar(':');
		_putchar('0'+mf);
		_putchar('0'+ms);

	}
}
