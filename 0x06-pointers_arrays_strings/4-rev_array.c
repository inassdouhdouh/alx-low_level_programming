#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c2 = 0;

	while (c2 < n)
	{
		int e = a[c2];

		int d = a[n - 1];

		a[c2] = d;
		a[n - 1] = e;
		c2++;
		n--;
	}
}
