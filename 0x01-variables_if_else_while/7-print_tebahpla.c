#include<stdio.h>

/**
 * main - alphabets in revers
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
			lowercase--;
	}
	putchar('\n');
	return (0);
}
