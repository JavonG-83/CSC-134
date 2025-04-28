#include <iostream>
#include <limits>
#include <cstdlib>
#include <unistd.h>

using namespace std;

// CSC 134
// M5LAB1 - Choose Your Own Adventure
// Javon Green
// 3/26/2025

// use void functions to tell a simple story; user input validation requiered

void Homescreen();
void Start();
    
int main() {Homescreen();}

void Homescreen(){
    cout << "SUPER SIMPLE BATTLE SIMULATOR" << endl;
    cout << "[1] PLAY" << endl;
    cout << endl;
    int choice;
    cin >> choice;
    if (choice==1){
    cout << "The game begins.." << endl;
    Start();
    }
    else{
        cout << "Ending game..." << endl;
        cout << endl;
    }
}

void Start(){
    int choice;
    cout << "Wlecome to the game" << endl;
    cout << "How will you proceed?" << endl;
    cout << "[1] Walk to the front" << endl;
    cout << "[2] Walk around the back" << endl;
    cout << "[3] Veiw the house from afar" << endl;
    
    cout << endl;

    while (choice < 1 || choice > 3) {
    cin >> choice;
    if (choice<1 || choice>3 || cin.fail()) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "This house, it has your brain twisting and turning." << endl;
        cout << "So you wait." << endl;
        cout << "Time : " << Time << endl;
    }
    
    else if (choice==1){
        cout << "You walk to the front door" << endl;
        sleep(2);
        system("clear");
        sleep(1);
        FrontDoor();
    }
    else if (choice==2){
        cout << "You walk around to the back" << endl;
        sleep(2);
        system("clear");
        sleep(1);
        Back();
    }
    else if (choice==3){
        Veiw();
    }
}
}
