#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
		if (num < 10)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
