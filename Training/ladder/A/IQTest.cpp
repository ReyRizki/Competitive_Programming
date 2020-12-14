#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    vector<string> m;

    REP(i, 0, 4)
    {
        string s; cin >> s;

        m.push_back(s);
    }

    bool good = 0;
    REP(i, 0, 3)
    {
        REP(j, 0, 3)
        {
            bool allBlack = (m[i][j] == '#') and (m[i][j + 1] == '#') and (m[i + 1][j] == '#') and (m[i + 1][j + 1] == '#');
            bool allWhite = (m[i][j] == '.') and (m[i][j + 1] == '.') and (m[i + 1][j] == '.') and (m[i + 1][j + 1] == '.');
            bool anyBlack = (m[i][j] == '#') xor (m[i][j + 1] == '#') xor (m[i + 1][j] == '#') xor (m[i + 1][j + 1] == '#');
            bool anyWhite = (m[i][j] == '.') xor (m[i][j + 1] == '.') xor (m[i + 1][j] == '.') xor (m[i + 1][j + 1] == '.');

            if (allBlack or allWhite or anyBlack or anyWhite)
            {
                good = 1;
                break;
            }
        }
    }

    cout << (good ? "YES" : "NO") << "\n";
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
