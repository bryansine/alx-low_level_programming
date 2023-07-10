<<<<<<< HEAD
#include "main.h"

/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
=======
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
=======
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
	return (dest);
}
