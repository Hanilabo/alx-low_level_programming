#include<stdio.h>
#include"main.h"

/**
 * times_table- prints table
 */
void times_table(void)
{
	int row, col, result;
	
	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;
			_putchar('0' + result / 10);
			_putchar('0' + result % 10);
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			} else {
				_putchar('\n');
			}
		}
	}
}
