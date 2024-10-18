#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> res;
    cin >> n;
    res.reserve(n);
    for (auto i = 0; i < n; ++i) {
        int num;
        cin >> num;
        res.emplace_back(num);
    }
    int cnt = {};
    for (auto i = 0; i < n; ++i) {
        for (auto j = i - 1; j >= 0; --j) {
            if (res[j] <= res[j + 1]) {
                break;
            }
            swap(res[j], res[j + 1]);
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}