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
	int (*f)(va_list, char *, int);
} fs_t;

int _putchar(char);
int numlen(int);
int _pow(int, int);
int _print(char *);
int _printf(const char *, ...);
int add_c(va_list, char *, int);
int add_s(va_list, char *, int);
int add_d_i(va_list, char *, int);
int add_percent(va_list, char *, int);
int add_binary(va_list, char *, int);
int add_oct(va_list, char *, int);
#endif
