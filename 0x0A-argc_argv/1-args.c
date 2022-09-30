#include <stdio.h>

/**
 * main - write a program that prints the number of argumenents passed to it
 *
 * @args: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: this returns to 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

