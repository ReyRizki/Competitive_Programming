#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

ll phi(ll n)
{
    // Initialize result as n
    ull result = n;

    // Consider all prime factors of n
    // and subtract their multiples
    // from result
    for(ll p = 2; p * p <= n; ++p)
    {

        // Check if p is a prime factor.
        if (n % p == 0)
        {

            // If yes, then update n and result
            while (n % p == 0)
                n /= p;

            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;

    return result;
}

ll exponentiation(ll a, ll b, ll m)
{
    if (a == 0)
        return 0;

    ll result = 1;

    while (b)
    {
        if (b & 1)
            result = (result * a) % m;

        a = (a * a) % m;
        b /= 2;
    }

    return result % m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ll b, p, m;

    // int t = 1; // cin >> t
    while (cin >> b >> p >> m)
    {
        ll target = b % m;
        ll power = p % phi (m);

        cout << exponentiation(target, power, m) << "\n";
    }
    return 0;
}
