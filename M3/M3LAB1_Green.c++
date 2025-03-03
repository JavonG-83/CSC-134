// CSC 134
// Module 3 << Lab 1
// Javon Green
// 3.3.2025

#include <iomanip>
#include <iostream>

void door1();
void door2();
void door3();
// these will come into play later

using namespace std;
    int main() { 
        
        string progression;

    // so we got 3 different programs we need to run
    // first one up is the hello world script

        cout << "Hello World" << endl;
        cout << endl;

    // i'm suprised I rememebred that much

        cout << "Input to progress" << endl;
        cin >> progression;
        cout << endl;
        cout << "Progressing..." << endl;
        cout << endl;
     // Imma start using this format to progress through programs


    // Next we use the if statement to interact with the user

        int choice;

        cout << "Will you cross the river (1) or the forest? (2)" << endl;
        cin >> choice;

        if (1==choice) {
            cout << "You manage to swim through the river" << endl;
        }

        else if (2==choice){
            cout << "You traverse the forest and get to the otherside" << endl;
        }

        else {
            cout << "You stare at at your options, before turning the other way" << endl;
        }
        
        cout << endl;

        // real simple, real easy

        cout << "Input to progress" << endl;
        cin >> progression;
        cout << "Progressing.." << endl;
        cout << endl;


// lastly, we get to use some functions
// since we started programing, we held everything inside "main"
// now we'll be inserting stuff outside of the main fuction, and it'll still have an effect
// to do this, we will use the "void" function
// thwe already told the program the function exists, but we have to define them later

        int choice2;

        // asking the question
        cout << "You have three doors in front of you." << endl;
        cout << "Which door will you choose?" << endl;
        cin >> choice2;
        cout << endl;

        if (1==choice2) {
            door1();
        }

        else if (2==choice2){
            door2();
        }

        else if (3==choice2) {
            door3();
        }

        else {
            cout << "Sorry, that respones is INVALID" << endl;
            cout << "Your hit by a meteor" << endl;
        }

        cout << endl;
        cout << "End of Programs" << endl;
        cout << endl;
    }

// now that we are ourside the "main" we can define the void functions

    void door1(){
        cout << "You won $3.95" << endl;
    }   // it looks very similar to any other function

    void door2(){
        cout << "You lost $3.95" << endl;
    }

    void door3(){
        cout << "There's nothing behind the door" << endl;
    }

// so we can use this stuff to stay organized an keep the main short and simple
// that's all for this option