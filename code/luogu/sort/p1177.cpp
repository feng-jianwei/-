#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    cin >> n;
    int num;
    vector<int> res;
    res.reserve(num);
    for (int i = 0; i < n; ++i) {
        cin >> num;
        res.emplace_back(num);
    }
    sort(res.begin(), res.end());
    for (auto iter = res.begin(); iter != res.end(); iter++) {
        iter != res.begin() && cout << " ";
        cout << *iter; 
    }
    cout << endl;
    return 0;
}