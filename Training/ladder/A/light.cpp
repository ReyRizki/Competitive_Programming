#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve(long long int t)
{
    if (t == 0)
        return;

    ll sq = sqrt(t);

    cout << (sq * sq == t? "yes" : "no") << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t = 1; // cin >> t;

    while (t != 0)
    {
        cin >> t;
        solve(t);
    }

    return 0;
}