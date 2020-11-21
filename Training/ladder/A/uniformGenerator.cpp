#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve(int step, int mod)
{
    cout << right << setw(10) << step << setw(10) << mod << "    " << (__gcd(step, mod) == 1 ? "Good" : "Bad") << " Choice\n\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int step, mod;
    while (cin >> step >> mod)
        solve(step, mod);

    return 0;
}

