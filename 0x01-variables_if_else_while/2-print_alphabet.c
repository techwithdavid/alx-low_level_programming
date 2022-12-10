#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the alphabets in lowercase
 * Return: Always 0 (Success)
 */
int main()
{
	int character;
	character = 'a';
	
	while (character <= 'z')
	{
		putchar(character);
		character++;
	}

	putchar(10);
	return (0);
}
