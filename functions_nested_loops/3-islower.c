#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that checks for lowercase characters
 * @c - character to check
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
