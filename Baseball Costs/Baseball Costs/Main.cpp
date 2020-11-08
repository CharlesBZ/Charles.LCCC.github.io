// This program calculates calculates how much a baseball team spent on purchasing baseballs.

#include <iostream>
using namespace std;

int main()
{
    // Define placeholders for the data (variables)
    double amount, rate, cost;

    // Get the number of baseballs purchased
    cout << "How many baseballs did you purchase? ";
    cin >> amount;

    // Get the amount the organization paid for each baseball
    cout << "What was the price for each baseball? ";
    cin >> rate;

    // Calculate the cost
    cost = amount * rate;

    // Display the cost
    cout << "You're team spent this much on baseballs: $" << cost << endl;


    return 0;
}