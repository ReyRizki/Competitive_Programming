#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    string source = "abcdefghijklmnopqrstuvwxyz";

    int n, k; cin >> n >> k;

    string uq = source.substr(0, min(26, k));

    int it = n / k;

    REP(i, 0, it)
        cout << uq;
    
    if (n % k != 0)
        cout << uq.substr(0, n % k);
    cout << "\n";
    // cout << uq << "\n";
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

