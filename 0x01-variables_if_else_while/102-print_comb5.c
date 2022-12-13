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
	int _c_s1;
	int _f_d, _l_d;

	int _c_s2;
	int _f_d2, _l_d2;

	_c_s = 0;
	while (_c_1 <= 98)
	{
		_f_d = _c_s1 / 10;
		_l_d = _c_s1 % 10;

		_c_s = 0;
		while (_c_s2 <= 99)
		{
			_f_d2 = _c_s2 / 10;
			_l_d2 = _c_s2 % 10;


			if (_c_s1 < _c_s2)
			{
				putchar('0' + _f_d);
				putchar('0' + _l_d);
				putchar(' ');
				putchar('0' + _f_d2);
				putchar('0' + _l_d2);

				if (_c_s1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}

			_c_s2++;
		}
		_c_s1++;

	}

	putchar(10);

	return (0);
}
