#include <iostream>

using namespace std;

constexpr size_t MAX_NUM_CNT = 5000000 + 5;
int res[MAX_NUM_CNT];

int get_kth_elm(int b, int e, int k)
{
    auto mid = res[(b + e) >> 1];
    int idx = b, begin = b - 1, end = e + 1;
    while (idx < end) {
        if (res[idx] < mid) {
            swap(res[idx++], res[++begin]);
        } else if (res[idx] > mid) {
            swap(res[idx], res[--end]);
        } else {
            ++idx;
        }
    }
    if (k + b <= begin) {
        return get_kth_elm(b, begin, k);
    } else if (k + b >= end ) {
        return get_kth_elm(end, e, k - (end - b));
    } 
    return mid;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int num;
    for (int i = 0; i < n; ++i) {
        cin >> res[i];
    }
    cout << get_kth_elm(0, n - 1, k);
    return 0;
}