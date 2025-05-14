#include <iostream>
class Rectangle {
    private:
        int width, height;  // 私有成員
    public:
        void setDimensions(int w, int h) { // 公開函數
            width = w;
            height = h;
        }
        int area() {
            return width * height;
        }
    };

int main() { 
    Rectangle rectangle; 
    rectangle.setDimensions(5, 10);
    auto area = rectangle.area();
    std::cout << "Area: " << area << std::endl;
    return 0;
}