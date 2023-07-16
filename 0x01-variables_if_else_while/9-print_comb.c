#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * return: 0 (success)
 */
int main(void)
{
	int num = 0;
	if (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	else if (num != 9)
	{
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
