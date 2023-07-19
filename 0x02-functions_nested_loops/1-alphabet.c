#include <stdio.h>
#include "main.h"

/** 
 * main - print alphabets
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
	_putchar(lowercase);
	lowercase++;
	}
	_putchar('\n');
}
