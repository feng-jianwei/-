#include <array>
#include<iostream>
#include<vector>

using namespace std;

int cnt = 0;
std::array<int, 10> tmp {};

vector<std::array<int, 10>> res;

void dfs(int deep, int n) {
    if (deep == 1) {
        tmp[10 - deep] = n;
        if (n <= 3)  ++cnt, res.emplace_back(tmp);
        return;
    }
    for (int i = 1; i <= n - deep + 1 && i <= 3; ++i) {
        tmp[10 - deep] = i;
        dfs(deep - 1, n - i);
    }
}

int main()
{
    int n;
    cin >> n;
    if (n < 10 || n > 30) {
        cout << 0;
        return 0;
    }
    dfs(10, n);
    cout << cnt << endl;
    for (auto &arr : res) {
        for (auto i = 0; i < 10; ++i) {
            cout << arr[i];
            i != 9 && cout << ' ';
        }
        cout << endl;
    }
    return 0;
}