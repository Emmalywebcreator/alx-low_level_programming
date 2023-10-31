#include "main.h"

/**
 * read _textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to be read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_result, write_result;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	read_result = read(fd, buf, letters);
	if (read_result == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);

	write_result = write(STDOUT_FILENO, buf, read_result);
	if (write_result == -1 || write_result != read_result)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (write_result);
}

