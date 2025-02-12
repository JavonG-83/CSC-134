// CSC 134
// M2T2 - Reciept calculator
// Javon Green
// 1.29.2025 (I think)
// NOTE: We're taking what we learned from M2T1 and mixing it with more formulas; we make a receipt

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string storename = "Javon's Hotdogs";
    string foodname = "Hotdog";
    double foodprice = 2.99;
    int hotdogcount;

//reciept var
    double subtotal, total;
    double taxpercent, taxcost;
// Order
    cout << "Hello, and welcome to " << storename << endl;
    cout << endl;
    cout << "Our " << foodname << "s costs " << foodprice << endl;
    cout << "How many do you plan on ordering?" << endl;
    cout << endl;
    cin >> hotdogcount;
    cout << endl;
    cout << "You ordered " << hotdogcount << " " << foodname << "s for " << foodprice << " each." << endl;
    cout << endl;

// Calculate subtotal, tax & total
    taxpercent = 0.08;
    subtotal = hotdogcount * foodprice;
    taxcost = subtotal * taxpercent;
    total = subtotal + taxcost;

//Print the receipt
    cout << setprecision(2) << fixed;
    cout << "----------------------------------" << endl;
    cout << setw(14) << "Subtotal: $" << subtotal << setw(10) << endl;
    cout << setw(14) << "Tax (8%): $" << taxcost << setw(10) << endl;
    cout << setw(14) << "Total:    $" << total << setw(10) << endl;
        cout << "----------------------------------" << endl;
    cout << "Have a great day!" << endl;
    cout << endl;
    return 0;
}