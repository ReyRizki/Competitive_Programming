#include <bits/stdc++.h>

#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool diffChecker(int n, vector<int> arr)
{
    REP(i, 0, n - 1)
        if ((arr[i + 1] - arr[i]) > 1)
            return 0;

    return 1;
}

void solve()
{
    int n; cin >> n;
    vector<int> arr;

    REP(i, 0, n)
    {
        int x; cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    cout << (diffChecker(n, arr) ? "YES" : "NO") << "\n";

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