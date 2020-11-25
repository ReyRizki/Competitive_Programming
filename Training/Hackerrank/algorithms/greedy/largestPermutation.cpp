#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> v(n);

    REP(i, 0, n)
    {
        int x; cin >> x;

        v[i] = x;
    }

    REP(i, 0, n)
    {
        if ((v[i] != n - i) and (k != 0))
        {
            int j = i + 1;

            while (v[j] != n - i)
                j++;
                
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;

            k--;
        }
    }

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << "\n";
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
