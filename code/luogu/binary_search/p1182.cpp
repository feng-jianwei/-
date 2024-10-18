#include <iostream>
#include <vector>

using namespace std;
constexpr int MAX_ANS = 1e9;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> res(n);
    int l = 1;
    for (int i = 0; i < n; ++i) cin >> res[i], l = max(l, res[i]);
    int r = 1e9;
    int ans = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (sum + res[i] > mid) {
                sum = res[i];
                ++cnt;
                continue;
            }
            sum += res[i];
        }
        cnt += (sum > 0);
        if (cnt > m) {
            l = mid + 1;
        } else {
            ans = mid;
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}