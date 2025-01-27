//CSC 134
// M1LAB - Apple Orchard
// Javon Green
// 1.27.2025
// NOTE: we'll be working with numbers that have decimals (doubles) and numbers without decimals (integers)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 string name = "Javon";
 int num_apples = 100;
 double price_each = 0.25;

    cout << "Welcome to the " << name << " apple farm. " << endl;
    cout << "We have " << num_apples << " apples in stock." << endl;
    cout << "Price per apple is: $" << price_each << endl;
    cout << endl;

    double total_cost = num_apples * price_each;

    cout << fixed << setprecision(2);
    cout << "The total for all "  << num_apples << " is $" << total_cost << endl;
cout << "" << endl;
return 0; 

}