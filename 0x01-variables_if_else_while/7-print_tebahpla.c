#include <stdio.h>
/**
 * Main - prints alphabet in reverse
 *    Returns 0;
 */
int main(void)
{
	char c;
	
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	return (0);
}	
