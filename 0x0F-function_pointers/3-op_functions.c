#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - fuction
  * @a: a
  * @b: b
  *
  * Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - fuction
  * @a: a
  * @b: b
  *
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - fuction
  * @a: a
  * @b: b
  *
  * Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - fuction
  * @a: a
  * @b: b
  *
  * Return: a / b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - fuction
  * @a: a
  * @b: b
  *
  * Return: a % b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
