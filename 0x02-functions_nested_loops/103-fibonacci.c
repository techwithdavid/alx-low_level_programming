#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, res, sum;

	i = 0;
	j = 1;

	while (res < 4000000)
	{
		res = i + j;
		i = j;
		j = res;

		if (res % 2 == 0)
		{
			sum += res;
		}
	}

	printf("%lu\n", sum);
	return (0);
}
