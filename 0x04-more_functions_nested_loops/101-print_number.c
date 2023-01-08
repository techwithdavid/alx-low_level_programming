#include "main.h"

void print_number(int n)
{
	unsigned int num;

	num = n;
	if (num < 0)
	{
		num = -num;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 106) + '0');
}
