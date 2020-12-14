#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;

    string result = "";

    for (auto x : s)
    {
        result.push_back(x);

        if ((result.length() >= 3) and (result.substr(result.length() - 3, 3) == "WUB"))
        {
            REP(i, 0, 3)
                result.pop_back();

            if ((result.length() > 0) and (result[result.length() - 1] != ' '))
                result.push_back(' ');
        }
    }

    if (result[result.length() - 1] == ' ')
        result.pop_back();

    cout << result << "\n";
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