#include <stdio.h>
#include <stdlib.h>
/*
 * main - Prints all single digits between 0 to 9
 *
 * Return - (0)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
