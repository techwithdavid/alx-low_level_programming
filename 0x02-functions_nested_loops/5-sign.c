#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Description: prints the sign of a number and returns 0
 * if the number is 0.
 * @n: integer argument to the function
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

	return (0);
}
