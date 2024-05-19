#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
