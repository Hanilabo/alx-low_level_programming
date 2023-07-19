#include<stdio.h>
#include"main.h"

/**
 * void print_alphabet_x10(void)- 10 times alphabets
 */
void print_alphabet_x10(void)
{
	int r = 9;

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
