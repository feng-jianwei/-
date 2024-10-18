#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Stu {
    int id {};
    int chinese{};
    int math{};
    int english{};
    bool operator <(const Stu& rhs) const
    {
        if (chinese + math + english != rhs.chinese + rhs.math + rhs.english) {
            return chinese + math + english > rhs.chinese + rhs.math + rhs.english;
        }
        if (chinese != rhs.chinese) {
            return chinese > rhs.chinese;
        }
        return id < rhs.id;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<Stu> stus;
    stus.reserve(n);
    Stu s;
    for (auto i = 0; i < n; ++i) {
        s.id = i + 1;
        cin >> s.chinese >> s.math >> s.english;
        stus.emplace_back(s.id, s.chinese, s.math, s.english);
    }
    sort(stus.begin(), stus.end());
    int cnt = 0;
    for (auto stu : stus) {
        ++cnt <= 5 && cout << stu.id << " " << stu.chinese + stu.math + stu.english << endl;
    }
    return 0;
}
