// CSC 134
// M2LAB1 - Crate Calculator
// Javon Green
// 2.12.2025

// We need to make a program about crates, using formulas and calculations of course
// This will require us to determine the volume of the crate before crating the cost, the amount we should charge, and the overall profit if sold 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// first we start off establishing these threee variables
    double length;
    double width;
    double height;

// first we must ask for the dimensions of a crate
    cout << "General Crates Inc." << endl;
    cout << "Crate calculator (ft)" << endl;
    cout << endl;
    cout << "Enter the length of the crate " << endl;
    cin >> length;
    cout << "Next, enter the width of the crate" << endl;
    cin >> width;
    cout << "Now, enter the height of the crate" << endl;
    cin >> height;
    cout << endl;

// These two variables represent the cost and charge per cubic foot of the crate's volume, customizable in case of change
    double costpercf = 0.23;
    double chargepercf = 0.5;

// Now we can calculate volume, cost, charge & profit
    double volume = length * width * height;
    double cost = volume * costpercf;
    double charge = volume * chargepercf;
    double profit = charge-cost;

// We then can write this to the user and end off this program
    cout << fixed << setprecision(2);
    cout << "This crate has a volume of " << volume << " cubic feet."<< endl;
    cout << "This crate will cost $" << cost << endl;
    cout << "The customer should be charged $" << charge << " for the crate." << endl;
    cout << endl;
    cout << "Selling this crate would make a profit of $" << profit << endl;
    cout << endl;
}