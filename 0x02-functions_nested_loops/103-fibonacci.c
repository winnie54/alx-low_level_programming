#include "main.h"

/**
 * numLenght - returns the lenght of string
 * @num: operand number
 * Return: number of digits
 */
int numLenght(int num)
{
	int lenght = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		lenght += 1;
	}

	return (lenght);
}
