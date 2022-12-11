#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	j = 'a';

	while (j <= 'f')
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
