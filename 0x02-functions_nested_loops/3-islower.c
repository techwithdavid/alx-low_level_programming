#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: argument to the function
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else
		return (0);

	return (0);
}
