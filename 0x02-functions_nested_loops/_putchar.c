#include <unstd.h>

/**
 * _putchar - writes th character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set approppraitely
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
