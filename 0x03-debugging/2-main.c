#include <stdio.h>
#include "main.h"

int main(void)
{
	int a, b, c;
	int large;

	a = 98;
	b = 98;
	c = 0;

	large = largest_number(a, b, c);

	printf("Largest number is: %d\n", large);

	return (0);
}
