#include "shell.h"

/**
 * is_interactive - returns true if shell is interactive
 * @info: struct address
 *
 * Return: 1 if interactive, 0 otherwise
 */
int is_interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimiter
 * @c: char to check
 * @delim: delimiter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delimiter)
{
	while (*delimiter)
		if (*delimiter++ == c)
			return (1);
	return (0);
}

/**
 * is_alpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if alphabetic, 0 otherwise
 */
int is_alpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * atoi_custom - converts string to integer
 * @s: string to be converted
 * Return: 0 if no numbers, converted number otherwise
 */
int atoi_custom(char *str)
{
	int i, sign = 1, flag = 0, result;
	unsigned int output = 0;

	for (i = 0;  str[i] != '\0' && flag != 2; i++)
	{
		if (str[i] == '-')
			sign *= -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 1;
			output *= 10;
			output += (str[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	result = (sign == -1) ? -output : output;

	return (result);
}

