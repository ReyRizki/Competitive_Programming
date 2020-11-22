#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    string a, b; cin >> a >> b;
    vector<int> have(27, 0), need(27, 0);

    for (auto x : a)
        have[x - 'a']++;

    for (auto x: b)
        need[x - 'a']++;

    bool bad = 0;

    REP(i, 0, 26)
    {
        if ((have[i] < need[i]) or ((have[i] -= need[i]) % k))
            bad = 1;

        have[i + 1] += have[i];
    }

    cout << (bad ? "No" : "Yes") << "\n";
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