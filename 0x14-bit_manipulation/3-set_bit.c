#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to set bit in
 * @index: the index to set bit in
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
