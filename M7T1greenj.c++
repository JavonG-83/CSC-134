// GreenJ - 4.29.2025
// CSC134
// M7T1 - Restaurant Rating Program

#include <iostream>
using namespace std;

class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
    Restaurant() {
        // does nothing
    }
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    void showInfo(){
        cout << "Restauraunt Name: " << name << endl;
        cout << "Rating: " << rating << endl;
    }
}

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    cout << endl;
    // make a restaurant
    Restaurant rest1 = Restaurant("Mi Casita", 0.5);
    // ask for a reveiw
    Restaurant rest2 = Restaurant();
    // show data

    string name;
    double rating;
    cout << "Restaurant Name: ";
    cin >> name;
    cout << "Restaurant Rating: ";
    cin >> rating;
    if (rating>4.5 && rating < 5) {cout << ">:(" << endl;}
    rest2.setName(name);
    rest2.setRating(rating);
cout << "-----------------" << endl;
    rest1.showInfo();
    rest2.showInfo();
} 