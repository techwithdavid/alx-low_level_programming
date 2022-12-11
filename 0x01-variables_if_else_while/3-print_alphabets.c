#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	j = 'A';
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
