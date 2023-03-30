#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to resulting string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int e = 0;

	while (s1[i] != 0 && s2[i] != 0)
	{
		e = s1[i] - s2[i];
		if (e != 0)
			break;
		i++;
	}

	return (e);
}
