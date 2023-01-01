#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day, starting
 * from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			printf("%i", a / 10);
			printf("%i", a % 10);
			putchar(':');
			printf("%i", b / 10);
			printf("%i", b % 10);
			putchar(10);
		}
	}
}
