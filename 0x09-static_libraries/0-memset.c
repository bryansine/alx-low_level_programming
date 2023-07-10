<<<<<<< HEAD
#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
=======
/**
 * _memset - a function that fills
 * memory with a constant byte
 *
 * @s: input pointer to char type
 * represents the pointer to the
 * block of memory to fill
 * @b: input variable of char type
 * represents the character to
 * fill s
 * @n: unsigned int variable
 * the number of bytes to be filled
 * Return: A pointer to the filled memory
 * area @s
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
=======
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
	return (s);
}
