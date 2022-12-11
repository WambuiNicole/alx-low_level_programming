#include <stdio.h>
/**
 ** main - determines sizes of data types
 *   *
 *   	*Return: zero
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;

	printf("Size of int: %zu byte\(s\)\n", sizeof(intType));
	printf("Size of float: %zu byte\(s\)\n", sizeof(floatType));
	printf("Size of long int: %zu byte\(s\)\n", sizeof(long int));
	printf("Size of long long int: %zu byte\(s\)\n", sizeof(long long int));
	printf("Size of char: %zu byte\(s\)\n", sizeof(charType);

	return (0);
}
