#include <stdio.h>

/**
  * main - Entry point
  * A program that prints all single digit numbers of base 10
  * Starting from 0.
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar(10);

	return (0);
}
