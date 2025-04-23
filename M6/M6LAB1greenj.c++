//GreenJ - 4.23.2025
//CSC 134 - M6LAB1
//ARRAYS & VECTORS

#include <vector>
#include <iostream>
using namespace std;

int main(){
cout << "EXAMPLE 1: ARRAY" << endl;
// consists of red and black shells
const int RED = 1;
const int BLACK = 0;
const int EMPTY = -1;

string shell_names[] = {"RED", "BLACK", "EMPTY"};

//example one: basic array
int magazine[] = {RED, BLACK, BLACK, RED};

    for (int shell : magazine){
        string name = shell_names[shell];
        cout << "Next Shell: " << name << endl;
    }

cout << endl;
cout << "EXAMPLE 2 : VECTOR" << endl;

    //example 2 : stl vector
vector<int> mag;
    //load the mag
mag.push_back(RED);
mag.push_back(BLACK);
mag.push_back(EMPTY);

    for (int shell : mag){
        string name = shell_names[shell];
        cout << "Next Shell: " << name << endl;
    }
}