#include <stdio.h>
#include <stdlib.h>

/**
 * main - program checks for lowercase c
 * @c: searching for character c in lowercase
 *
 * Return: (0)
 *
 **/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

		{
		return (1);
		}

return (0);
}
