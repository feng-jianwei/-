#include <iostream>
using namespace std;

int main()
{
    long n, m;
    cin >> n >> m;
    long sum = ((m + 1) * m / 2) * ((n + 1) * n / 2);
    auto minCol = min(n, m);
    long y = 0;
    for (auto i = 1; i <= minCol; ++i) {
        y += (n - i + 1) * (m - i + 1);
    }
    cout << y << ' ' << sum - y;
    return 0;
}