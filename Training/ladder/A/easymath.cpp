#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

ll lcm(ll a, ll b)
{
    return (a * b)/__gcd(a, b);
}

ll inc_exc(ll n, vector<ll> v, ll idx = 0, ll d = 1, ll sign = -1)
{
    if (idx == v.size())
        return (-sign * n) / d;

    return inc_exc(n, v, idx + 1, d, sign) + inc_exc(n, v, idx + 1, lcm(d, v[idx]), sign * -1);
}

bool isDivisible(vector<ll> v, ll n)
{
    for (auto x: v)
        if (n % x == 0)
            return 1;

    return 0;
}

void solve()
{
    ll n, m, a, d;

    cin >> n >> m >> a >> d;

    vector<ll> v;

    REP(i, 0, 5)
    {
        ll temp = a + i * d;

        v.push_back(temp);
    }

    cout << (inc_exc(m, v) - inc_exc(n - 1, v)) << "\n";
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

