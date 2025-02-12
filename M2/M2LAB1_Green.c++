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
    cout << "Crate calculator" << endl;
    cout << "Enter the length of the crate" << endl;
    cin >> length;
    cout << "Now, enter the width of the crate" << endl;
    cin >> width;
    cout << "Now, enter the height of the crate" << endl;
    cin >> height;
    cout << endl;

    double volume = length * width * height;
    cout << volume << endl;
}