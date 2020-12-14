#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        if ((v.empty()) or (v.back() != x))
            v.push_back(x);
    }

    // for (auto x: v)
        // cout << x << " ";
    // cout << "\n";

    // cout << v.back() << "\n";
    //

    int q; cin >> q;
    REP(i, 0, q)
    {
        int x; cin >> x;

        if (x < v.front())
            cout << "X " << v.front();
        else if (x > v.back())
            cout << v.back() << " X\n";
        else
        {
            auto it = lower_bound(v.begin(), v.end(), x);
            // cout << *it << "\n";
            //
            if (*it == x)
            {
                if (it == v.begin())
                    cout << "X";
                else
                    cout << *(prev(it, 1));
                cout << " ";

                if (it == (prev(v.end(), 1)))
                    cout << "X";
                else
                    cout << *(next(it , 1));
                cout << "\n";
            }
            else
                cout << *(prev(it , 1)) << " " << *it << "\n";
        }
    }
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
