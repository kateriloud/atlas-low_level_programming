#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"


/**
 * main - entry point
 * Description: fizz buzz print out
 * @: no parameters
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
