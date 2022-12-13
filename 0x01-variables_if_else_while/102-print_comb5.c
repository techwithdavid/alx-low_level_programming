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
	int _char_set1;
	int _f_digit, _l_digit;

	int _char_set2;
	int _f_digit2, _l_digit2;

	_char_set1 = 0;
	while (_char_set1 <= 98)
	{
		_f_digit = _char_set1 / 10;
		_l_digit = _char_set1 % 10;

		_char_set2 = 0;
		while (_char_set2 <= 99)
		{
			_f_digit2 = _char_set2 / 10;
			_l_digit2 = _char_set2 % 10;


			if (_char_set1 < _char_set2)
			{
				putchar('0' + _f_digit);
				putchar('0' + _l_digit);
				putchar(' ');
				putchar('0' + _f_digit2);
				putchar('0' + _l_digit2);

				if (_char_set1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}

			_char_set2++;
		}
		_char_set1++;

	}

	putchar(10);

	return (0);
}
