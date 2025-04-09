#include <iostream>

#include <locale>
#include <codecvt>
#include <string>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::ios::sync_with_stdio(false);
    // up is for UTF-8
    int age = 25;
    float pi = 3.14159f;
    double e = 2.71828;
    char grade = 'A';
    std::cout << "age is: " << age << std::endl;
    std::cout << "pi is: " << pi << std::endl;
    std::cout << "自然對數底: " << e << std::endl;
    std::cout << "成績: " << grade << std::endl;
    bool isPassed = true;
    std::string name = "Alice";
    std::cout << "是否通過: " << (isPassed ? "是" : "否") << std::endl;
    std::cout << "姓名: " << name << std::endl;
    std::cout << "int 的大小: " << sizeof(int) << " 位元組" << std::endl;
    std::cout << "char 的大小: " << sizeof(char) << " 位元組" << std::endl;
    std::cout << "double 的大小: " << sizeof(double) << " 位元組" << std::endl;
}
