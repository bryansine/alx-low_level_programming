<<<<<<< HEAD
#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
=======
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	 */
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
}
