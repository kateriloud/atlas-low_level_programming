#include <stdio.h>
#include <stdlib.h>

/**
 *
 * _isalpha - checks for alphabetic character 
 * @c: lowercase or uppercase
 *
 * Return: (0)
 *
 **/

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z')
	{
	return (1);
	}

return (0);


}
