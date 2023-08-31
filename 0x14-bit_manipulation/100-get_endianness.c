#include "main.h"

/**
 * get_endianness - checks the end of the code
 * @celestine:
 * @bryan:
 * Return: endiassness function
*/

int get_endianness(void)
{
unsigned int celestine = 1;

char *bryan = (char *)&celestine;

if (*bryan)
{
return (1);
}
return (0);
}
