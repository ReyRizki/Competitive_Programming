#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

char encrypt(char c, int k)
{
    k = k % 26;

    if (c >= 'A' and c <= 'Z')
    {
        if ((c + k) > 'Z')
            return ((c + k) % 'Z') + ('A' - 1);
        return c + k;
    }

    if (c >= 'a' and c <= 'z')
    {
        if ((c + k) > 'z')
            return ((c + k) % 'z') + ('a' - 1);
        return c + k;
    }

    return c;
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int k; cin >> k;

    for (char c: s)
        cout << encrypt(c, k);

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