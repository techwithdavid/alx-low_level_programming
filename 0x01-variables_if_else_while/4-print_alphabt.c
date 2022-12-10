#include <stdio.h>

/**
  * main - Entry point
  * Description - A program that that prints all alphabets,
  * except q and e, in lower case.
  * Return: Always 0 (Success)
  */
int main(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
		alpha++;
	}

	putchar(10);
	return (0);
}

