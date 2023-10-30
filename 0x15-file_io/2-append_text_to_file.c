#include "main.h"

/**
 * append_text_to_file - appendes a text at the end of a file
 * @filename: file to append text to
 * @text_content: content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt_rst, rd_rst;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
