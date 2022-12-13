#include <stdio.h>
/**
 * *Main - lists all possible combos of single digits;
 * 	*
 * 		*Returns 0;
 */
int main (void)
{
	int a;
	
	for (a = 0; a <= 9; a++)
	{
		putchar(a);
		if (a == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
