#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    // 比較運算子
    cout << "a == b: " << (a == b) << endl; // false
    cout << "a != b: " << (a != b) << endl; // true
    cout << "a < b : " << (a < b) << endl;  // true

    // 邏輯運算子
    bool result = (a < b) && (b < 20);
    cout << "(a < b) && (b < 20): " << result << endl;

    int score;
    cout << "entor score: ";
    cin >> score;

    if (score >= 90) {
        cout << "score: A" << endl;
    } else if (score >= 80) {
        cout << "score: B" << endl;
    } else if (score >= 70) {
        cout << "score: C" << endl;
    } else if (score >= 60) {
        cout << "score: D" << endl;
    } else {
        cout << "score: F" << endl;
    }

    return 0;
}