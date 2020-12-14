#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;

    int a, b; cin >> a >> b;
    int preva = a, prevb = b;
    bool diff = a != b;
    bool desc = 1;

    REP(i, 1, n)
    {
        cin >> a >> b;

        if (a != b)
            diff = 1;

        if ((a > preva) or (b > prevb))
            desc = 0;

        preva = a;
        prevb = b;
    }

    if (diff)
        cout << "rated";
    else
    {
        if (desc)
            cout << "maybe";
        else
            cout << "unrated";
    }

    cout << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}