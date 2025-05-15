#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) : radius(r) {
        cout << "Circle constructor called, radius = " << radius << endl;
    }

    double getRadius() {
        return radius;
    }

    ~Circle() {
        cout << "Circle destructor called" << endl;
    }
};

int main() {
    // 用 new 在 heap 上建立物件
    Circle* cPtr = new Circle(10.0);  // 呼叫建構子

    cout << "The radius is: " << cPtr->getRadius() << endl;

    // 用 delete 釋放記憶體，會呼叫解構子
    delete cPtr;

    cout << "after call delete" << endl;

    return 0;
}