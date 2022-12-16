#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers (0 through 9)
 *
 * Returns: void
 */
void print_numbers(void)
{
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	putchar('\n');
}
