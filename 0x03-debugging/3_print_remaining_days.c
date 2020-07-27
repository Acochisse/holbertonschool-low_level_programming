#include "holberton.h"

/**
 * print_remaining_days - prints how many days are remaining in a year
 * @month: month
 * @day: day
 * @year: year
 * Return: none
 */

void print_remaining_days(int month, int day, int year)

{
	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
	{
		if (month > 2)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining Days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
			printf("Invalid date: %02d/%02d/%04d\n", month, day -31, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
