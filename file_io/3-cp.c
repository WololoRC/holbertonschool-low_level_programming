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
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (res);
	}

	if (res == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
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
	int cl, cl2;
	char *buffer[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 < 0)
		return (98);

	rd = read(fd1, buffer, 1024);
	if (rd < 0)
		return (98);

	fd2 = open(file_to, O_CREAT | O_TRUNC | O_RDWR, 0664);

	wr = write(fd2, buffer, rd);
	if (wr < rd)
		return (99);

	cl = close(fd1);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl);
		return (100);
	}
	cl2 = close(fd2);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl2);
		return (100);
	}

	return (1);
}
