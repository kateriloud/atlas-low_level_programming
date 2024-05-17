#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 * main - void
 *
 * Description: prints alphabet lower and uppercase using putchar
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char alphabet = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
		putchar('\n');
		return (0);
}
