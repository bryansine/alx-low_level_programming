#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
=======

#include <time.h>

#include <stdio.h>


/**
 * main - Determines if a number is positive, negative or zero.
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	 int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n > 0)
        {
        printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
        printf("%d is zero\n", n);
        }
        else
        {
        printf("%d is negative\n", n);
	}
 	return (0);
>>>>>>> c92b6c080a4867e882d4b7e7bc3817668d0a7f8f
}
