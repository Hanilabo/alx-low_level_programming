#include<stdio.h>
#include"main.h"

/**
 * print_last_digit- print last digit
 * @num: number
 * @l: is last digit
 * Return: l great. -l is less
 */
int print_last_digit(int num)
{
	int l = num % 10;

	if (l > 0)
	{
		_putchar(l + 48);
		return (l);
	}
	else
	{
		_putchar(-l + 48);
		return (-l);
	}
}
