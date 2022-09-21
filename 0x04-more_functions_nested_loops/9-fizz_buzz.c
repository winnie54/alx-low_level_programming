#include <stdio.h>
#include <stdlib.h>
/**
 * main	- program that prints either number
 * for fizz or buzz or fizzbuzz
 *
 * Return: return 0
 */
int main(void)
{
	int num;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
			printf("%s", b);
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("%s", fb);
		else if ((num % 3) == 0)
			printf("%s", f);
		else if ((num % 5) == 0)
			printf("%s", b);
		else
			printf("%d", num);
	}
	printf(" ");
	printf("\n");

	return (0);
}
