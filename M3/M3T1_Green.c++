// CSC 134
// M3T1 - "If" statement
// Javon Green
// 2.24.2025



    #include <iostream>
    #include <iomanip>
    using namespace std;

int main()
{
    // So we will be using the if statement for more responsive interactions with the user
    // "if" statements looks liek this:

    int test;

    // First, we get the user's respones
    cout << "Pick any number between 1 and 7" << endl;
    cout << endl;
    cin >> test;
    cout << endl;

    // Then, we start usign the if statment

    // This is how we write if statement:
    // We use two equal signs to compare
    // The expected input comes before the variable
    // Use the SUPER COLONS to surround the results
    if (4 == test) {
     cout << "You chose the right number" << endl;
     cout << "YOU WIN" << endl;
    }

// We can use "else if" to add more special respones for inputs
    else if ( 3 == test) {
        cout << "You chose the wrong number, but it's a special lose this time" << endl;
        cout << "YOU LOSE" << endl;
        cout << "SPECIALLY" << endl;
    }
    
// Using "else" writes a respone for all other possible input values
    else {
        cout << "You chose the wrong number" << endl;
        cout << "YOU LOSE" << endl;
    }

    cout << endl;
}

// That was fairly simple