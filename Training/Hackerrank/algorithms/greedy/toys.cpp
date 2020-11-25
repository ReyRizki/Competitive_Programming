#include <bits/stdc++.h>

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

        v.push_back(x);
    }    

    sort(v.begin(), v.end());

    vector<int>::iterator it = v.begin();
    int result = 0;

    while (it != v.end())
    {
        result++;
        it = upper_bound(it, v.end(), *it + 4);
    }

    cout << result << "\n";
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
