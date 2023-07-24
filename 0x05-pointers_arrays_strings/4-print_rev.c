#include"main.h"

/**
 * print_rev- print reverse
 *
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0, i;
	
	while (s[i++])
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
