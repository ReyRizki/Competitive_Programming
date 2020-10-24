#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool check(vector<int> a, vector<int> b, int n, int k)
{
    REP(i, 0, n)
        if (a[i] + b[i] < k)
            return false;

    return true;
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> a, b;

    REP(i, 0, n)
    {
        int x; cin >> x;

        a.push_back(x);
    }

    sort(a.begin(), a.end());

    REP(i, 0, n)
    {
        int x; cin >> x;

        b.push_back(x);
    }

    sort(b.begin(), b.end(), greater<int>());

    cout << (check(a, b, n, k) ? "YES" : "NO") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}
