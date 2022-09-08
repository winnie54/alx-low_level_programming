#include <stdio.h>

/**
 * main	- Entry point
 * 
 * Always Return: 0 (Success)
 */
int main(void)
	int intType;
	char charType;
	float floatType;
	double doubleType;
	/**
	 * sizeof evaluates the size of a variable
	 */
{
	printf("int size: %zu bytes\n", sizeof(int));
	printf("char size: %zu bytes\n", sizeof(char));
	printf("float size: %zu bytes\n", sizeof(float));
	printf("double size: %zu  bytes\n", sizeof(double));

	return (0);
}
