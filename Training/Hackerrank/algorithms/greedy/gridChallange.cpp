#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool checkSum(map<char, int> prev, map<char, int> curr)
{
    int prevSum = 0, currSum = 0;

    for (int i = 0; i < 26; i++)
    {
        prevSum += prev['a' + i];
        currSum += curr['a' + i];

        if (prevSum < currSum)
            return 0;
    }

    return 1;
}

void solve()
{
    int n; cin >> n;

    map<char, int> prev;

    bool can = 1;

    REP(i, 0, n)
    {
        string s; cin >> s;

        if (i == 0)
        {
            for (char c: s)
                prev[c]++;    
        }
        else
        {
            if (can)
            {
                map<char, int> curr;

                for (char c: s)
                    curr[c]++;

                can = checkSum(prev, curr);
            }
        }
    }

    cout << (can ? "YES" : "NO") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}
