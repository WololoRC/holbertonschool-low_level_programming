#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file
 *
 *@filename: ptr to file
 *@text_content: file content
 * Return: 1 on success, -1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, cnt;

	if (!filename && !text_content)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	cnt = strlen(text_content);

	wr = write(fd, text_content, cnt);
	if (wr < cnt)
		return (-1);

	return (1);
}
