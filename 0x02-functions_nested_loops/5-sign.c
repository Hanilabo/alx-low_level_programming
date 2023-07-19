#include<stdio.h>
#include"main.h"

/**
 * print_sign- prints sing of a number
 * @n: character in ASCII
 * return: 1 (sign is +)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
