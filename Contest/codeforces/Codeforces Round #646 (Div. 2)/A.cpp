#include <iostream>
#include <algorithm>
#include <vector>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool solve(u int x, u int noOdd, u int noEven)
{
    int minOdd = (x & 1) ? x : x - 1;
    int minEven = x - minOdd;

    while (minOdd <= x)
    {
        if (noOdd >= minOdd and noEven >= minEven)
            return 1;

        minOdd -= 2;
        minEven += 2;
    }

    return 0;
}

int main()
{
    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u int n, x;
        cin >> n >> x;

        vector<int> a(n);
        REP(it, a.begin(), a.end())
            cin >> *it;

        u int noOdd = count_if(a.begin(), a.end(), [](int x) { return x & 1; });

        cout << (solve(x, noOdd, n - noOdd) ? "Yes" : "No") << "\n";

        // cout << noOdd << endl;
    }

    return 0;
}