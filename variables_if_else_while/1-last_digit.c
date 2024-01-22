#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * main - Prints message according to number
 *
 * Return: 0 (always success)
 *
 */

int main(void)
{
	int n;
	n = rand() - RAND_MAX / 2;
	int x = n % 10

	if ( x > 5 ) 
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if ( x < 6  && x != 0 )
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else

	{
	printf("The last digit of %d is %d and is 0\n", n, x);
	}

	return (0);
}
