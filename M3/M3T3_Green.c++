// CSC 134
// M3T3 - CRAPS
// 3/5/2025
// Javon Green

#include <iostream>
#include <iomanip>
#include <cmath>    
#include <ctime>

using namespace std;

int main() {

    const int SIDES = 12; // we need 12 sides to play
    int seed = time(0); // we need te seed, as always
    srand(seed);
    int roll;
    roll = ( (rand() % SIDES)+1 );

    // multiple numbers give different results
    // so I'm gonna use THE OR STATEMENT

    if (7==roll || 11==roll){ //these are the winning numbers; "||" represents OR in c++
        cout << roll << endl;
        cout << "YOU WIN $3.95!" << endl;
    }
    else if (2==roll || 3==roll || 12==roll){ //these are the loosing numbers
        cout << roll << endl;
        cout << "YOU LOOSE $3.95!" << endl;
    }
    else{ //other numbers become "point" and a bunch of other stuff happens
        // lucky for us, we don't have to do that rn
        cout << roll << endl;
        cout << "YOU...HAVE YET TO WIN OR LOOSE?" << endl;
        cout << "TRIAL ENDED" << endl;
        cout << "DOWNLOAD FULL GAME ON STEAM" << endl;
    }
    cout << endl;
}