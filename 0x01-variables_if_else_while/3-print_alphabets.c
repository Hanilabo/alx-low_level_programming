#include <stdio.h>

/**
 * main - A program that write alphabets in lowercase then in upper case
 *
 * return: 0 (success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	lowecase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase ++;
	}
	uppercase = 'A';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase ++;
	}
	return (0);
}
