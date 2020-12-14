#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    map<string, int> m;

    REP(i, 0, n)
    {
        string s; cin >> s;

        m[s]++;
    }

    string result = "";
    int scoreMax = 0;

    for (auto x: m)
    {
        if (x.second > scoreMax)
        {
            scoreMax = x.second;
            result = x.first;
        }
    }

    cout << result << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}