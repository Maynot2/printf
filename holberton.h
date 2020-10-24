#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct format_specifier - Specifie the format
 * @fs: the format specifier
 * @f: the function for it
 *
 * Description: Structure that find which format is the input.
 */

typedef struct format_specifier
{
	char fs;
	int (*f)(va_list);
} fs_t;

int _putchar(char);
int _print(char *);
int _printf(const char *, ...);
int print_c(va_list);
int print_s(va_list);
int print_d_i(va_list);

#endif
