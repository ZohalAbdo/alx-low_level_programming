#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @months: month in number format
 * @days: day of month
 * @years: year
 * Return: void
 */
void print_remaining_days(int months, int days, int years)
{
if ((years % 100 == 0 && years % 400 == 0) || (years % 4 == 0))
{
if (months > 2 && days >= 60)
{
days++;
}
printf("Day of the year: %d\n", days);
printf("Remaining days: %d\n", 366 - days);
}
else
{
if (months == 2 && days == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", months, days - 31, years);
}
else
{
printf("Day of the year: %d\n", days);
printf("Remaining days: %d\n", 365 - days);
}
}
}

