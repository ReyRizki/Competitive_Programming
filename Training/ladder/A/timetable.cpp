#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;

    if (s == "0")
    {
        cout << 0 << "\n";
        return;
    }

    int bit1Count = 0;
    for (auto x: s)
        bit1Count += (x == '1');

    cout << ceil((float) (s.length() - (bit1Count == 1)) / 2) << "\n";

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
