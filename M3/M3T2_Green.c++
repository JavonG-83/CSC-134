// CSC 134
// Javon Green
// 2.26.2025
// M3T2 - GAMBLING

// MY favorite thing in the world

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{

    const int SIDES = 10;
    int seed = time(0);
    srand(seed);
    int roll;
    roll = ( (rand() % SIDES)+1 );
    cout << roll << endl;
    cout << endl;
}

// hmmmm