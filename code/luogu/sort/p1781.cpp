#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string num;
    int resNum {};
    string resScore {};
    for (int i = 1; i < n + 1; ++i) {
        cin >> num;
        if (num.size() > resScore.size() || (num.size() == resScore.size() && num > resScore)) {
            resNum = i;
            resScore = num;
        }
    }
    cout << resNum << "\n" << resScore << endl;
    return 0;
}