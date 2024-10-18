#include <iostream>

using namespace std;

constexpr int MAX_CANDIDATE_NUM = 999 + 5;
int candidates[MAX_CANDIDATE_NUM];

int main()
{
    int n, m;
    cin >> n >> m;
    int voteNum {};
    for (size_t i = 0; i < m; ++i) {
        cin >> voteNum;
        ++candidates[voteNum];
    }
    for (size_t i = 1; i <= n; ++i) {
        while(candidates[i]--) {
            cout << i << " ";
        }
    }
    return 0;
}