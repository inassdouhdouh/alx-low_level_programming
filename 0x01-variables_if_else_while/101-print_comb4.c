#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int d;
	int r;
	int k;

	for (k = 0 ; k != 8 ; k++)
	{
		for (d = d + 1 ; d != 9 ; d++)
		{
			r = d + 1;
			do {
				putchar('0' + k);
				putchar('0' + d);
				putchar('0' + r);
				if (h != 7)
				{
					putchar(',');
					putchar(32);
				}
				r++;
			} while (r != 10);
		}
	}
	putchar('\n');
	return (0);
}


