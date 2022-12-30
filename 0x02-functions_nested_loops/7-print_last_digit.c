#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a nuumber
 *
 * @c: argument to the function
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		last_digit = -1 * (c % 10);
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = c % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}

	return (0);
}
