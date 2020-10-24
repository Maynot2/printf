#include "holberton.h"
#include "stdio.h"

int print(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);
	return (i);
}

/**cd
 * print_c - Prints a character.
 * @l: A list of elements.
 *
 * Return: Nothing.
 *
 */

int print_c(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}

/**
 * print_s - Prints a string.
 * @l: A list of elements.
 *
 * Return: Nothing.
 *
 */

int print_s(va_list l)
{
	char *str = va_arg(l, char *);
	int c;

	if (str)
		c = print(str);
	else
		c = print("(nil)");
	return (c);
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
	while(format[i])
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
