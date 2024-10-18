#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        auto res = lower_bound(arr.begin(), arr.end(), x);
        if (*res == x) {
            cout << res - arr.begin() + 1 << ' ';
        } else {
            cout << -1 << ' ';
        }
    }
    return 0;
}