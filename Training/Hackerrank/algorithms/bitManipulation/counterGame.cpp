#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

unsigned long long int highestPowerof2(unsigned long long int n) 
{ 
   unsigned long long int p = (unsigned long long int)log2(n); 
   return (unsigned long long int)pow(2, p);  
} 

bool isPowerof2(unsigned long long int x) 
{ 
    return (x && !(x & x-1)); 
} 

string result(unsigned long long int n)
{
    if (n == 1)
        return "Richard";

    int count = 0;
    while (n > 1)
    {
        n = (isPowerof2(n) ? n >> 1 : n - highestPowerof2(n));
        
        count ++;
    }

    return (count & 1 ? "Louise" : "Richard");
}

void solve()
{
    unsigned long long int n; cin >> n;

    cout << result(n) << "\n";
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
