#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - void
 *
 * Description: prints lowercase letters except q and e with putchar
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}

	putchar('\n');
	return (0);
}
