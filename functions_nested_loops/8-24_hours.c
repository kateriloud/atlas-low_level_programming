#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include "main.h"

/**
 * jack_bauer - entry point
 * Description: prints every minute of the day in 00:00 format
 * @: void
 * Return: Always 0 (success)
 */

void jack_bauer(void)
{
	int minute;
	int hour;
	
	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
		}
	
	}
}
