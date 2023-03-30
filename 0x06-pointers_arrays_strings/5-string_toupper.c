#include "main.h"
/**
 * string_toupper - convert to uppercase
 * @s: string
 * Return: void
 */
char *string_toupper(char *)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'A' + (s[i] - 'a');
		}
		i++;
	}
	return (s);
}
