#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int l, n, k;
    cin >> l >> n >> k;
    vector<int> nodes(n);
    for (int i = 0; i < n; ++i) {
        cin >> nodes[i];
    }
    int ans = 0;
    int left = 1, right = l;
    while (left <= right) {
        int mid = (left + right) >> 1;
        int cnt = 0;
        int now = 0;
        for (int i = 0; i < n; ++i) {
            cnt += ((nodes[i] - now - 1) / mid);
            now = nodes[i];
        }
        if (cnt > k) {
            left = mid + 1;
            continue;
        }
        ans = mid;
        right = mid - 1;
    }
    cout << ans;
}