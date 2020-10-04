#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;


pair<long long int, long long int> multiply(pair<long long int, long long int> p1, pair<long long int, long long int> p2, long long int m)
{
    return make_pair(((((p1.first % m) * (p2.first % m)) % m) - (((p1.second % m) * (p2.second % m)) % m)) % m, ((((p1.first % m) * (p2.second % m)) % m) + (((p1.second % m) * (p2.first % m)) % m)) % m);
}   

pair<long long int, long long int> exponentiate(pair<long long int, long long int> x, long long int n, int m)
{
    while ((n & 1) == 0) 
    {
        x = multiply(x, x, m);
        n >>= 1;
    }

    pair<long long int, long long int> P = x;

    n >>= 1;
    while (n > 0) 
    {
        x = multiply(x, x, m);
        if ((n & 1) != 0)
            P = multiply(P, x, m);
        
        n >>= 1;
    }

    return P;
}

void solve()
{
    long long int a, b; cin >> a >> b;
    long long int k; cin >> k;
    long long int m; cin >> m;

    pair<long long int, long long int> p = exponentiate(make_pair(a, b), k, m);
    cout << p.first << " " << p.second << "\n";
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