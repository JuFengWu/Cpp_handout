#include <iostream>
using namespace std;

// 函數宣告，接受指標作為參數
void updateValue(int *ptr) {
    *ptr = 20;  // 通過指標修改變數的值
}

void noUpdateValue(int num) {
    num = 80;  // 修改的是函數內的本地變數，不會影響外部變數
}

int main() {
    int num = 10;

    cout << "num value befroe pass " << num << endl;
    
    // 傳遞 num 的地址給函數
    updateValue(&num);

    
    cout << "num value after pass " << num << endl;

    
    noUpdateValue(num);

    cout << "num value after noUpdateValue " << num << endl;

    return 0;
}