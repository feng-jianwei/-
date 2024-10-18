#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int s[4] = {};
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    int ans {};
    for (int num = 0; num < 4; ++num) {
        int sum = 0;
        vector<int> vec(s[num]);
        for (int i = 0; i < s[num]; ++i) {
            cin >> vec[i];
            sum += vec[i];
        }
        int half = (sum >> 1);
        vector<int> res(half + 1, 0);
        for (auto a : vec) {
            for (int j = half; j >= a; --j) {
                res[j] = max(res[j], res[j - a] + a);
            }
        }
        ans += sum - res[half];
    }
    cout << ans;
    return 0;
}