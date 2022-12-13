#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{

		j = 0;
		while (j < 10)
		{

			k = 0;
			while (k < 10)
			{
				if (i != j && i != k && j != k && i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i + j + k != 24)
						putchar(',');
						putchar(' ');
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar(10);

	return (0);
}
