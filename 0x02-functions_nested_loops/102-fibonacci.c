#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, res;
	int count;

	i = 0;
	j = 1;

	count = 0;
	while (count < 50)
	{
		res = i + j;
		i = j;
		j = res;

		printf("%lu", res);

		if (count < 49)
		{
		putchar(',');
		putchar(' ');
		}

		count++;
	}
	putchar(10);

	return (0);
}
