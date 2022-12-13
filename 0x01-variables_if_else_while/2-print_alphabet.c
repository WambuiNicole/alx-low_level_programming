#include <stdio.h>
/**
 * *main - prints the letters of the alphabet in lowercase
 *   *
 *     * Returns (0);
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	      
	return (0);
}
