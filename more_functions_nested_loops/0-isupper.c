#include <stdio.h>
#include <stdlib.h>

/**
 * _isupper - checks for uppercase character
 * @c: uppercase C
 *
 * Return: (0)
 *
 **/

int _isupper(int c)
{
	int c;

	c= 'C';
	printf("%c: %d\n", _isupper(c));
	c = 'c';
	printf("%c: %d", c, _isupper(c));

	return (0);
}
