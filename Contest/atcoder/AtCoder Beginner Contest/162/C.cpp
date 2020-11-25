#include <iostream>
#include <algorithm>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

u ll int gcdsum(u int K);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    u int K;
    cin >> K;

    cout << gcdsum(K) << "\n";
}

u ll int gcdsum(u int K)
{
    u ll int sum = 0;

    REP(i, 1, K + 1)
        REP(j, 1, K + 1)
            REP(k, 1, K + 1)
                sum += __gcd(__gcd(i, j), k);

    return sum;
}