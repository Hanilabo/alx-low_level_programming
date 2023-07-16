#include <stdio.h>

/**
 * main - Program that print alphabets except q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase = 'a';

	while(lowercase <= 'z')
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n');
	return(0);
}

