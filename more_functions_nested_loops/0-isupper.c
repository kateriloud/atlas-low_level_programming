#include <ctype.h>
#include "main.h"
#include <stdio.h>

int _isupper(int c)
{
	if (c >= 65 && c<= 90)
	{
		return(1);
	}

	else if (c >= 97 && c <= 122)
	{
		return(0);
	}

	return(0);
}
