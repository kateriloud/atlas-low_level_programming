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

	c= 'C';
	printf("%c\n", _isupper(c));
	c = 'c';
	printf("%c", c, _isupper(c));

	return (0);
}
