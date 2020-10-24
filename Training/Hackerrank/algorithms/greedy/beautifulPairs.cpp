#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    map<int, int> ma;

    REP(i, 0, n)
    {
        int x; cin >> x;

        ma[x]++;
    }

    vector<int> vb;
    int result = 0;

    REP(i, 0, n)
    {
        int x; cin >> x;

        if (ma[x] > 0)
        {
            ma[x]--;
            
            result++;
        }
        else
            vb.push_back(x);
    }

    if (vb.size() > 0)
        result++;
    else
        result--;
    
    cout << result << "\n";
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
