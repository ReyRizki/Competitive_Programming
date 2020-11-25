#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;

    int count = 0;
    for (int i = 0; i < s.length(); i++)
        count += ((((i % 3 == 0) or (i % 3 == 2)) and (s[i] != 'S')) or ((i % 3 == 1) and (s[i] != 'O')));

    cout << count << "\n";
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