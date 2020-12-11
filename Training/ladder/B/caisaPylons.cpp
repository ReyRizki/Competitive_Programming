#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    int prev = 0, energy = 0, ans = 0;
    REP(i, 0, n)
    {
        int x; cin >> x;

        energy += (prev - x);

        if (energy < 0)
        {
            ans += abs(energy);
            // cout << ans << "\n";

            energy = 0;
        }

        prev = x;
    }

    cout << ans << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}