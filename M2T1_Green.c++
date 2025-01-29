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
 string farm_name = "Green";
 int num_apples = 100;
 double price_each = 0.25;
 string customer_name;
 int apples_bought;

    cout << "Hi, what's your name? " << endl;
    cin >> customer_name;
    cout << "Nice to meet you " << customer_name << endl;

    cout << "Welcome to the " << farm_name << " Farm." << endl;
    cout << "We have " << num_apples << " in stock" << endl;
    cout << "Price per apple is " << price_each << endl;
    cout << endl;

    double total_cost = num_apples * price_each;

// print answer
    cout << fixed << setprecision(2);
    cout << "The total for all "  << num_apples << " is $" << total_cost << endl;

// Make a deal
    cout << "How man apples do you want to buy?" << endl;
    cin >> apples_bought;
    double customer_cost = apples_bought * price_each;
    cout << "For " << apples_bought << " your total cost is " << customer_cost << endl;
    cout << endl;

return 0; 

}