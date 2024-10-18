#include <functional>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, b;
    cin >> n >> b;
    vector<int> res;
    res.reserve(n);
    int num;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        res.emplace_back(num);
    }
    sort(res.begin(), res.end(), greater<int>());
    int cnt = 0;
    int sum = 0;
    for (auto row : res) {
        if (sum >= b) {
            break;
        } 
        sum += row;
        ++cnt;
    }
    cout << cnt << endl;
    return 0;
}