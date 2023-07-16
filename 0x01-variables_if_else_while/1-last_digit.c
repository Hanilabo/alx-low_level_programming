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
	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, lastdigit);
	if (lastdigit > 5)
		printf("greater than 5\n");
	else if (lastdigit == 0)
		printf("zero\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
