#include <iostream>
using namespace std;

// 基底類別
class Animal {
protected:
    string name;

public:
    Animal(string n) : name(n) {}

    void showName() {
        cout << "Animal name is: " << name << endl;
    }
};

// 子類別
class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void bark() {
        cout << name << " says: Woof!" << endl;  // 可以存取 protected 的成員
    }
};

int main() {
    Dog myDog("Buddy");
    myDog.showName();  // 呼叫public方法
    myDog.bark();      // 呼叫子類別的方法

    // 以下這行會編譯錯誤，因為 name 是 protected，不可在類別外部直接存取
    // cout << myDog.name << endl;

    return 0;
}
