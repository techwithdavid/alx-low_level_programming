#include <stdio.h>

/**
 * print_to_98 - prints all natural number n to 98.
 * followed by a new line7
 * @n: integer argument to the function
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%i", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar(10);
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%i", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
		putchar (10);
	}
	else
	{
		printf("%i\n", n);
	}
}
