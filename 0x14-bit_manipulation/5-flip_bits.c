 #include "main.h"
/**
 * flip_bits - func to flip numbers
 * @n: thhe parameters for flip_bits that is number of flips
 * @m: unsigned long int
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k, nflips = 0;
	unsigned long int l = sizeof(unsigned long int) * 8;

	for (k = 0; k < l; k++)
	{
	if ((m & 1) != (n & 1))
	nflips += 1;
	n = n >> 1;
	m = m >> 1;
	}
	return (nflips);
}
