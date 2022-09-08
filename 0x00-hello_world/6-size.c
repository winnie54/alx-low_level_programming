#include <stdio.h>

/**
 * main	- sizeof
 * 
 * Always Return: 0 (Success)
 * using the main function
 */
int main(void)
	intType;
	charType;
	floatType;
	doubleType;
	/**
	 * sizeof evaluates the size of a variable
	 */
{
	printf("int size: %lu bytes\n", sizeof(intType));
	printf("char size: %lu bytes\n", sizeof(charType));
	printf("float size: %lu bytes\n", sizeof(floatType));
	printf("double size: %lu  bytes\n", sizeof(doubleType));

	return (0);
}
