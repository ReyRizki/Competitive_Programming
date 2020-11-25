#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

char decode(vector<string> keys, char c, char dir)
{
    REP(i, 0, 3)
    {
        int len = keys[i].length();

        REP(j, 0, len)
        {
            if (keys[i][j] == c)
            {
                if (dir == 'R')
                    return keys[i][j - 1];
                else if (dir == 'L')
                    return keys[i][j + 1];
            }
        }
    }

    return 0;
}

void solve()
{
    vector<string> keys;
    keys.push_back("qwertyuiop");
    keys.push_back("asdfghjkl;");
    keys.push_back("zxcvbnm,./");

    char dir; cin >> dir;
    string s; cin >> s;

    for (char x: s)
        cout << decode(keys, x, dir);
    cout << "\n";
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
