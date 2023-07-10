<<<<<<< HEAD
#include "main.h"

/**
 * _puts - prints string
 * @str: input string
 * Return: no return
=======
#include"main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
<<<<<<< HEAD
		_putchar(*str);
		str++;
=======
		_putchar(*str + 0);
		++str;
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
	}
	_putchar('\n');
}
