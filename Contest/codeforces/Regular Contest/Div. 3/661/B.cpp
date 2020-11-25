#include <bits/stdc++.h>

#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

unsigned long long int eatMax(int a, int b)
{
    return (a >= b ? a : b);
}

void solve()
{
    int n; cin >> n;
    
    vector<int> candyArr;
    int candyMin = 1000000000;
    REP(i, 0, n)
    {
        int x; cin >> x;
        candyArr.push_back(x);

        if (x < candyMin)
            candyMin = x;
    }

    vector<int> orangeArr;
    int orangeMin = 1000000000;
    REP(i, 0, n)
    {
        int x; cin >> x;
        orangeArr.push_back(x);

        if (x < orangeMin)
            orangeMin = x;
    }

    unsigned long long int count = 0;
    REP(i, 0, n)
        count += eatMax(candyArr[i] - candyMin, orangeArr[i] - orangeMin);

    cout << count << "\n";

    // REP(i, 0, n)
    //     cout << arr[i] << " ";
    // cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--)
        solve();

    return 0;
}