#include<stdio.h>
#include"main.h"
#include<ctype.h>
/**
 * _islower - checks lowercase
 */
int _islower(int c)
{
	if (islower(c))
	{
		_putchar('0');
	}
	else
	{
		_putchar('1');
	}
	return (c);
}
