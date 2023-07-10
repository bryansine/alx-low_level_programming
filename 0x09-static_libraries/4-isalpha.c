#include "main.h"

<<<<<<< HEAD
/**
 * _isalpha - check the code for Holberton School students.
 *
 * @c: is c an integer argument
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
=======


/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 *
 */



int _isalpha(int c)



{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

		return (1);

	else

		return (0);

>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
}
