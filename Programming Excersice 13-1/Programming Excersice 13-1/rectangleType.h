#include<iostream>
#include<iomanip>

using namespace std;

class Rectangle {
	double length, width;

public:
	Rectangle();
	Rectangle(double newLength, double newWidth);

	void setLength(double l);
	void setWidth(double w);

	double getLength();
	double getWidth();

	double computeArea();
	double computePerimeter();


	Rectangle operator++ ();
	Rectangle operator++ (int);

	Rectangle operator-- ();
	Rectangle operator-- (int);

	Rectangle operator- (Rectangle r);

	bool operator== (Rectangle r);
	bool operator!= (Rectangle r);


	void printDetails();
};