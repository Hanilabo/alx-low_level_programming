#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * return: 0 (success)
 */
int main(void)
{
	int num = 0;
	while (num <= 9)
	{
		putchar('0' + num);
		num++;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
