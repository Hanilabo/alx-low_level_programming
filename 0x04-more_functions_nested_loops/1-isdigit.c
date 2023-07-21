#include<stdio.h>
#include"main.h"
#include<ctype.h>

/**
 * _isdigit - check if digit
 * @c: number is ASCII
 *
 * Retun: 1 (isdigit). 0 (notdigit)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
