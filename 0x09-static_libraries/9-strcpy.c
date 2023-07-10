#include "main.h"

<<<<<<< HEAD
/**
 * *_strcpy - copy strg to another string
 * @dest: pointer
 * @src: poiter
 * Return: numbers dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
=======


/**
 * _strcpy - copies the string pointed to src, including \0
 * @src: pointer
 * @dest: pointer
 * Return: the pointer to dest
 */



char *_strcpy(char *dest, char *src)

{

	int i, length;



	for (length = 0; src[length] != '\0'; length++)

	{

	}

	for (i = 0; i <= length; i++)

	{

		dest[i] = src[i];

	}

	return (dest);

>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
}
