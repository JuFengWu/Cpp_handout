#include <iostream>
using namespace std;

int main() {
    int income;
    bool isMarried;

    cout << "enter income: ";
    cin >> income;

    cout << "is married? (1 for yes, 0 for no): ";
    cin >> isMarried;

    if (isMarried) {
        if (income > 80) {
            cout << "pay 12%" << endl;
        } else {
            cout << "pay 5%" << endl;
        }
    } else {
        if (income > 60) {
            cout << "pay 12%" << endl;
        } else {
            cout << "pay 5%" << endl;
        }
    }

    return 0;
}