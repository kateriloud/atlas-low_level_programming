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

		if (n>0)
			{
			printf("is positive");
			}
		else if (n<0)
			{
			printf("is negative");
			}
		else {
			printf("is zero");
			}
	return (0);
}
