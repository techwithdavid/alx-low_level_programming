#include <stdio.h>
#include "main.h"

/**
 * print_line - prints underscores(line) in n times
 * @n: number of times underscore should be repeated
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}

		_putchar(10);
	}
	else
	{
		_putchar('\n');
	}
}
