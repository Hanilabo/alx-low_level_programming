#include<stdio.h>
#include"main.h"
#include<ctype.h>

/**
 * _isupper- check if uppercase
 * @c:number is ASCII
 * Return: 1 if upper. 0 if not
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
