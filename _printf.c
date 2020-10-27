#include "holberton.h"
#include <unistd.h>

/**
 * get_format_func - find the right format and apply the function
 * @s: the string
 *
 * Return: the function to the format
 */

int (*get_format_func(char s))(va_list, char *, int)
{
	int i;

	fs_t fs_to_f[] = {
		{'c', add_c},
		{'s', add_s},
		{'i', add_d_i},
		{'d', add_d_i},
		{'%', add_percent},
		{'b', add_binary},
		{'o', add_oct},
		{'x', add_hex_low},
		{'X', add_hex_up},
		{'\0', NULL}
	};

	i = 0;
	while (fs_to_f[i].fs)
	{
		if (fs_to_f[i].fs == s)
			return (fs_to_f[i].f);
		i++;
	}

	return (NULL);
}

/**
 * _printf - Like printf
 * @format: The string to print.
 * @...: The variadic arguments for the format specifiers
 *
 * Return: The number of printed characters on succes.
 *         A negative number on error.
 *
 */

int _printf(const char *format, ...)
{
	int i, j, cc;
	char buff[1024] = {0};
	va_list list;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(list, format);

	cc = 0;
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			cc += get_format_func(format[i])(list, buff, cc);
		}
		else
		{
			buff[cc] = format[i];
			cc++;
		}
		i++;
	}
	va_end(list);
	write(1, &buff, cc);
	return (cc);
}
