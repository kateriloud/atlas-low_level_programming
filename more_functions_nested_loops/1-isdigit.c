#include <stdio.h>

/**
 * _isdigit - checks for digit 0 to 9
 * @c: is digit
 *
 * Return: (0)
 *
 * */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		{
		return (1);
		}

	return (0);

}
