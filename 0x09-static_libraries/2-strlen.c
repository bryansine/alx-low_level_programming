<<<<<<< HEAD
#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
=======
/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

int _strlen(char *s)
{
<<<<<<< HEAD
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
=======
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
}
