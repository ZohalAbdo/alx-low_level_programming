#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @months: month in number format
* @days: day of month
* Return: day of year
*/

int convert_day(int months, int days)
{
	switch (months)
	{
	case 2:
		days = 31 + days;
		break;
	case 3:
		days = 59 + days;
		break;
	case 4:
		days = 90 + days;
		break;
	case 5:
		days = 120 + days;
		break;
	case 6:
		days = 151 + days;
		break;
	case 7:
		days = 181 + days;
		break;
	case 8:
		days = 212 + days;
		break;
	case 9:
		days = 243 + days;
		break;
	case 10:
		days = 273 + days;
		break;
	case 11:
		days = 304 + days;
		break;
	case 12:
	    	days = 334 + days;
	    	break;
	default:
	    	break;
	}
	return (days);
}
