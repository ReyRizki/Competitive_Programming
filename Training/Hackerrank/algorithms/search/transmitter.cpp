#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    int start = 100000;
    vector<bool> v(100000 + 1 + k, 0);

    REP(i, 0, n)
    {
        int x; cin >> x;
        start = min(start, x);
        
        v[x] = 1;
    }

    int i = start;
    int count = 0;
    while (i <= 100000)
    {
        if (v[i])
        {
            int j = i + k;
            while (not v[j])
                j--;

            count++;
            i = j + k + 1;
        }
        else
            i++;
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