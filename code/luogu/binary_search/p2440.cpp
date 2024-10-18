#include <iostream>
#include <vector>

using namespace std;
constexpr int L_MAX = 1e8;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> treeLen(n);
    for (int i = 0; i < n; ++i) {
        cin >> treeLen[i];
    }
    int l = 1, r = L_MAX;
    while (l <= r) {
        int sum {};
        int mid = (l + r) >> 1;
        for (auto len : treeLen) {
            sum += len / mid;
        }
        if (sum >= k) {
            l = mid + 1;
            continue;
        }
        if (sum < k) {
            r = mid - 1;
        }
    }
    cout << r;
    return 0;
}