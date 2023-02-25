#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28 + is_leap_year(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_left = 0;
    
// Check for invalid input date
	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1])
	{
	printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	return;
}
    
// Calculate the day of the year
	for (int i = 0; i < month - 1; i++)
	{
		days_left += days_in_month[i];
	}
	days_left += day;
    
// Print the output
	printf("Day of the year: %d\n", days_left);
	printf("Remaining days: %d\n", is_leap_year(year) ? 366 - days_left : 365 - days_left);
}
