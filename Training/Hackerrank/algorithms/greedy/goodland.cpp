#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

bool isCovered(vector<int> v, int x, int k)
{
    for (auto it = v.begin(); it != v.end(); ++it)
        if ((x >= *it - k) or (x <= *it + k))
            return 1;

    return 0;
}

int buildTarget(vector<bool> v, int start, int end)
{
    REPR(i, end + 1, start)
    {
        if (v[i])
            return i;
    }

    return -1;
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<bool> v;

    REP(i, 0, n)
    {
        bool x; cin >> x;

        v.push_back(x);
    }

    vector<int> build;

    REP(i, 0, n - k + 1)
    {
        if (not isCovered(build, i, k))
        {
            int temp = buildTarget(v, i, i + k - 1);

            if (temp != -1)
                build.push_back(temp);
        }
    }

    // cout << buildTarget(v, 0, 2) << "\n";
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

