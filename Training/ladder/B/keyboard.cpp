#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

bool twoHands(vector<pair<float, float>> shifts, vector<pair<float, float>> letterkeys, float x)
{
    for (auto p1: shifts)
    {
        for (auto p2: letterkeys)
        {
            if ((float) sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2)) - x <= 0)
                return 0;
        }
    }

    return 1;
}

void solve()
{
    int n, m; float x; cin >> n >> m >> x;

    vector<pair<float, float>> shifts;
    map<char, vector<pair<float, float>>> keys;

    REP(i, 0, n)
    {
        string s; cin >> s;

        REP(j, 0, m)
        {
            if (s[j] == 'S')
                shifts.push_back(make_pair(i, j));
            else
                keys[s[j]].push_back(make_pair(i, j));
        }
    }

    map<char, bool> need;
    if (not shifts.empty())
    {
        for (auto k: keys)
        {
            need[k.first] = twoHands(shifts, k.second, x);
        }
    }

    int q; cin >> q;
    string s; cin >> s;

    int ans = 0;
    for (auto c: s)
    {
        if (keys[tolower(c)].empty())
        {
            cout << -1 << "\n";
            return;
        }

        if ((c >= 'A') and (c <= 'Z'))
        {
            if (shifts.empty())
            {
                cout << -1 << "\n";
                return;
            }

            ans += need[tolower(c)];
        }
    }

    cout << ans << "\n";
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
