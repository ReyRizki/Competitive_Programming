#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    if (n == 1)
    {
        cout << "yes\n1 1\n";

        return; 
    }

    vector<int> sortedArr = v;
    sort(sortedArr.begin(), sortedArr.end());

    int l = -1;
    REP(i, 0, n)
    {
        if (v[i] != sortedArr[i])
        {
            l = i;

            break;
        }
    }

    int r = -1;
    REPR(i, n, 0)
    {
        if (v[i] != sortedArr[i])
        {
            r = i;

            break;
        }
    }

    if ((l == -1) and (r == -1))
    {
        cout << "yes\n1 1\n";

        return; 
    }

    reverse(v.begin() + l, v.begin() + r + 1);
    
    if (is_sorted(v.begin(), v.end()))
        cout << "yes\n" << l + 1 << " " << r + 1;
    else
        cout << "no";
    cout << "\n";
    
    // for (auto x: v)
    //     cout << x << " ";
    // cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t;
    while (t--)
        solve();

    return 0;
}
