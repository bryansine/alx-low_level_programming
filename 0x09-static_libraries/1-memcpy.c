<<<<<<< HEAD
#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
=======
/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we will copy to
 * @src: what we are to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (Success)
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
<<<<<<< HEAD
	{
		dest[i] = src[i];
	}
=======
		dest[i] = src[i];
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
	return (dest);
}
