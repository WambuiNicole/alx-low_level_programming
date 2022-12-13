#include <stdio.h>
/**
 * *Main - prints all numbers of base 16;
 *	*Returns 0;
 */
int main(void)
{
	int a;
	int c;

	for (a = 0; a <= 9; a++)
		printf("%d", a);
	for (c = 'a'; c <= 'z'; c++)
		printf("%d", c);
	return (0);
}

