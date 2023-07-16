#include <stdio.h>

/**
 * main - A program that write alphabets in lowercase then in upper case
 *
 * return: 0 (success)
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase ++;
	}
	int uppercase = 'A';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase ++;
	}
	return (0);
