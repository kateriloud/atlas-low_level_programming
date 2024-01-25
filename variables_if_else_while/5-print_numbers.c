#include <stdio.h>
#include <stdlib.h>
/*
 * main - Prints numbers 0-10 followed by new line
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
			putchar(',');
			putchar('\n');
			}
	}	
	return (0);
}
