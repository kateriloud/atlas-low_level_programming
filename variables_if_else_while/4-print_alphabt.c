#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - Prints all lowercsae letters a-z except q and e
 *
 * Return: (0)
 *
 */
int main(void)
{
char i = 'a';

while (i <= 'z')
	{
	if (i != 'e' && i != 'q')
	{
		putchar(i);
	}
	i++;
}

	putchar('\n');
	return (0);
}
