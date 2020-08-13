#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool checker(map<int, int> groupCount)
{
    return (groupCount[8] >= 1) or (groupCount[4] >= 2) or ((groupCount[6] >= 1) and (groupCount[2] >= 2)) or ((groupCount[4] >= 1) and (groupCount[2] >= 3));
}

void solve()
{
    int n; cin >> n;
    map<int, int> planks;
    map<int, int> groupCount;

    REP(i, 0, n)
    {
        int a; cin >> a;
        planks[a]++;
        groupCount[planks[a]]++;
    }

    // for (auto it = groupCount.begin(); it != groupCount.end(); ++it)
    //     cout << it->first << " " << it->second << "\n";

    // bool prev = 0;
    int q; cin >> q;
    REP(i, 0, q)
    {
        char c; cin >> c;
        int x; cin >> x;
        
        if (c == '+')
        {
            planks[x]++;
            groupCount[planks[x]]++;
        }
        else if (c == '-')
        {
            groupCount[planks[x]]--;
            planks[x]--;
        }

        // cout << c << " " << x << "\n";
        // for (auto it = planks.begin(); it != planks.end(); ++it)
        //     cout << it->first << " " << it->second << "\n";

        cout << (checker(groupCount) ? "YES" : "NO") << "\n";
    }
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