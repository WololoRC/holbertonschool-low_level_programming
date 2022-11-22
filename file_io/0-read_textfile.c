#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the standard output
 *
 *@filename: ptr to file content
 *@letters: NUM of chars to print
 * Return: NUM of chars printed or 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (-1);

	rd = read(file, buffer, letters);
	if (rd < 0)
		return (0);

	buffer[letters] = '\0';

	wr = write(1, buffer, rd);
	if (wr < rd)
		return (0);

	close(file);
	free(buffer);
	return (rd);
}
