#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    char prev = '.';
    int start, finish;
    REP(i, 0, n)
    {
        if (s[i] != prev)
        {
            if (prev == '.')
            {
                if (s[i] == 'R')
                {
                    start = i + 1;
                    prev = 'R';
                }
                else if (s[i] == 'L')
                {
                    start = i + 1;
                    finish = i;
                    break;
                }
            }
            else if (prev == 'R')
            {
                if (s[i] == '.')
                {
                    finish = i + 1;
                    break;
                }
                else if (s[i] == 'L')
                {
                    finish = i;
                    break;
                }
            }
        }
    }

    cout << start << " " << finish << "\n";
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
