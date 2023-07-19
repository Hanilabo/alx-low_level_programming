#include<stdio.h>
#include"main.h"

/**
 * print_sign - prints sing of a number
 * @c: character in ASCII
 * return: 1 (sign is +)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(32);
		return (1);
	}
	else if ( n < 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(32);
		return (0)
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(32);
		return (-1);
	}
