#include "main.h"


int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else 
	{
		_putchar(45);
		return (-1);
	}

	return (0);
}
