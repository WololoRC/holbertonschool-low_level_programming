#include "main.h"
/**
 *create_file - creates a file
 *
 *@filename: name of file
 *@text_content: content of file
 * Return: 1 on successm, -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, cnt;
	char *buffer;

	cnt = 0;

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd < 0)
		return (-1);

	while (text_content[cnt])
	{
		cnt++;
	}

	write(fd, text_content, cnt);
	if (write < fd)
		return (-1);

	close(fd);
	return (1);
}
