#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to be created
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrt_rst, rd_rst;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		rd_rst = 0;

		while (text_content[rd_rst])
		rd_rst++;

		wrt_rst = write(fd, text_content, rd_rst);
		if (wrt_rst != rd_rst)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
