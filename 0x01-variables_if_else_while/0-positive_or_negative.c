#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number and add states	whether
 *	it is positve,	negative, or zero
 * Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /	2;
	/* your code goes there*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
