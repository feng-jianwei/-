#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{   
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    auto iter = arr.begin();
    long res = 0;
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        iter = lower_bound(iter, it, *it - c);
        auto upper = upper_bound(iter, it, *it - c);
        res += upper - iter;
    }
    cout << res;
    return 0;
}