#include <stdio.h>
/**
 * main- prints alphabet except q and e;
 *    returns 0;
 */
int main(void)
{
	char c;

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
