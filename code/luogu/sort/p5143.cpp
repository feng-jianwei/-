#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

struct Node {
    int x{}, y{}, z{};
    bool operator < (const Node& rhs) const
    {
        return z < rhs.z;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<Node> nodes;
    nodes.reserve(n);
    int x, y, z;
    for (auto i = 0; i < n; ++i) {
        cin >> x >> y >> z;
        nodes.emplace_back(x, y, z);
    }
    sort(nodes.begin(), nodes.end());
    int &currX = nodes[0].x;
    int &currY = nodes[0].y;
    int &currZ = nodes[0].z;
    double res = 0;
    for (auto& node : nodes) {
        res += sqrt(pow(currX - node.x, 2) + pow(currY - node.y, 2) + pow(currZ - node.z, 2));
        currX = node.x;
        currY = node.y;
        currZ = node.z;
    }
    cout << fixed << setprecision(3) << res << endl;
    return 0;
}