#include <iostream>
#include <vector>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve() 
{
    int N; cin >> N;
    string colors; cin >> colors;

    vector<int> wArr, rArr;

    REP(i, 0, N)
    {
        if (colors[i] == 'W')
            wArr.push_back(i);
        else if (colors[i] == 'R')
            rArr.push_back(i);
    }

    int wIdx = 0, rIdx = rArr.size() - 1;

    int count = 0;
    while (wIdx < wArr.size() and rIdx >= 0 and wArr[wIdx] < rArr[rIdx])
    {
        count++;
        wIdx++;
        rIdx--;
    }

    cout << count << "\n";
}

int main()
{
    solve();

    return 0;
}