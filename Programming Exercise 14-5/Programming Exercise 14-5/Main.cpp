#include<iostream>
#include<string>
#include "invalidDay.h"
#include "invalidMonth.h"
#include "invalidYear.h"

using namespace std;

void read_date(int &day, int &month, int &year);

int main()
{
	int day, month, year;
	string months[12] = { "January ", "February ", "March ",
		"April ", "May ", "June ", "July ", "August ", "September ", 
		"October ", "November ", "December "};

	try
	{
		read_date(day, month, year);
		cout << "Your Date of Birth is: " << months[month - 1] << "" << day << 
			", " << year;
	}
	catch (invalidDay id)
	{
		id.showException();
	}
	catch (invalidMonth im)
	{
		im.showException();
	}
	catch (invalidYear iy)
	{
		iy.showException();
	}
	return 0;
}

void read_date(int &d, int &m, int &y)
{
	cout << "Enter the year: ";
	cin >> y;

	cout << "Enter the month: ";
	cin >> m;

	do 
	{
		cout << "Enter the day: ";
		cin >> d;

	} while (d <= 0 || d > 29);

	if (d < 0 || d>31)
		throw invalidDay();
	if (m <= 0 || m >= 13)
		throw invalidMonth();
	if (y % 400 == 0 || (y != 100 && y % 4 == 0))
		if (d >= 30)
			throw invalidYear();
	
}