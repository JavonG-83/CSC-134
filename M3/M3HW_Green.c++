// CSC 134
// M3HW1 - Gold
// Javon Green
// 3/5/2025

// So today was a tornado watch day and the classroom is empty; class' been cancelled, but i'm still here. Wonderful

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {

    string joke;
    string jokechoice;
    string jokeanswer;
    string progression;

    cout << "Question 1" << endl; // write a chatbot using if statements
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
            cout << endl;
            
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

    
    cout << "Type to start the next section" << endl;
    cin >> progression;
    cout << endl;
    cout << "Question 2" << endl; // receipt calculator using if statment
    cout << endl;

    double price = 4.00;
    int count;
    int eatingoption;

//reciept var
    double subtotal, total;
    double taxpercent, taxcost;
    double tippercent, tipcost;
// Order
    cout << "Welcome to The Burger Bar" << endl;
    cout << endl;
    cout << "Our burgers costs $" << price << endl;
    cout << "How many do you want?" << endl;
    cin >> count;
    cout << endl;
    cout << "You ordered " << count << " burgers for " << price << " each." << endl;
    cout << endl;
    cout << "Do you want to dine in or take out?" << endl;
    cout << "Dine in (1) / Take Out (2)" << endl;
    cout << "note, dining in will add a 15% tip on your meal (taxes excluded)" << endl;
    cin >> eatingoption;
    cout << endl;

    if (1==eatingoption) {
        cout << "Wonderful, please take a seat inside" << endl;
        tippercent = 0.15;
    }

    else if (2==eatingoption) {
        cout << "Great, we will bring you your order soon" << endl;
    }

    else {
        cout << "Sorry, I didn't understand that" << endl;
        cout << "We'll bring out your order soon" << endl;
    }

// Calculate subtotal, tax & total
    taxpercent = 0.08;
    subtotal = count * price;
    taxcost = subtotal * taxpercent;
    tipcost = subtotal * tippercent;
    total = subtotal + taxcost + tipcost;

//Print the receipt
    cout << setprecision(2) << fixed;
    cout << "----------------------------------" << endl;
    cout << setw(14) << "Subtotal: $" << subtotal << setw(10) << endl;
    cout << setw(14) << "Tax (8%): $" << taxcost << setw(10) << endl;
    cout << setw(14) << "Tip (15%): $" << tipcost << setw(10) << endl;
    cout << setw(14) << "total:    $" << total << setw(10) << endl;
        cout << "----------------------------------" << endl;
    cout << "Have a great day!" << endl;
    cout << endl;

    cout << "Type to start the next section" << endl;
    cin >> progression;
    cout << endl;
    cout << "Question 3" << endl; // simple choose your own adventure game
    cout << endl;

    int choice;
    int choice2;

    cout << "A robber stole from your shop!" << endl;
    cout << "How will you proceed?" << endl;
    cout << "Chase after him! (1) / Demand he stops. (2)" << endl;
    cin >> choice;

    if(1==choice) {
        cout << "You chase after him" << endl;
        cout << "He's faster than you" << endl;
        cout << "He escapes" << endl;
        cout << "You lost a loaf of bread, worth $3.95" << endl;
        }
    else if(2==choice) {
        cout << "You demand he stops" << endl;
        cout << "He freezes from your sheer itimidation" << endl;
        cout << "Now's your chance!" << endl;
        cout << "Lunge at him! (1) / Remind him HE MUST PAY (2)" << endl;
        cin >> choice2;
        if(1==choice2) {
            cout << "You leap over the counter while leaping for him" << endl;
            cout << "Thinking quickly, he runs out the door" << endl;
            cout << "You faceplant to the floor, defeated" << endl;
            cout << "But next time, HE WILL PAY" << endl;
        }
        else if(2==choice2) {
            cout << "You remind him that HE MUST PAY!" << endl;
            cout << "He hands over the loaf of bread and his wallet, before running away from the shop" << endl;
            cout << "Never to return" << endl;
            cout << "You retreive your loaf of bread, worth 3.95" << endl;
        }

        else {
            cout << "You stare at him, unable to think of your next course of action" << endl;
            cout << "He stares deep into your cold, lifeless eyes" << endl;
            cout << "He slowly places the bread on the counter and backs away while mainting eye contact" << endl;
            cout << "You stare into nothingness, undisturbed by time and space" << endl;
        }
    }
    
    else {
        cout << "Unable to think of a repsonse, he slowly moves farther and farther away" << endl;
        cout << "He escapes, but the worst has yet to come..." << endl;
        cout << "Your hit by a meteor" << endl;
    }

    cout << endl;
    cout << "Type to start the next section" << endl;
    cin >> progression;
    cout << endl;
    cout << "Question 4" << endl; // randomized math problem (single digit)
    cout << endl;


    int num1 = (rand() % 9);
    int num2 = (rand() % 9);
    int num3 = num1 + num2;
    double answer;

    cout << "Whats " << num1 << " + " << num2 << endl;
    cin >> answer;

    if (answer==num3){
        cout << "Good Job" << endl;
    }
    else if (21==answer){
        cout << "You stupid" << endl;
    }
    else {
        cout << "Incorrect" << endl;
    }



}
