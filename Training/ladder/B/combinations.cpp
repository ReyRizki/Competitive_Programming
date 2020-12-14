#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

ll exponentiation(ll a, ll b)
{
    ll result = 1;

    while (b)
    {
        if (b & 1)
            result = (result * a);

        a = (a * a);
        b /= 2;
    }

    return result;
}

// A function to print all prime  
// factors of a given number n  
void primeFactors(ll n, map<ll, ll> &m)  
{  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        m[2]++;
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            m[i]++;
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        m[n]++;
}  

void solve(ll n, ll m)
{
    ll great, little;

    if (m >= (n - m))
        great = m;
    else
        great = (n - m);

    little = n - great;

    map<ll, ll> uppermap;
    for (ll i = n; i > great; i--)
        primeFactors(i, uppermap);

    map<ll, ll> lowermap;
    for (ll i = little; i > 0; i--)
        primeFactors(i, lowermap);

    ll ans = 1;
    for (auto x: uppermap)
        ans *= exponentiation(x.first, x.second - lowermap[x.first]);

    cout << n << " things taken " << m << " at a time is " << ans << " exactly.\n";

    // primeFactors(280, uppermap);

    // for (auto x: uppermap)
    //     cout << x.first << "^" << x.second << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ll n, m;

    // int t = 1; // cin >> t
    while (cin >> n >> m)
    {
        if ((n == 0) and (m == 0))
            break;

        solve(n, m);
    }
    return 0;
}
