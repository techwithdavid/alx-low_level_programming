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
	int char_set1;
	int f_digit, l_digit;

	int char_set2;
	int f_digit2, l_digit2;

	char_set1 = 0;
	while (char_set1 <= 98)
	{
		f_digit = char_set1 / 10;
		l_digit = char_set1 % 10;

		char_set2 = 0;
		while (char_set2 <= 99)
		{
			f_digit2 = char_set2 / 10;
			l_digit2 = char_set2 % 10;


			if (char_set1 < char_set2)
			{
				putchar('0' + f_digit);
				putchar('0' + l_digit);
				putchar(' ');
				putchar('0' + f_digit2);
				putchar('0' + l_digit2);

				if (char_set1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}

			char_set2++;
		}
		char_set1++;

	}

	putchar(10);

	return (0);
}
