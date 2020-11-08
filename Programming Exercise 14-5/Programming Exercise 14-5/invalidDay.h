#include<iostream>
#include<string.h>

using namespace std;

class invalidDay
{
	string msg;
public:
	invalidDay()
	{
		msg = "Day must be between 1 and 29";
	}
	void showException()
	{
		cout << msg << endl;
	}
};