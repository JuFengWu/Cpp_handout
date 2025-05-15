#include <iostream>
using namespace std;

// 函式內用 new 配置一個整數，回傳指標
int* createInt() {
    int* p = new int;  // 在 heap 配置記憶體
    *p = 100;        // 設定值
    return p;          // 回傳指標
}

int* createIntCompare() {
      
    int a = 3;  
    int* p;
    p = &a;        
    return p;          
}

void messUpStack() {
    int temp[1000];   // 大量 stack 空間干擾
    for (int i = 0; i < 100; ++i) {
        temp[i] = i;
    }
}

int main() {
    int* ptr = createInt();  // 呼叫函式，取得動態配置的記憶體指標

    cout << "Value pointed by ptr: " << *ptr << endl;  // 輸出 100

    delete ptr;  // 釋放記憶體，避免記憶體洩漏

    int* ptr2 = createIntCompare();

    messUpStack();  // 這行會導致 stack overflow
    
    cout << "Value pointed by ptr: " << *ptr2 << endl;

    return 0;
}
