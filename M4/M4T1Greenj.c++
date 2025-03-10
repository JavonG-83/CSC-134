// CSC-134
// Javon Green
// "while" function
// 3/10/2025

#include <iostream>
using namespace std;

int main(){
    int number = 1;

    // 5-3

    while (number <= 5){
        cout << "Hello\n";
        number++;
    }
    cout << "Goodbye\n";

    cout << "\n";
    cout << "Progressing to step 2\n";
    cout << "\n";

    // 5-6

    int MIN_NUMBER = 1;
    int MAX_NUMBER = 10;
    
    int num = MIN_NUMBER;
    
    cout << "Number Square\n";
    cout << "______________\n";

    while (num <= MAX_NUMBER) {
        cout << num << "\t" << (num*num) << "\n";
        num++;
    }
    cout << "\n";
    cout << "End of program\n";
    return 0;
}