#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int customUpperBound(vector<int> v, int start, int end, int x)
{
    
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        if (x)
            v.push_back(i);
    }

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << "\n";

    cout << *(upper_bound(v.begin() + 0, v.begin() + 0 + k - 1, 0 + k - 1)) << "\n";
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

