// This program calculates how much a student organization earns during its fund-raising candy sale.

#include <iostream>
using namespace std;

int main()
{
    // Define placeholders for the data (variables)
    double amount, rate, pay;

    // Get the number of candy bars sold
    cout << "Number of candy bars sold? ";
    cin >> amount;

    // Get the amount the organization earned for each candy bar sold
    cout << "Amount earned for each candy bar sold? ";
    cin >> rate;

    // Calculate the total purchase price
    pay = amount * rate;

    // Display amount earned
    cout << "You're total amount of candy bars sold is $" << pay << endl;


    return 0;
}