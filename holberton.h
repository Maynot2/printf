#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>

typedef struct format_specifier
{
	char fs;
	int (*f)(va_list);
} fs_t;

int _putchar(char);
int print(char);
int print_c(va_list);
int print_s(va_list);
int _printf(const char *, ...);

#endif
