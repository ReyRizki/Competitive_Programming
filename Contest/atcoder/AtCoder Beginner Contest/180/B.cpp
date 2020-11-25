#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    int md = 0, cd = 0;
    double ed = 0;

    REP(i, 0, n)
    {
        int x; cin >> x;

        md += abs(x);

        if (i == 0)
            ed = (double)x;
        else
            ed = sqrt(pow((double)ed, 2) + pow((double)x, 2));

        cd = max(cd, abs(x));
    }

    cout << md << "\n";
    cout << fixed << setprecision(15) << ed << "\n";
    cout << cd << "\n";
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