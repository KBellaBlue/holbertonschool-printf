#include "main.h"

/**
 * _write_char - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write_char(char c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}
