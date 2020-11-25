#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int check(ull s, ull p)
{
    for (ull i = 1; i * i <= p; i++)
    {
        if ((p % i == 0) and (i + p / i == s))
	    return 1;
    }

    return 0;
}

void solve()
{
    ull s, p; cin >> s >> p;

    cout << (check(s, p) ? "Yes" : "No") << "\n";
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
