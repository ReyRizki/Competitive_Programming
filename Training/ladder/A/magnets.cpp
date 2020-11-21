#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    int group = 1;

    string mag; cin >> mag;
    char prev = mag[1];

    REP(i, 0, n - 1)
    {
        cin >> mag;

        if (mag[1] != prev)
        {
            group++;
            prev = mag[1];
        }
    }

    cout << group << "\n";
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

