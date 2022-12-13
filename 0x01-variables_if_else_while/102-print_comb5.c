#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible
 * Combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c_s1;
	int f_d, l_d;

	int c_s2;
	int f_d2, l_d2;

	c_s1 = 0;
	while (c_s1 <= 98)
	{
		f_d = c_s1 / 10;
		l_d = c_s1 % 10;

		c_s2 = 0;
		while (c_s2 <= 99)
		{
			f_d2 = c_s2 / 10;
			l_d2 = c_s2 % 10;


			if (c_s1 < c_s2)
			{
				putchar('0' + f_d);
				putchar('0' + l_d);
				putchar(' ');
				putchar('0' + f_d2);
				putchar('0' + l_d2);

				if (c_s1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c_s2++;
		}
		c_s1++;

	}

	putchar(10);

	return (0);
}
