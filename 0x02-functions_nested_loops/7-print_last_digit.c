#include<stdio.h>
#include"main.h"

/**
 * print_last_digit- print last digit
 * @num: number
 * @lastdigit: l
 * Return: lastdigit great. -lastdigit is less
 */
int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit > 0)
	{
		_putchar(lastdigit + 48);
		return (lastdigit);
	}
	else
	{
		_putchar(-lastdigit + 48);
		return (-lastdigit);
	}
}
