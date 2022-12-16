#include "main.h"

/**
 * print_most_numbers - prints all numbers 0-9 except
 * 2 and 6
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
