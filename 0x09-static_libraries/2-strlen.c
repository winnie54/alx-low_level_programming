#include "main.h"
#include <stddef.h>

/**
 * _strlen - returns the lenght of a string
 * @str: string
 * Return: lenght
 */
size_t _strlen(const char *str)
{
	size_t len = 0;
	
	while (*str++)
		len++;
	
	return (len);
}	
