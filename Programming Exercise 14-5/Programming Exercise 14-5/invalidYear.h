#include<iostream>
#include<string.h>

using namespace std;

class invalidYear
{
	string msg;
public:
	invalidYear()
	{
		msg = "Year input is incorrect";
	}
	void showException()
	{
		cout << msg << endl;
	}
};