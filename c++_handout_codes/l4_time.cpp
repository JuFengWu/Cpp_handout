#include <iostream>
#include <chrono>

using namespace std;

int main() {
    // 取得起始時間
    auto start = chrono::high_resolution_clock::now();

    // 執行一些操作（例如計算）
    long long sum = 0;
    for (long long i = 1; i <= 1000000000; ++i) {
        sum += i;
    }

    // 取得結束時間
    auto end = chrono::high_resolution_clock::now();

    // 計算時間差（duration）
    chrono::duration<double> duration = end - start;

    // 輸出結果
    cout << "time sum: " << sum << endl;
    cout << "running time: " << duration.count() << " second " << endl;

    return 0;
}