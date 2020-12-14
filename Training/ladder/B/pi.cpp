#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve(ll n)
{
    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    ll s = ((n - 1) * n) / 2;

    ll coprimes = 0;
    REP(i, 0, n - 1)
    {
        REP(j, i + 1, n)
        {
            if (__gcd(v[i], v[j]) == 1)
                coprimes++;
        }
    }

    if (coprimes == 0)
        cout << "No estimate for this data set.\n";
    else
        cout << fixed << setprecision(6) << sqrt((long double) ((long double) s / coprimes * 6)) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ll n;

    // int t = 1; // cin >> t
    while (cin >> n)
    {
        if (n == 0)
            break;

        solve(n);
    }
    return 0;
}
