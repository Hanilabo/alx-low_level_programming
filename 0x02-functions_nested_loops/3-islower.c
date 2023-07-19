#include<stdio.h>
#include"main.h"
#include<ctype.h>
/**
 * _islower - checks lowercase
 * @c: character in ASCII
 * Return: 1 (success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
