#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @x: argument to the _abs function
 * Return: Always 0 (Sucess)
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x = (-1) * x);
	}
	else if (x == 0)
	{
		return (0);
	}
	else
		return (x);

	return (0);
}
