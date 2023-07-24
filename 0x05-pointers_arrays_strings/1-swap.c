#include"main.h"

/**
 * swap_int- swab numbers
 * @a:number1
 * @b:number2
 * return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
