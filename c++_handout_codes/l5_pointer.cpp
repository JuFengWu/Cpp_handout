#include <iostream>
using namespace std;

int main() {
    int num = 10;          // 定義一個整數變數
    int *ptr = &num;       // 定義一個指向整數的指標，並將其指向 num 的記憶體地址

    cout << "num value: " << num << endl;         // 輸出 num 的值
    cout << "*ptr is " << *ptr << endl;    // 使用指標解引用，輸出 ptr 指向的值
    cout << "ptr address: " << ptr << endl; // 輸出 ptr 的地址
    cout << "num address: " << &num << endl; // 輸出 num 的地址

    // 修改 num 的值
    *ptr = 20;

    cout << "modify num : " << num << endl;  // 輸出修改後的 num 值
    cout << "*ptr is " << *ptr << endl;    // 輸出修改後的 ptr 指向的值

    int num2 = 10;             // 定義一個整數變數
    int *ptr2 = &num2;          // 定義一個指向整數的指標 ptr，並將其指向 num 的記憶體地址
    int **dptr2 = &ptr2;        // 定義一個雙重指標 dptr，並將其指向 ptr 的記憶體地址

    cout << "num2 is: " << num2 << endl;              // 輸出 num 的值
    cout << "ptr2 is " << *ptr2 << endl;         // 輸出 ptr 指向的值
    cout << "dptr2 is " << **dptr2 << endl;      // 使用雙重指標解引用，輸出 dptr 指向的值

    // 修改 num 的值
    **dptr2 = 20;

    cout << "modify num2 " << num2 << endl;       // 輸出修改後的 num 值
    cout << "ptr2 is " << *ptr2 << endl;         // 輸出 ptr 指向的值
    cout << "dptr2 is " << **dptr2 << endl;      // 輸出 dptr 指向的值

    return 0;
}
