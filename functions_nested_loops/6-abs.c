#include <stdio.h>
#include "main.h"
/**
 *_abs - computes absolute value of integer
 *@x: integer to find absolute
 *description: function computes the absolute value of an integer
 *return: 0 (always success)
 */
int _abs(int  x)
{
	if (x > 0)
		return (x);

	else
	{
		x *= -1;
		return (x);
	}
}
