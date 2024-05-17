#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - void
 *
 * Description: program assigns random num to variable n and states if pos or neg
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d \n", n);

	if (n > 0)
	{
		printf("n is positive \n");
	}
	else if (n < 0)
	{
		printf("n is negative \n");
	}
	else
	{
		printf("is zero \n");
	}
	return (0);
}
