#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool isUppercase(char c)
{
    return (c >= 'A') and (c <= 'Z');
}

bool isLowercase(char c)
{
    return (c >= 'a') and (c <= 'z');
}

bool isDigit(char c)
{
    return (c >= '0') and (c <= '9');
}

bool isSpecial(char c)
{
    string special = "!@#$%^&*()-+";

    for (char x: special)
        if (c == x)
            return 1;

    return 0;
}

void solve()
{
    int n; cin >> n;
    vector<bool> attribute(4);
    REP(i, 0, n)
    {
        char x; cin >> x;
        if (not attribute[0])
            attribute[0] = isUppercase(x);

        if (not attribute[1])
            attribute[1] = isLowercase(x);

        if (not attribute[2])
            attribute[2] = isDigit(x);

        if (not attribute[3])
            attribute[3] = isSpecial(x);
    }

    int sumAttribute = accumulate(attribute.begin(), attribute.end(), 0);

    cout << max(6 - n, 4 -sumAttribute) << "\n";

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