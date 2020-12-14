#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

ll totalLine(ll n, ll k)
{
    ll result = 0;

    while (n > 0)
    {
        result += n;
        n /= k;
    }

    return result;
}

ll binarySearch(ll l, ll r, ll n, ll k)
{
    if (l + 1 == r)
    {
        if (totalLine(l, k) >= n)
            return l;
        else
            return r;
    }
    else
    {
        ll mid = (l + r) / 2;

        if (totalLine(mid, k) >= n)
            return binarySearch(l, mid, n, k);
        else
            return binarySearch(mid, r, n, k);
    }
}

void solve()
{
    ll n, k; cin >> n >> k;

    cout << binarySearch(1, 1000000000, n, k) << "\n";
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