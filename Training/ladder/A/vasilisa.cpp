#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool check(vector<int> v)
{
    for (int i = 0; i < 4; i++)
    {
        if ((v[i] < 1) or (v[i] > 9))
            return 0;

        for (int j = 0; j < 4; j++)
            if (i != j)
                if (v[i] == v[j])
                    return 0;
    }

    return 1;
}

void solve()
{
    vector<int> cons;

    REP(i, 0, 6)
    {
        int x; cin >> x;

        cons.push_back(x);
    }

    vector<int> ans;
    ans.push_back((cons[4] + cons[2] - cons[1])/2);
    ans.push_back(cons[0] - ans[0]);
    ans.push_back(cons[2] - ans[0]);
    ans.push_back(cons[1] - ans[2]);

    if (check(ans))
        cout << ans[0] << " " << ans[1] << "\n" << ans[2] << " " << ans[3] << "\n";
    else
        cout << -1 << "\n";
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
