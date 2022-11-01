#include "main.h"

/**
  * create_file - creates a file
  * @filename: A pointer to the name of the file to create
  * @text_content: A pointer to a string to write to the file
  *
  * Return: on success (1), on failure (-1)
  * if filename is NULL return -1
  */
int create_file(const char *filename, char *text_content)
{
	int O, W, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	O = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(O, text_content, len);

	if (O == -1 || W == -1)
		return (-1);
	close(O);

	return (1);
}
