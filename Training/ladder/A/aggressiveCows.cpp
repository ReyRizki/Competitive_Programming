#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

bool canPlace(vector<ll> v, ll mid, int k)
{
    ll pos = v.front();
    int count = 1;

    for (auto it = next(v.begin(), 1); it != v.end(); ++it)
    {
        if (*it - pos >= mid)
        {
            pos = *it;
            count++;

            if (count == k)
                return 1;
        }
    }

    return 0;
}

void solve()
{
    int n, c; cin >> n >> c;

    vector<ll> v;

    REP(i, 0, n)
    {
        ll x; cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    ll ans = -1;

    ll left = 1, right = v.back();

    while (left < right)
    {
        ll mid = (left + right) / 2;

        if (canPlace(v, mid, c))
        {
            ans = max(ans, mid);
            left = mid + 1;
        }
        else
            right = mid;
    }

    cout << ans << "\n";
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