#include <stdio.h>
/**
 * Main - prints combinations possible
 * returns: zero
 */
int main(void)
{
	int a, b;

	for (a = 48; a <=56; a++)
	{
		for (b = 49; b<= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
			}
		}
	}
	return (0);
}
