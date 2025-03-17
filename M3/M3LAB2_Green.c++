// Javon Green
// 3.15.2025
// CSC 134
// M3LAB2 - Grading System

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // We got a grading system to be made, using ranges inside the if statment

    double number;
    string grade;

    cout << "Enter your NUMBER grade" << endl; // Ask for input
    cin >> number;

    if (number>=90&&number<=100){ // we gotta use "&&" to represent an and function
        cout << "Your grade is an A" << endl;
    }
    else if (number>=80&&number<=89){
        cout << "Your grade is a B" << endl;
    }
    else if (number>=70&&number<=79){
        cout << "Your grade is a C" << endl;
    }
    else if (number>=60&&number<=69){
        cout << "your grade is a D" << endl;
    }
    else { //using "number<=59" includes letters as well, so didn't include it
        cout << "Your grade is definently an F" << endl;
    } // if you type below a 60, or somehow a letter, your definelty failing
    cout << endl;
}

// easy peasy lemon squeezy