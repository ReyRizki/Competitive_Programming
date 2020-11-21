#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int takeCard(deque<int> &dq)
{
    if (not dq.empty())
    {
        int temp;

        if (dq.back() >= dq.front())
        {
            temp = dq.back();
            dq.pop_back();
        }
        else
        {
            temp = dq.front();
            dq.pop_front();
        }

        return temp;
    }

    return 0;
}

void solve()
{
    int n; cin >> n;

    deque<int> dq;

    REP(i, 0, n)
    {
        int x; cin >> x;

        dq.push_back(x);
    }

    int a = 0, b = 0;
    while (not dq.empty())
    {
        a += takeCard(dq);
        b += takeCard(dq);
    }

    cout << a << " " << b << "\n";
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

