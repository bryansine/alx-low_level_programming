<<<<<<< HEAD
#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
=======
/**
 * _strcat - function that concatenates
 * two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
=======
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/* iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
	return (dest);
}
