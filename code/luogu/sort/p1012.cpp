#include <functional>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    vector<string> res;
    res.reserve(n);
    for (int i = 0; i < n; ++i) {
        string num;
        cin >> num;
        res.emplace_back(move(num));
    }
    sort(res.begin(), res.end(), [](const string &a, const string &b) {return a + b > b + a;});
    for (auto &row : res) {
        cout << row;
    }
    return 0;
}