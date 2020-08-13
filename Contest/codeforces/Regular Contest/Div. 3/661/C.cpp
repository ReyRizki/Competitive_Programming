#include <bits/stdc++.h>

#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    map<int, int> w;
    map<int, int> sum;

    REP(i, 0, n)
    {
        int x; cin >> x;
        w[x]++;
    }

    for (auto i = w.begin(); i != w.end(); ++i)
    {
        for (auto j = i; j != w.end(); ++j)
        {
            // cout << i->first << " " << j->first << " ";
            if (i == j)
            {
                sum[i->first * 2] += i->second / 2;
                // cout << sum[i->first * 2] << "\n";
            }
            else
            {
                sum[i->first + j->first] += min(i->second, j->second);
                // cout << sum[i->first + j->first] << "\n";
            }
        }
    }

    int result = 0;
    for (auto it = sum.begin(); it != sum.end(); ++it)
        if (it->second > result)
            result = it->second;

    cout << result << "\n";

    // REP(i, 0, n)
    //     cout << arr[i] << " ";
    // cout << "\n";
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