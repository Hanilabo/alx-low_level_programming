#include<stdio.h>
#include"main.h"

/**
 * print_alphabet_x10- 10 times alphabets
 */
void print_alphabet_x10(void)
{
	int r = 0;

	while (r < 10)
	{
		char lowercase = 'a';

		while (lowercase <= 'z')

		{
			_putchar(lowercase);
			lowercase++;
		}
			_putchar('\n');
			r++;
	}
}
