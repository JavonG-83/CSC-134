// CSC 134
// M2HW1 - GOLD
// Javon Green
// 2.26.2025

// We got a homework assignment. We got 4 different little segments to do

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    // Q1: simulate banking transactions

    double Astart;
    double Adeposit;
    double Awithdraw;
    string Aname;
    int Anumber;
    double Afinal;
    
    cout << "Please type your name" << endl;
    cin >> Aname;
    cout << "Please type your account number" << endl;
    cin >> Anumber;
    cout << endl;

    //this is how we get the name and account number

    cout << "What is your starting balance?" << endl;
    cin >> Astart;
    cout << "How much are you depositing?" << endl;
    cin >> Adeposit;
    cout << "How much are you withdrawing?" << endl;
    cin >> Awithdraw;
    cout << "Processing..." << endl;
    cout << endl;

    // some quick calculations
    Afinal = Astart + Adeposit - Awithdraw;

    cout << "Account name: " << Aname << endl;
    cout << "Account number: " <<Anumber << endl;
    cout << fixed << setprecision(2);
    cout << "Account balance : $" << Afinal << endl;
    cout << endl;

// Part 1 finished
}