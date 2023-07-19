#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabets
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
