#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int l, n, m;
    cin >> l >> n >> m;
    vector<int> lens(n);
    for (int i = 0; i < n; ++i) {
        cin >> lens[i];
    }
    lens.emplace_back(l);
    int left = 0, right = l;
    while (left <= right) {
        int mid = (left + right) >> 1;
        int now = 0;
        int cost = m;
        for (int i = 0; i < n + 1; ++i) {
            if (lens[i] - now < mid) {
                --cost;
                continue;
            }
            now = lens[i];
        }
        if (cost >= 0) {
            left = mid + 1;
            continue;
        }
        right = mid - 1;
    }
    cout << right;
    return 0;
}