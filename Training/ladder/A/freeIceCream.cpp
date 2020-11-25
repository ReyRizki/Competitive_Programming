#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    ll n, x; cin >> n >> x;

    int result = 0;
    REP(i, 0, n)
    {
        string s; cin >> s;
        char c = s[0];
        ll d; cin >> d;

        if (c == '+')
            x += d;
        else if (c == '-')
        {
            if (x >= d)
                x -= d;
            else
                result++;
        }
    }

    cout << x << " " << result << "\n";
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

