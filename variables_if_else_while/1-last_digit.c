#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - void
 *
 * Description: prints random number and categorizes them by last digit
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char x[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("%s", x);
		printf("%d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("%s", x);
		printf("%d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("%s", x);
		printf("%d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
