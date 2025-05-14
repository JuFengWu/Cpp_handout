#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;
    // 建構子：用來初始化長度和寬度
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    Rectangle() {
        length = 10;
        width = 8;
    }

    // 計算面積的成員函數
    double area() {
        return length * width;
    }

    // 顯示矩形的資訊
    void display() {
        cout << "length: " << length << ", width: " << width << endl;
        cout << "area: " << area() << endl;
    }
};

int main() {
    // 創建 Rectangle 物件，並使用建構子初始化
    Rectangle rect(10.5, 5.5);

    // 顯示矩形資訊
    rect.display();

    // 創建 Rectangle 物件，並使用建構子初始化
    Rectangle rect2;

    // 顯示矩形資訊
    rect2.display();

    return 0;
}
