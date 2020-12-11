#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    vector<pair<char, char>> v;

    REP(i, 0, 3)
    {
        string s; cin >> s;

        if (s[1] == '<')
            v.push_back(make_pair(s[0], s[2]));
        else if (s[1] == '>')
            v.push_back(make_pair(s[2], s[0]));
    }

    // for (auto x: v)
    //     cout << x.first << x.second << "\n";

    int i, j, k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // cout << i << " " << j << "\n";
            {
                if (v[i].second == v[j].first)
                    break;
            }
        }

        if (v[i].second == v[j].first)
            break;
    }

    // cout << i << " " << j << "\n";

    vector<bool> chosen(3, 0);
    chosen[i] = 1;
    chosen[j] = 1;

    while (chosen[k])
        k++;

    if ((v[k].first == v[i].first) and (v[k].second == v[j].second))
        cout << v[k].first << v[j].first << v[k].second;
    else
        cout << "Impossible";
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