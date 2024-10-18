#include <iostream>

using namespace std;

constexpr int MAX_NUM = 1000;

int main()
{
    int arr[MAX_NUM + 5] = {};
    int n;
    cin >> n;
    int num;
    int cnt {};
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (arr[num] == 1) {
            continue;
        }
        arr[num] = 1;
        ++cnt;
    }
    cout << cnt << endl;
    for (int i = 0; i < MAX_NUM + 5; ++i) {
        if (arr[i] == 1) {
            cout << i << " ";
        }
    }
    return 0;
}