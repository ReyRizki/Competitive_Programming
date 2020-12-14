#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

typedef long double C;
typedef complex<C> P;
#define X real()
#define Y imag()

void solve()
{
    int n, k; cin >> n >> k;

    long double x, y; cin >> x >> y;
    P prev = {x, y};

    long double result = 0;
    REP(i, 1, n)
    {
        cin >> x >> y;
        P curr = {x, y};

        result += abs(curr - prev);

        prev = curr;
    }

    cout << fixed << setprecision(9)  << (result / 50)  * k << "\n";
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
