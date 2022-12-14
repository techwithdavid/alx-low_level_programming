#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that finds and prints the sum of
 * The even-valued fibonacci numbers whose values do not
 * Exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, res;
	int sum;

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

	printf("%d\n", sum);
	return (0);
}
