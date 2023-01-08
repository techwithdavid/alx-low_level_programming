#include <stdio.h>

int main(void)
{
	long n, i;

	n = 612852475143;
	for (i = 2; i < n; n++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("%lu\n", n);

	return (0);
}
