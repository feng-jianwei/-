#include <iostream>
#include <iterator>
#include <type_traits>
using namespace std;

constexpr int MAX_NUM = 1000;
int arr[MAX_NUM + 5] = {};

int main()
{
    int n;
    cin >> n;
    int lastNum;
    int curNum;
    for (int i = 0; i < n; ++i) {
        cin >> curNum;
        if (i == 0) {
            lastNum = curNum;
            continue;
        }
        auto diff = curNum - lastNum;
        if (abs(diff) > MAX_NUM) {
            cout << "Not jolly" << endl;
            return 0;
        }
        arr[abs(diff)] = 1;
        lastNum = curNum;
    }
    for (auto i = 1; i < n; ++i) {
        if (arr[i] == 0) {
            cout << "Not jolly" << endl;
            return 0;
        }
    }
    cout << "Jolly" << endl;
    return 0;
}