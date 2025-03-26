#include <iostream>
#include <limits>
#include <cstdlib>

using namespace std;

// CSC 134
// M5LAB1 - Choose Your Own Adventure
// Javon Green
// 3/26/2025

// use void functions to tell a simple story; user input validation requiered

void Homescreen();
void Story1();
void Choice1();
void Front();
void Back();
void Veiw();

int Time = 0;

int main() {
    Homescreen();
}

void Homescreen(){
    cout << "House of Old" << endl;
    cout << endl;
    cout << "[1] Start Game" << endl;
    cout << endl;
    int choice;
    cin >> choice;
    if (choice==1){
    cout << "The game begins.." << endl;
    Story1();
    }
    else{
        cout << "Ending game..." << endl;
        cout << endl;
    }
}

void Story1(){
    cout << "You stand at the front of an old house" << endl;
    cout << "How will you proceed?" << endl;
    cout << "[1] Walk to the front" << endl;
    cout << "[2] Walk around the back" << endl;
    cout << "[3] Veiw the house from afar" << endl;
    Choice1();
}

void Choice1(){
    int choice;
    cout << endl;

    while (choice < 1 || choice > 3) {
    cin >> choice;
    if (choice<1 || choice>3 || cin.fail()) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "This house, it has your brain twisting and turning." << endl;
        cout << "So you wait." << endl;
        Time = Time + 5;
        cout << "Time : " << Time << endl;
    }
    
    else if (choice==1){
        Front();
    }
    else if (choice==2){
        Back();
    }
    else if (choice==3){
        Veiw();
    }
} 
}

void Front(){
    cout << "You walk to the front door." << endl;
    cout << "There's a door, and a window." << endl;
    
}
void Back(){}
void Veiw(){}