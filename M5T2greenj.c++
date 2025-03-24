//CSC 134
//JavonG
//3.24.2025
//M5T2

//TODO:
// Make a list
// Use "findsquare" to find the square
// Use "findsquare" inside of "print line" to create a line of the table
// In the main space, use "for" to create the table

int number=0;
int answer;

#include <iostream>
using namespace std;

void print_line(int number, int square);

int main() {
    cout << "Number \t Square" << endl;
    cout << "________________" << endl;
    for (int num=1; num<=10; num++) {
    number++;
    int square=0;
    print_line(number, square);
    }
}

int find_square(int answer) {
    answer = number * number;
    return answer;
}

void print_line(int number, int square) {
    cout << number << "\t" << find_square(answer) << endl;
}

// FFFFFFIIIIIIIIINNAALLYYYYY