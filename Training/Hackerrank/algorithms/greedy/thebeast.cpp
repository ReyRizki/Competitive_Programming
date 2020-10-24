#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

string constructString(int a, int b)
{
    string s;

    s.insert(0, a, '5');
    s.insert(s.size(), b, '3');
    
    return s;
}

string greedy(int n)
{
    int a = n / 3;
    bool found = 0;

    while ((not found) and (a >= 0))
    {
        if ((n - 3 * a) % 5 == 0)
            found = 1;
        else
            a--;
    }

    return (found ? constructString(a * 3, n - (a * 3)) : "-1"); 
}

void solve()
{
    int n; cin >> n;

    cout << greedy(n) << "\n";
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
