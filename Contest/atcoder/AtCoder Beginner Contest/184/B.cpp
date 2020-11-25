#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, x; cin >> n >> x;
    string s; cin >> s;

    for (char c: s)
    {
        if (c == 'o')
            x++;
        else
        {
            if (x > 0)
                x--;
        }
    }

    cout << x << "\n";
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