#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> scores(m);
    for (int i = 0; i < m; ++i) {
        cin >> scores[i];
    }
    sort(scores.begin(), scores.end());
    int score;
    long res {};
    for (int i = 0; i < n; ++i) {
        cin >> score;
        auto upper = lower_bound(scores.begin(), scores.end(), score);
        if (upper == scores.end()) {
            res += score - *(upper - 1);
            continue;
        }
        if (upper == scores.begin()) {
            res += *upper - score;
            continue;
        }
        res += min(score - *(upper - 1), *upper - score);
    }
    cout << res;
    return 0;
}