#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first int to swap
 * @b: second int to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
