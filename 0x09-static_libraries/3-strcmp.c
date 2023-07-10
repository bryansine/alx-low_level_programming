<<<<<<< HEAD
#include "main.h"

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: *dest
=======
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 are equal
 * negative integer if the stopping character
 * in @s1 was less than the stopping
 * character in @s2
 * positive integer if the stopping character
 * in @s1 was greater than the stopping
 * character in @s2
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
 */

int _strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
=======
	int i = 0, r;

	/**
	 * iterate through src and
	 * compare it with dest
	 */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		 */
		if (s1[i] != s2[i])
		{
			/**
			 * return the difference between
			 * the two characters
			 */
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
}
