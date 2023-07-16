#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that check last degit
 *
 * return (0)(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("%d Last digit of\n", n, "%d is\n",n % 10 ,"%d and is greater than5\n");
	return (0);
}
