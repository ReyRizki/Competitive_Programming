#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> v;
    REP(i, 0, 2 * n + 1)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    cout << v[0] << " ";
    REP(i, 1, 2 * n)
    {
        if (i & 1)
        {
            int temp = v[i] - 1;

            if ((k > 0) and (v[i - 1] < temp) and (v[i + 1] < temp))
            {
                cout << temp;
                k--;
            }
            else
                cout << v[i];
        }
        else
            cout << v[i];

        cout << " ";
    }
    cout << v[2 * n]  << "\n";
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
