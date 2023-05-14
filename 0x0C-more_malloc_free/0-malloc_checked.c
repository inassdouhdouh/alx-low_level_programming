#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Main Entry
 * @b: input
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *e;

	e = malloc(b);
	if (e == NULL)
		exit(98);
	return (e);
}
