#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: integer argument to the function
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
