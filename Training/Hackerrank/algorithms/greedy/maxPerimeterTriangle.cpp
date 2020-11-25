#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool check(int a, int b, int c)
{
    return a < b + c;
}

void solve()
{
    int n; cin >> n;

    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());

    bool found = false;
    int i = 0;
    
    while ((not found) and (i < n - 2))
    {
        if (check(v[i], v[i + 1], v[i + 2]))
        {
            cout << v[i + 2] << " " << v[i + 1] << " " << v[i];
        
            found = true;
        }
        else
            i++;
    }

    if (not found)
        cout << -1;
    cout << "\n";
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
