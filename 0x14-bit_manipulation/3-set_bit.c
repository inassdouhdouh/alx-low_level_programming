#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to set bit in
 * @index: the index to set bit in
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
