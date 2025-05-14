#include <iostream>
using namespace std;

// Base class: Animal
class Animal {
public:
    // Member function of the base class
    void eat() {
        cout << "This animal is eating" << endl;
    }
    
    void sleep() {
        cout << "This animal is sleeping" << endl;
    }
};

// Derived class: Dog, inherits from Animal
class Dog : public Animal {
public:
    // Member function of the derived class
    void bark() {
        cout << "Woof woof!" << endl;
    }
};

int main() {
    // Create a Dog object
    Dog myDog;
    
    // Derived class can use base class functions
    myDog.eat();    // From the base class Animal
    myDog.sleep();  // From the base class Animal
    myDog.bark();   // From the derived class Dog

    return 0;
}
