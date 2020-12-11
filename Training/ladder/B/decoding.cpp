#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    vector<char> ans(n);
    
    int left, right;
    if (n & 1)
    {
        ans[n / 2] = s[0];

        left = (n / 2) - 1;
        right = (n / 2) + 1;

        s = s.substr(1, --n);
    }
    else
    {
        left = (n / 2) - 1;
        right = n / 2;
    }

    REP(i, 0, n)
    {
        if (i & 1)
        {
            ans[right] = s[i];
            right++;
        }
        else
        {
            ans[left] = s[i];
            left--;
        }
    }

    for (auto x: ans)
        cout << x;
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