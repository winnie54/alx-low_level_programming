#include "main.h"

/**
 * read_textfile - reads a text and prints it to the POSIX standard output
 * @letters: the number of letters to be read and printed
 * @filename: file name
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL, return 0
 * if write fails or does not write th expected  amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_r, fd_o, fd_w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd_o = open(filename, O_RDONLY);
	if (fd_o == -1)
	{
		free(buf);
		return (0);
	}
	fd_r = read(fd_o, buf, letters);
	if (fd_r == -1)
	{
		free(buf);
		return (0);
	}
	fd_w = write(STDOUT_FILENO, buf, fd_r);
	if (fd_w == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd_o);
	return (fd_w);
}
