#include "main.h"

/**
* jack_bauer - Function to print every minute of Jack Bauer
*
* Return: void
*/
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			first_hour = (hour / 10) + '0';
			last_hour = (hour % 10) + '0';
			first_minute = (minute / 10) + '0';
			last_minute = (minute % 10) + '0';

			_putchar(first_hour);
			_putchar(last_hour);
			_putchar(':');
			_putchar(first_minute);
			_putchar(last_minute);
			_putchar('\n');
		}
	}
}
