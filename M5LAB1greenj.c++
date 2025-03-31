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
void Story1();
void Start();
    void FrontDoor();
        //void MainRoom();
    void Back();
        void Grave();
        void Shed();
        //void Veiw();
    void Veiw();

int flashlight = 0;
int key_smooth = 1;
int shed_open = 0;

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
    Start();
    }
    else{
        cout << "Ending game..." << endl;
        cout << endl;
    }
}

void Start(){
    int choice;
    cout << "You stand at the front of an old house" << endl;
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
        Time = Time + 5;
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

void FrontDoor(){
    int choice;
    cout << "You walk to the front door." << endl;
    cout << "There's a door, and a window." << endl;
    cout << "How will you proceed?" << endl;
    cout << "[1] Door" << endl;
    cout << "[2] Window" << endl;
    cout << "[3] Back" << endl;
    while (choice != 3) {
        cin >> choice;
        if (choice<1 || choice>3 || cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "You gaze into space" << endl;
            Time = Time + 1;
            cout << "Time : " << Time << endl;
        }
        
        else if (choice==1){
            cout << "The door is locked" << endl;
        }
        else if (choice==2){
            cout << "Curtains block the way." << endl;
            cout << "You can see the word 'END' Ingraved into the window" << endl;
            cout << "Not ominous at all :";
        }
        else if (choice==3){
            cout << "You walk back to the front" << endl;
            sleep(2);
            system("clear");
            sleep(1);
            Start();
        }

    }
}
void Back(){
    int choice;
    cout << "You stand at the back of the house" << endl;
    cout << "How will you proceed?" << endl;
    cout << endl;
    cout << "[1] Walk over to the grave" << endl;
    cout << "[2] Head to the Shed" << endl;
    cout << "[3] Look through the window" << endl;
    cout << "[4] Head back to the front" << endl;
    
    while (choice != 4) {
        cin >> choice;
    if ( choice<1 || choice>5 || cin.fail() ) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "You gaze into time" << endl;
        Time = Time + 1;
        cout << "Time : " << Time << endl;
        }
    
    else if (choice==1){
        if (choice==1){
            cout << "You walk towards the grave" << endl;
            sleep(2);
            system("clear");
            sleep(1);
            Grave();
        }
    }

    else if (choice==2){
        if (shed_open==0){
            if(key_smooth==0){
                cout << "The door is locked" << endl;
                cout << "The keyhole has a smooth shape" << endl;
            }
            else if(key_smooth==1){
                cout << "You use the smoothed key" << endl;
                shed_open = 1;
                cout << "The door is unlocked" << endl;
            }
        }
        else if(shed_open==1){
            cout << "You head into the shed" << endl;
            sleep(2);
            system("clear");
            sleep(1);
            Shed();
        }
    }

    else if (choice==3){
        cout << "You peek at the window" << endl;
        if (key_smooth == 0){
            cout << "A key stands on the windowsheild" << endl;
            key_smooth = 1;
            cout << "Got Smooth Key : " << key_smooth << endl;
        }
        else if (key_smooth==1){
            cout << "Nothing happens" << endl;
        }
    }

    else if (choice==4){
        cout << "You walk back to the front" << endl;
        sleep(2);
        system("clear");
        sleep(1);
        Start();
    }
    }
}

void Veiw(){}
void Shed(){
    cout << "fin" << endl;
}
void Grave(){
    cout << "You stand infront of a grave" << endl;
    cout << "How will you proceed?" << endl;
    cout << "[1] Observe" << endl;
    cout << "[2] Leave" << endl;

while (choice != 2) {
    cin >> choice;
if ( choice<1 || choice>2 || cin.fail() ) {
    cin.clear(); // Clear the error flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    cout << "You gaze at the grave" << endl;
    cout << "It didn't help at all"
    Time = Time + 1;
    cout << "Time : " << Time << endl;
    }
else if (choice==1){
    cout << "You look at the grave" << endl;
    cout << "There's something stuck in the ground" << endl;
    cout << "[1] Pull it with force you might" << endl;
    cout << "[2] Dig it out Just leave it" << endl;
    cout << "[3] Leave and retreat" << endl;
}
}
}