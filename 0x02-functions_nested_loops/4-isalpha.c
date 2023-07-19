#include<stdio.h>
#include"main.h"
#include <ctype.h>

/**
 * _isalpha - checks alphabets
 *
 * Return: 1 (isalpha)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

