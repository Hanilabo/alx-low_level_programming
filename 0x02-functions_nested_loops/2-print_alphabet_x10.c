#include<stdio.h>
#include"main.h"

/**
 * void print_alphabet_x10(void)
 */
void print_alphabet_x10(void)
{
	int r=9;

	while(r<9)
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
