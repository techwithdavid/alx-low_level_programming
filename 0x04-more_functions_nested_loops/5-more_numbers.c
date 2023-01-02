#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(' ');
		}
		putchar(10);
	}
}
