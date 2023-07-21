#include"main.h"

/**
 * more_numbers - more numbers
 * 
 * Return: void
 */
void more_numbers(void)
{
	int r = 0;

	while (r < 10)
	{
		char c = '0';
		
		while (c <=14)
		{
			_putchar(c);
			c++;
		}
		r++;
	}
	_putchar('\n');
}
