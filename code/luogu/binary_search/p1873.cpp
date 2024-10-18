#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int l = 0, r = 4e5;
    while (l <= r) {
        int sum = 0;
        int mid = (l + r) >> 1;
        for (int i = 0; i < n; ++i) {
            if (arr[i] < mid) {
                continue;
            }
            sum += arr[i] - mid;
            if (sum >= m) {
                l = mid + 1;
                break;
            }
        }
        if (sum < m) {
            r = mid - 1;
        }
    }
    cout << r;
}