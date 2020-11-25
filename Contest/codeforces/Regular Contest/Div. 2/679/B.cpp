#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, m; cin >> n >> m;

    // cout << n << " " << m << "\n";

    deque<vector<int>> dq;
    
    REP(i, 0, n)
    {
        vector<int> temp;

        REP(j, 0, m)
        {
            int x; cin >> x;

            temp.push_back(x);
        }

        dq.push_back(temp);
    }

    REP(i, 0, m)
    {
        REP(j, 0, n)
        {
            int x; cin >> x;
        }
    }

    vector<int> front = dq.front();

    dq.pop_front();

    dq.push_back(front);

    for (auto i = dq.begin(); i != dq.end(); ++i)
    {
        for (auto j = i->begin(); j != i->end(); ++j)
            cout << *j << " ";

        cout << "\n";
    }
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