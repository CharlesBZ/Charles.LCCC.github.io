// This program asks the user to enter a triangle's base and height.

#include <iostream>
using namespace std;

int main()
{
    // Define placeholders for the data (variables)
    double base, height, area;

    // Get the base of the triangle
    cout << "What is the base of the triangle? ";
    cin >> base;

    // Get the height of the triangle
    cout << "What is the height of the triangle? ";
    cin >> height;

    // Calculate the area
    area = 0.5 * base * height;

    // Display the area
    cout << "The area of the triangle is " << area << endl;


    return 0;
}