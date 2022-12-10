#include <stdio.h>

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

