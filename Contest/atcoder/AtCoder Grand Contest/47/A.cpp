#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<double> v;

    int count = 0;
    REP(i, 0, n)
    {
        double a; cin >> a;
        v.push_back(a);

        REP(j, 0, i)
        {
            double temp;
            if (modf(v[i] * v[j], &temp) == 0)
            {
                // cout << v[i] << " " << v[j] << "\n";
                count++;
            }
        }

    }

    cout << count << "\n";
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