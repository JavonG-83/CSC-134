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

    const int SIDES = 6; // yours will differ!
    //int seed = 19;
    int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll;
    // roll a few times
    roll = ( (rand() % SIDES)+1 );
    cout << roll << endl;
    cout << endl;

}

// hmmmm,