// CSC 134
// M4HW - Times Tables
// JAVON GREEN
// 3/19/2025

#include <iostream>`
using namespace std;

void loop1();
void loop2();

double request;

int main (){
    cout << "Welcome, I am TableBot, and I type times tables.\n";
    cout << "Input a number from 1 to 12: ";
    loop1();
    cout << "\n";
    return 0;
}

void loop1(){
    cin >> request;
    if (1<=request && 12>=request){
        loop2();
    }
    else {
        cout << "\n";
        cout << "Sorry, I didn't catch that\n";
        loop1();
    }

}

void loop2(){
    cout << "Creating Table ... \n";
    
    double multiplier=1;
    while(multiplier<=12){
        cout << request << " * " << multiplier << " = " << request*multiplier << "\n";
        multiplier++;
    }
    multiplier = 0;
}