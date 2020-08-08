#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool enough(map<int, int> planks, int s, int l, int h)
{
    // cout << s << " " << l << " " << h << "\n";
    if ((s == l) and (s == h))
        return planks[s] >= 8;
    else if ((s == l) and (s != h))
        return (planks[s] >= 6) and (planks[h] >= 2);
    else if ((s != l) and (s == h))
        return (planks[s] >= 6) and (planks[l] >= 2);
    else if ((s != l) and (s != h))
    {
        if (l == h)
            return (planks[s] >= 4) and (planks[l] >= 4);
        else if (l != h)
            return (planks[s] >= 4) and (planks[l] >= 2) and (planks[h] >= 2); 
    }
}

bool checker(map<int, int> planks)
{
    for (auto i = planks.begin(); i != planks.end(); i++)
        for (auto j = planks.begin(); j != planks.end(); j++)
            for (auto k = planks.begin(); k != planks.end(); k++)
                if (enough(planks, i->first, j->first, k->first))
                    return 1;

    return 0;
}

void solve()
{
    int n; cin >> n;
    map<int, int> planks;

    REP(i, 0, n)
    {
        int a; cin >> a;
        planks[a]++;
    }

    // for (auto it = planks.begin(); it != planks.end(); ++it)
    //     cout << it->first << " " << it->second << "\n";

    bool prev = 0;
    int q; cin >> q;
    REP(i, 0, q)
    {
        char c; cin >> c;
        int x; cin >> x;
        
        if (c == '+')
        {
            planks[x]++;
            if (not prev)
                prev = checker(planks);
        }
        else if (c == '-')
        {
            planks[x]--;
            if (prev)
                prev = checker(planks);
        }

        // cout << c << " " << x << "\n";
        // for (auto it = planks.begin(); it != planks.end(); ++it)
        //     cout << it->first << " " << it->second << "\n";

        cout << (checker(planks) ? "YES" : "NO") << "\n";
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