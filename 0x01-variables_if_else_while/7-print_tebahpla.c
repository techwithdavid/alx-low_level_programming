#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int character;

	character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character--;
	}

	putchar(10);
	return (0);
}
