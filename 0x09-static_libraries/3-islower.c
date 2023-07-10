#include "main.h"
<<<<<<< HEAD

/**
 * _islower - check the code for Holberton School students.
 *
 * @c:  is a parameter
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
=======
/**
   * _islower - checks if a character is lowercase if YES it returns 1
    * otherwise returns 0 just like islower() function in ctype.h
     * @c: Is the int value to be compared with the ASCII value
      * Return: 0 if successful.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
>>>>>>> 1e6136f833dcac9d6b498f22853ea864784e694c
}
