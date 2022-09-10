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
		printf("%d is positive n\n", 0);
	else if (n < 0)
		printf("%d is negative n\n", 0);
	else
		printf("%d is zero n\n", 0);

	return (0);
}
