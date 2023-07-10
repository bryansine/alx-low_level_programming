#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
=======

/**
 * _strpbrk - finds first matching char in string
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 * Return: pointer to matching char
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

char *_strpbrk(char *s, char *accept)
{
<<<<<<< HEAD
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
=======
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
}
