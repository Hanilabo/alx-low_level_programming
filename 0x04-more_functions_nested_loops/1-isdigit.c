#include"main.h"

/**
 * _isdigit - check if digit
 * @c: number is ASCII
 *
 * Retun: 1 (isdigit). 0 (notdigit)
 */
int _isdigit(int c)
{
	if ( c >= '0' && c <= '9' )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
