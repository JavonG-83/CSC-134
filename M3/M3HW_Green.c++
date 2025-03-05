// CSC 134
// M3HW1 - Gold
// Javon Green
// 3/5/2025

// So today was a tornado watch day and the classroom is empty; class' been cancelled, but i'm still here. Wonderful

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>

using namespace std;

int main() {

    string joke;
    string jokechoice;
    string jokeanswer;

    cout << "Question 1" << endl; // write a simple chatbot using if statements
    cout << "Hello, I am Jokebot. Do you want to here a joke?" << endl;
    cout << "Yes / No" << endl;
    cout << endl;
    cin >> joke;
    cout << endl;

    if ("Yes"==joke) {
        cout << "Perfect! What kind of joke do you want to hear?" << endl;
        cout << "Clever / Dad" << endl;
        cin >> jokechoice;
        cout << endl;

        if ("Clever"==jokechoice) {
            cout << "Why did the kid cross the playground?" << endl;
            cin >> jokeanswer;
            cout endl;
            
            if ("togettotheotherslide"==jokeanswer) {
                cout << "How did you know? :O" << endl;
            }

            else {
                cout << "To get to the other slide!" << endl;
            }
        }

        if ("Dad"==jokechoice) {
            cout << "I told my girlfriend she drew her eyebrows too high;" << endl;
            cout << endl;
            cout << "She looked suprised!" << endl;
        }
    }

    else if ("No"==joke) {
        cout << "Aw man :(" << endl;
    }

    else {
        cout << "I didn't understand that" << endl;
        cout << "No joke for you!" << endl;
    }
    cout << endl;
}
