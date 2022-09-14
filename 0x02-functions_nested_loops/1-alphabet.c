#include "main.h"

/**
 * print_alphabet - a function that prints the alphabets, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
