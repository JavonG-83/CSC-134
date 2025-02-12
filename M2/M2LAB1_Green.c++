// We need to make a program about crates, using formulas and calculations of course

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double length;
    double width;
    double height;

    // first we must ask for the dimensions of a crate
    cout << "Crate calculator (ft)" << endl;
    cout << "Enter the length of the crate" << endl;
    cin >> length;
    cout << "Next, enter the width of the crate" << endl;
    cin >> width;
    cout << "Now, enter the height of the crate" << endl;
    cin >> height;
    cout << endl;

    // Now, we can calculate volume, cost, charge & profit
    double costpercf = 0.23;
    double chargepercf = 0.5;
    // These two variables represent the cost and charge per cubic foot of the crate's volume
    double volume = length * width * height;
    double cost = volume * costpercf;
    double charge = volume * chargepercf;
    double profit = charge-cost;

    cout << "The volume of the crate is " << volume << " cubic feet."<< endl;
    cout << "This crate will cost $" << cost << endl;
    cout << "The customer should be charged $" << charge << " for the crate." << endl;
    cout << endl;
    cout << "Selling this crate would make a profit of $" << profit << endl;
    cout << endl;
}