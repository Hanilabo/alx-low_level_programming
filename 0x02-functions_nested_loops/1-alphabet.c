#include <stdio.h>
#include "main.h"

/** 
 * main - print alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
	_putchar(lowercase);
	lowercase++;
	}
	_putchar('\n');
	return (0);
}
