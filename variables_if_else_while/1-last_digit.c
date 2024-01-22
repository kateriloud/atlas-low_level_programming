#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * main - This shows last digit is n
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(o));
	n = rand() - RAND_MAX / 2;
	lastd = n% 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\ni", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}
