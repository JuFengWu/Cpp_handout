#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 父類別
class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound." << endl;
    }

    virtual ~Animal() {}  // 為了能正確刪除子類別物件
};

// 子類別 Dog
class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks: Woof!" << endl;
    }
};

// 子類別 Cat
class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows: Meow!" << endl;
    }
};

int main() {
    vector<Animal*> animals;  // 儲存父類別指標

    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Dog());

    // 利用多型逐一呼叫各自的 speak()
    for (Animal* a : animals) {
        a->speak();
    }

    // 清除記憶體
    for (Animal* a : animals) {
        delete a;
    }

    return 0;
}
