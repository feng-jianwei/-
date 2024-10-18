#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Player {
    int id {};
    int score {};
    bool operator <(const Player& rhs) const
    {
        if (score != rhs.score) {
            return score > rhs.score;
        }
        return id < rhs.id;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    m *= 1.5;
    vector<Player> players;
    players.reserve(n);
    int id, score;
    for (auto i = 0; i < n; ++i) {
        cin >> id >> score;
        players.emplace_back(id, score);
    }
    sort(players.begin(), players.end());
    int cnt = m;
    for (int i = m - 1; i < n - 1; ++i) {
        if (players[i].score != players[i + 1].score) {
            break;
        }
        ++cnt;
    }
    cout << players[m - 1].score << " " << cnt << endl;
    for (int i = 0; i < cnt; ++i) {
        cout << players[i].id << " " << players[i].score << endl;
    }
    return 0;
}