#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, res, sum;
	int count;

	i = 0;
	j = 1;

	count = 0;
	while (count < 50)
	{
		res = i + j;
		i = j;
		j = res;

		if (res % 2 == 0)
		{
			sum += res;
		}
		count++;
	}

	printf("%lu\n", sum);
	return (0);
}
