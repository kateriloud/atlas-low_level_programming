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
	printf("Character: %c, is uppercase: %d\n", c, _isupper(c));
	c = 'c';
	printf("Charcter: %c, is not uppercase: %d\n", c, _isupper(c));

	return (0);
}
