#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;
    
    cout << "enter your name: "; 
    cin >> name;
    cout << "your name is " << name << endl;
    cout << "enter your age: ";
    cin >> age;
    cout << "your age is " << age << endl;

    int a = 10, b = 3;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    int total = 7;
    int count = 2;

    // 自動轉型（會損失精度）
    double avg1 = total / count;  // = 3

    // 強制轉型
    double avg2 = double(total) / count;  // = 3.5


    cout << "avg1: " << avg1 << endl;
    cout << "avg2: " << avg2 << endl;
    
    return 0;
}