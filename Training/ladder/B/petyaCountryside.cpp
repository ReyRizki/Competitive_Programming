#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    int ans = 0;
    REP(i, 0, n)
    {
        int count = 0;

        for (int j = i - 1; (j >= 0) and (v[j] <= v[j + 1]); j--)
            count++;

        for (int j = i + 1; (j < n) and (v[j] <= v[j - 1]); j++)
            count++;
        
        ans = max(ans, count + 1);
    }

    cout << ans << "\n";
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