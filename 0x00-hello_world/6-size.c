#include <stdio.h>

/**
 * main	- puts the string in the printf function
 *
 * Description:	using the main function
 * this program prints the sizeof types
 * Always Return: 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	short shortType;
	long longType;
	float floatType;
	double doubleType;

/**sizeof evaluates the size of a variable*/
	printf("int size: %zu bytes\n", sizeof(intType));
	printf("char size: %zu bytes\n", sizeof(charType));
	printf("short size: %zu bytes\n", sizeof(shortType));
	printf("long size: %zu bytes\n", sizeof(longType));
	printf("float size: %zu bytes\n", sizeof(floatType));
	printf("double size: %zu  bytes\n", sizeof(doubleType));

	return (0);
}
