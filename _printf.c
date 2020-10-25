#include "holberton.h"
#include <unistd.h>

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
	int cc;
	char buff[1024] = {0};
	va_list list;
	fs_t s_to_p[] = {
		{'c', add_c},
		{'s', add_s},
		{'i', add_d_i},
		{'d', add_d_i},
		{'\0', NULL}
	};
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	cc = 0;
	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (s_to_p[j].fs)
			{
				if (format[i] == s_to_p[j].fs)
					cc += s_to_p[j].f(list, buff, cc);
				j++;
			}
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
