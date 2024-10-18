#include <compare>
#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Stu {
    int id {};
    int y{}, m{}, d{};
    string name;
    bool operator < (const Stu& rhs) const
    {
        if (y != rhs.y) {
            return y < rhs.y;
        }
        if (m != rhs.m) {
            return m < rhs.m;
        }
        if (d != rhs.d) {
            return d < rhs.d;
        }
        return id > rhs.id;
    }
};

int main()
{
    int n;
    cin >> n;
    string name;
    vector<Stu> stus;
    stus.reserve(n);
    int y, m, d;
    for (int i = 0; i < n; ++i) {
        cin >> name >> y >> m >> d;
        stus.emplace_back(i + 1, y, m, d, name);
    }
    sort(stus.begin(), stus.end());
    for (auto &stu : stus) {
        cout << stu.name << endl;
    }
    return 0;
}