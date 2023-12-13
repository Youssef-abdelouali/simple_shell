#include "shell.h"

/**
 * _print_stderr - Prints an input string to stderr.
 * @str: The string to be printed.
 *
 * Return: Nothing.
 */
void _print_stderr(char *str)
{
	int i = 0;

	if (!str)
		return;

	while (str[i] != '\0')
	{
		_write_stderr(str[i]);
		i++;
	}
}

/**
 * _write_stderr - Writes the character c to stderr.
 * @c: The character to print.
 *
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write_stderr(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;

	return (1);
}

/**
 * _write_to_fd - Writes the character c to the given file descriptor.
 * @c: The character to print.
 * @fd: The file descriptor to write to.
 *
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write_to_fd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;

	return (1);
}

/**
 * _print_to_fd - Prints an input string to the given file descriptor.
 * @str: The string to be printed.
 * @fd: The file descriptor to write to.
 *
 * Return: The number of characters written.
 */
int _print_to_fd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);

	while (*str)
	{
		i += _write_to_fd(*str++, fd);
	}

	return (i);
}

