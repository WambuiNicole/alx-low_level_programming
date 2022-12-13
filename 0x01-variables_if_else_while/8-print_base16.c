#include <stdio.h>
/**
 * *Main - prints all numbers of base 16;
 *	*Returns 0;
 */
int main(void)
{
	char a;
	char c;

	for (a = 0; a <= 9; a++)
		putchar(a);
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	return (0);
}

