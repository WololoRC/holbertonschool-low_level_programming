#include "main.h"
/**
 * main - Entry point
 *
 *@ac: Arg counter
 *@av: Arg vecotr
 *
 * Return: 0 on success, POSIX errors if fails.
 */
int main(int ac, char **av)
{
	int res, cnt;
	char *ERROR;

	if (ac >= 4)
	{
		ERROR = "Usage: cp file_from file_to\n";
		cnt = strlen(ERROR);
		write(STDERR_FILENO, ERROR, cnt);
		return (97);
	}

	res = cp(av[1], av[2]);

	if (res == 98)
	{
		ERROR = "Error: Can't read from file NAME_OF_THE_FILE\n";
		cnt = strlen(ERROR);
		write(STDERR_FILENO, ERROR, cnt);
		return (res);
	}

	if (res == 99)
	{
		ERROR = "Error: Can't write to NAME_OF_THE_FILE\n";
		cnt = strlen(ERROR);
		write(STDERR_FILENO, ERROR, cnt);
		return (res);
	}

	if (res == 100)
	{
		ERROR = "Error: Can't close fd FD_VALUE\n";
		cnt = strlen(ERROR);
		write(STDERR_FILENO, ERROR, cnt);
		return (res);
	}

	return (0);
}
/**
 *cp - copie a file.
 *
 *@file_from: source
 *@file_to: where
 *
 * Return: 1 on success, errors if fails
 */
ssize_t cp(const char *file_from, const char *file_to)
{
	int fd1, fd2, rd, wr;
	int cl;
	char *buffer[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 < 0)
		return (98);

	rd = read(fd1, buffer, 1024);

	fd2 = open(file_to, O_CREAT | O_TRUNC | O_RDWR, 0664);

	wr = write(fd2, buffer, rd);
	if (wr < rd)
		return (99);

	cl = close(fd1);
	if (cl < 0)
		return (100);
	cl = close(fd2);
	if (cl < 0)
		return (100);

	return (1);
}
