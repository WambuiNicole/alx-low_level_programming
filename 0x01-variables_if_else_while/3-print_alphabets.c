#include <stdio.h>
/**
 * *main - prints the alphabet letters in uppercase then lowercase
 *     *Returns 0;
 */
int main(void)
{
	char c;

        for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	return (0);
}
