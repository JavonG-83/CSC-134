// CSC 134
// Javon Green
// 3.17.2025
// M4LAB1 - Astrik Grid (Difference between while and for)

#include <iostream>
using namespace std;

int main (){
    string pattern = "* ";
    int WIDTH = 8;
    int HEIGHT = 5;

    int count = 0;
    while (count < WIDTH) { // while will repeat until the condition is met
        cout << pattern;    // print the pattern and stay on the same line
        count ++;
    }
    cout << endl;

    count = 0;
    while (count < HEIGHT) {
        cout << pattern << endl;    // print the pattern and move to a different line
        count ++;
    }
    cout << endl;

    // for places an integer inside of the condition box. It repeats a specified amount of times
    cout << "Row" << endl;
    for (int i=0; i<WIDTH; i++) { // new integer; if integer is less than width; add to integer; start the rest and repeat
        cout << pattern;
    }
    cout << endl;

    cout << "Column" << endl;
    for (int i=0; i<HEIGHT; i++) { // same thing, now with height
        cout << pattern << endl;
    }
    cout << endl;

    cout << "Give me a width\n";
    cin >> WIDTH;
    cout << "Give me a height\n";
    cin >> HEIGHT;
    cout << "\n";

    cout << "Square of " << WIDTH << " by " << HEIGHT << endl;
    for (int h=0; h<HEIGHT; h++) {  // new value; value less than height; add, carry out & repeat;
        for (int w=0; w<WIDTH; w++) {   // new value, value leess than width; add carry out & repeat;
            cout << pattern;
        }
        cout << endl;   //it's still inside of the height command, so it will repeat the whole function on the next line
    }
    
}