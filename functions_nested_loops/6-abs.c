#include <stdio.h>
#include "main.h"
/**
 *_abs- computes absolute value of integer
 *@x: integer
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
