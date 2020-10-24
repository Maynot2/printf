#include "holberton.h"

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
	int i, j;
	int cc = 0;
	va_list list;
	fs_t s_to_p[] = {
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(list, format);

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (s_to_p[j].fs)
			{
				if (format[i + 1] == s_to_p[j].fs)
					cc += s_to_p[j].f(list);
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			cc++;
		}
		i++;
	}

	va_end(list);

	return (cc);
}
