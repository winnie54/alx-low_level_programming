#include <stdio.h>
#include "main.h"

/**
 * main - checks for endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
