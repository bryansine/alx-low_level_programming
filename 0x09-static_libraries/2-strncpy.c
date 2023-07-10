<<<<<<< HEAD
#include "main.h"

/**
 * _strncpy - two words
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return: *dest
=======
/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
=======
	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
	return (dest);
}
