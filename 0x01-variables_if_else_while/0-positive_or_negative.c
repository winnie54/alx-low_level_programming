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

	if (n > 0)
		printf("%d\n" 0 is positive, n);
	else if (n < 0)
		printf("%d\n" 0 is negative, n);
	else
		printf("%d\n" 0 is zero, n);

	return (0);
}
