#include "rectangleType.h"

Rectangle::Rectangle() {
	length = 0;
	width = 0;
}
Rectangle::Rectangle(double newLength, double newWidth) {
	length = newLength;
	width = newWidth;
}

void Rectangle::setLength(double l) {
	length = l;
}
void Rectangle::setWidth(double w) {
	width = w;
}

double Rectangle::getLength() {
	return length;
}
double Rectangle::getWidth() {
	return width;
}

double Rectangle::computeArea() {
	return length * width;
}
double Rectangle::computePerimeter() {
	return 2 * (length + width);
}


Rectangle Rectangle::operator++ () {
	length++;
	width++;
	return *this;
}
Rectangle Rectangle::operator++ (int) {
	Rectangle r(length, width);
	++length;
	++width;
	return r;
}

Rectangle Rectangle::operator-- () {
	if (length > 0) {
		length--;
	}
	if (width > 0) {
		width--;
	}
	return *this;
}
Rectangle Rectangle::operator-- (int) {
	Rectangle r(length, width);
	if (length > 0) {
		length--;
	}
	if (width > 0) {
		width--;
	}
	return r;
}
Rectangle Rectangle::operator- (Rectangle other) {

	if (length > other.length && width > other.width) {
		length--;
		width--;
	}
	else {
		cout << "invalid operation. Subtrated Rectangle is bigger" << endl;
	}
	return *this;
}

bool Rectangle::operator==(Rectangle other) {
	return (length == other.length) && (width == other.width);
}
bool Rectangle::operator!=(Rectangle other) {
	return (length != other.length) || (width != other.width);
}

void Rectangle::printDetails() {
	cout << "Rectangle Report" << endl;
	cout << "Dimensions: " << length << " X " << width << endl;
	cout << "Area: " << computeArea() << endl;
	cout << "Perimeter: " << computePerimeter() << endl;
	cout << "********************" << endl;
}
