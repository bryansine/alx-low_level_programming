#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints a text according to a number
 * Return: Always (success)
 *
 */
int main(void)

{
             int n, lastd;

	     strandtime(0));
	     n = rand() - RAND_MAX / 2;
	     lastd n % 10;

	     if (lastd > 5)
	     {
	     printf("last digit of %d and is greater than 5\n", n, lastd);
	     }
             else if (lastd == 0)
             }
             printf("last digit of %d is %d and is 0\n", n, lastd);
	     }
             else if (lastd < 6 && lastd != 0)
	     {
	     printf(last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	     }
             return (0);
}	     
=======
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

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
>>>>>>> a00548bd1578b99643122a5b87c675bc3ccffe5c
