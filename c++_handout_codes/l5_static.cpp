#include <iostream>
using namespace std;

void countUp() {
    static int count = 0;  // ✅ 只初始化一次，記住上次的值
    count++;
    cout << "count = " << count << endl;
}

int main() {
    countUp();  // 輸出 count = 1
    countUp();  // 輸出 count = 2
    countUp();  // 輸出 count = 3
    return 0;
}