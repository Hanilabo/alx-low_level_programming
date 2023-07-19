#include<stdio.h>
#include"main.h"
#include<ctype.h>
/**
 * _islower - checks lowercase
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
