#include "main.h"

/**
 * _write_char - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_int - function that writes integers to stdout
 * @n: int to be printed
 * Return: characters in associated integer
 */

int print_int(int n)
{
	int i = 0, intRrr[10], s = 0, mila = 0, theCat = 0;

	if (n == -2147483648)
	{
		n = 2147483647;
		mila = 1;
	}
	if (n < 0)
	{
		n = n * -1;
		s = 1;
	}
	while (n > 9)
	{
		intRrr[i] = (n % 10);
		i++;
		n /= 10;
	}
	if (mila == 1)
	{
		intRrr[0] = 8;
	}
	intRrr[i] = (n % 10);
	while (i >= 0)
	{
		if (s == 1 || mila == 1)
		{
			theCat += _write_char('-');
			s = 0;
			mila = 0;
		}
		theCat += _write_char(intRrr[i] + '0');
		i--;
	}
	return (theCat);
}
