#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

char minChar(string s)
{
    char result = 'z';

    for (char c: s)
        result = min(result, c);

    return result;
}

bool check(vector<string> v)
{
    char prev = 'a';

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        char temp = minChar(*it);

        if (temp < prev)
            return false;
        else
            prev = temp;
    }

    return true;
}

void solve()
{
    int n; cin >> n;

    vector<string> v;

    REP(i, 0, n)
    {
        string s; cin >> s;

        v.push_back(s);
    }

    cout << (check(v) ? "YES" : "NO") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    while (t--)
        solve();

    return 0;
}
