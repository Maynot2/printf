# C - printf

Implementation of custom printf function (\_printf) with similar functionalities
to C original printf.

like printf it outputs to stdout with the possibility of converting a variable
number of arguments to a specified format.

In order to do so, \_printf uses format specifiers like %d.
Format specifiers are preceded by a percent/modulo symbol which is treated as
a special character.

## List of available format specifiers:

- %d, %i The  int argument is converted to a signed decimal number.
- %o The unsigned int argument is converted to unsigned octal.
- %x, %X The unsigned int argument is converted to an unsigned hexadecimal.
- %c The int argument is converted to an unsigned char.
- %s The char * argument (string) is written til it reaches the null char '\0'.

## Use Exemple:

### C file test.c
```
include "holberton.h"

int main(void)
{
	int days = 28;
	char *month = "February";

	printf("There are %d days in %s!\n", days, month);

	return (0);
}
```

### In terminal
```
stdout>>> gcc test.c *.c 
stdout>>> ./a.out
stdout>>> There are 28 days in February!
stdout>>>
```
NB: \*.c includes all the supporting c files to the compilation of test.
