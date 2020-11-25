#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;

    set<char> distinct;

    for (char c: s)
        distinct.insert(c);


    cout << (distinct.size() & 1 ? "IGNORE HIM" : "CHAT WITH HER") << "!\n";
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

