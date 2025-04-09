#include <iostream>
#include <vector>
using namespace std;

int main() {
    int scores[5] = {80, 75, 90, 60, 85};

    for (int i = 0; i < 5; i++) {
        cout << "Score " << i << ": " << scores[i] << endl;
    }

    vector<int> scores2 = {80, 75, 90, 60, 85};
    for (int i = 0; i < scores2.size(); i++) {
        cout << "Score2 " << i << ": " << scores2[i] << endl;
    }

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }

    return 0;
}