#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char lowercase;

	num = 0;
	
	while (num < 10 )
	{
		putchar ('0' + num);
		num++;
	}
	lowercase = 'a';
	
	while(lowercase <= 'f')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
