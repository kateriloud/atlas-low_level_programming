#include <stdio.h>
#include <stdlib.h>
/*
 * main - Prints all single digits between 0 to 9
 *
 * Return - (0)
 */
int main(void)
{
	int n;
	
		for (n = '0'; n <= '9'; n++);
	{
		putchar(n + 0);
		if(n < 9)

			{
			putchar('n');
			putchar('\n');
			}
	}	
	return (0);
}
