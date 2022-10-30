#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formatted string
 *
 * @format: A string containing all the desired characters
 *
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int char_chars, i, p;
	team_t f_list[] = {{"c", print_char}, {"s", print_string},
		{"%", print_percent}, {"d", print_integer},
		{"i", print_integer}, {NULL, NULL}};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	char_chars = 0;
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{ /*check the operator*/
			i++;
			p = 0;
			while (p < 5)
			{
				if (f_list[p].op[0] == format[i])
				{
					char_chars = char_chars + f_list[p].f(arg_list);
					break;
				}
				else
					p++;
			}
			if (p >= 5)
				i = i - 2;

			i++;
		}
		_write_char(format[i]);
		i++;
		char_chars++;
	}
	va_end(arg_list);
	return (char_chars);
}
