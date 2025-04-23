// Work with dnd stats in an array

#include <iostream>
using namespace std;

int main(){
    const int NUM_STATS = 4;
    const int STR = 0;
    const int DEX = 1;
    const int LCK = 2;
    const int WIS = 3;

    int stats[NUM_STATS];
    string stat_names[] = {"STR","DEX","LCK","WIS"};
    int current_stat;
    double total_stats;
    double average_stats;

    cout << "Please enter you character stats." << endl;
    for (int i=0; i<NUM_STATS; i++) {
        cout << stat_names[i] << ": ";
        cin >> current_stat;
        stats[i] = current_stat;
    }

    cout << "STR: " << stats[STR];
}
