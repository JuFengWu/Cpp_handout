#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Some animal sound" << endl;
    }

};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat: Meow!" << endl;
    }
};

int main() {
    string input;
    cout << "請輸入動物類型 (dog / cat): ";
    cin >> input;

    Animal* animal = nullptr;

    if (input == "dog") {
        animal = new Dog();
    } else if (input == "cat") {
        animal = new Cat();
    } else {
        cout << "未知的動物類型。" << endl;
        return 1;
    }

    animal->speak();  // 多型發生！

    return 0;
}
