#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digits (0 through 9)
 *
 * @c: argument to the function
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
