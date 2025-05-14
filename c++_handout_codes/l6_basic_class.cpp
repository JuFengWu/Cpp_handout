#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        void display() {
            cout << "x = " << x << endl;
        }
    };

int main() { 
    MyClass obj; // 創建 MyClass 類別的對象 obj
    obj.x = 5;
    obj.display();
    return 0;
}
