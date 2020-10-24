#include "holberton.h"

/**
  * _print - Prints a string
  * @s: A string
  *
  * Return: Number of printed characters as an integer.
  *
  */

int _print(char *s)
{
	i = 0;

	while(s[i])
	{
		_putchar(s[i]);
		i++
	}

	return i;
}
