#include <iostream>
using namespace std;

int main() {
    int count = 1;
    while (count <= 5) {
        cout << "Count is: " << count << endl;
        count++;
    }
    

    int number = 1;
    do {
        cout << "Number is: " << number << endl;
        number++;
    } while (number <= 5);
    

    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i << endl;
    }

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        cout << "break i = " << i << endl;
    }
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << "continue i = " << i << endl;
    }

    return 0;
}