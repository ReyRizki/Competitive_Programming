#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, a; cin >> n >> a;
    
    vector<bool> v;
    REP(i, 0, n)
    {
        bool x; cin >> x;

        v.push_back(x);
    }

    a--;
    int leftCity = a, rightCity = n - a - 1;
    int det = min(leftCity, rightCity);

    int ans = 0;
    for (int i = 0; i <= det; i++)
    {
        if (i == 0)
            ans += v[a];
        else
            if (v[a - i] and v[a + i])
                ans += 2;
    }

    if (leftCity < rightCity)
    {
        REP(i, a + det + 1, n)
            ans += v[i];
    }
    else
    {
        REP(i, 0, a - det)
        {
            // cout << i << " ";
            ans += v[i];
        }
        // cout << "\n";
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