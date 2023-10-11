#include <stdio.h>
#include "main.h"

/**
* is_leap_year - checks if a year is a leap year
* @year: year
* Return: 1 if it's a leap year, 0 otherwise
*/
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return (1);
	else
		return (0);
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of the month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int isLeap = is_leap_year(year);
	int remaining_days;
	int i;

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);

	}

	remaining_days = 0;

	for (i = month + 1; i <= 12; i++)
	{
		remaining_days += days_in_month[i];
		if (isLeap && i == 2)
			remaining_days++;

	remaining_days += days_in_month[month] - day;

	if (isLeap && month <= 2)
		remaining_days++;

	printf("Day of the year: %d\n", day + remaining_days);
	printf("Remaining days: %d\n",
	 isLeap ? 366 - (day + remaining_days) : 365 - (day + remaining_days));
	}
}
