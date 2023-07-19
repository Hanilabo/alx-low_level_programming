#include<stdio.h>
#include"main.h"

/**
 * _abs- absolute value
 * @num: is number
 * Return: num if great. -num if less
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
