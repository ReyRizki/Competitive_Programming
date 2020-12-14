#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)
#define INF 2000000000
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    vector<int> v;
    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    int ans = INF;
    int i = 0;
    while (i < n)
    {
        if ((i < n - 1) and (s[i] == 'R') and (s[i + 1] == 'L'))
        {
            ans = min(ans, (v[i + 1] - v[i])/2);

            i += 2;
            continue;
        }

        if ((i > 0) and (s[i - 1] == 'R') and (s[i] == 'L'))
        {
            ans = min(ans, (v[i] - v[i - 1])/2);

            i += 2;
            continue;
        }

        i++;
    }


    cout << (ans == INF ? -1 : ans) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin >> t;

    while (t--)
        solve();

    return 0;
}
