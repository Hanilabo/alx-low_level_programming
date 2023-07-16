#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * return: 0 (success)
 */
int main(void)
{
	int num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		putchar(44);
		putchar(32);
		num++;
	}
	putchar('\n');
	return (0);
}
