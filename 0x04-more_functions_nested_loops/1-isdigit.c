#include<stdio.h>
#include"main.h"
#include<ctype.h>

/**
 * _isdigit - check if digit
 * @c: number is ASCII
 * Retun: 1 if digit. 0 if not
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
