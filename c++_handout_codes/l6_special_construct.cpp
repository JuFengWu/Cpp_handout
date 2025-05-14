#include <iostream>
using namespace std;

class Circle {
  
public:
  double radius;
    Circle(double r) : radius(r) {}

    double getRadius() {
        return radius;
    }
};

int main() {
    // 創建 Rectangle 物件，並使用建構子初始化
    Circle circle(3);

    // 顯示矩形資訊
    auto r = circle.getRadius();

    std::cout << "radius: " << r << std::endl;

    return 0;
}