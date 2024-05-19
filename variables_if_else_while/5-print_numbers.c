#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - void
 *
 * Description: prints all single digit numbers 0-9
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
