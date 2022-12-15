#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: argument to the _isalpha function
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);

	return (0);
}
