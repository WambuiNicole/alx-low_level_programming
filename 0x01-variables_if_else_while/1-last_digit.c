#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * *main - prints the last digit of the variable n
 *     *
 *          *Return (0);
 *
 */
int main(void)
{
	int n, lastDigit;
	char Ldf[] = "Last digit of ";


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	
	if ((n % 10) > 5)
	
		printf("%s %d is %d and is greater than 5\n", Ldf, n, lastDigit);
	 
	else if((n % 10) == 0)
	
		printf("%s %d is %d and is 0\n", Ldf, n, lastDigit);
	
	else
	
		printf("%s %d is %d and is less than 6 and not 0\n", Ldf, n, lastDigit);
	
	return(0);

}
