#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int increaseMex(vector<bool> v, int mex)
{
    while (v[mex] == true)
        mex++;

    return mex;
}

void solve()
{
    int n; cin >> n;

    vector<bool> a(100, false);
    vector<bool> b(100, false);
    int mexA = 0, mexB = 0;

    REP(i, 0, n)
    {
        int x; cin >> x;

        if (not a[x])
        {
            a[x] = true;

            if (x == mexA)
                mexA = increaseMex(a, mexA);
        }
        else if (not b[x])
        {
            b[x] = true;

            if (x == mexB)
                mexB = increaseMex(b, mexB);
        }
    }

    cout << mexA + mexB << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--)
        solve();

    return 0;
}