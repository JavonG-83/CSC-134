#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string storename = "Javon's Burgers";
    string foodname = "burger";
    double foodprice = 4.99;

//reciept var
    double subtotal, total;
    double taxpercent, taxcost;
// Order
    cout << "Hello; Welcome to " << storename << endl;
    cout << "You ordered one " << foodname << " and it's $" << foodprice << endl;
    cout << endl;

// Calculate subtotal, tax & total
    taxpercent = 0.08;
    subtotal = foodprice;
    taxcost = subtotal * taxpercent;
    total = subtotal + taxcost;

//Print the receipt
    cout << setprecision(2) << fixed;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax (8%): $" << taxcost << endl;
    cout << "Total:    $" << total << endl;

    cout << "Have a great day!" << endl;
    cout << endl;
    return 0;
}