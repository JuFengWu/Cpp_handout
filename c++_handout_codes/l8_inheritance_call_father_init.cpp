#include <iostream>
using namespace std;

class Animal {
protected:
    string name;

public:
    // 父類別建構子
    Animal(string n) {
        name = n;
        cout << "Animal constructor called. Name: " << name << endl;
    }
};

class Dog : public Animal {
public:
    // 子類別建構子，透過初始化列表呼叫父類別建構子
    Dog(string n) : Animal(n) {
        cout << "Dog constructor called." << endl;
    }
};

int main() {
    Dog myDog("Buddy");
    return 0;
}
