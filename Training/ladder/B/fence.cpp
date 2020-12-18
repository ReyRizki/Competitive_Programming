#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    queue<int> q;
    int sum = 0;
    int minw = 20000000;
    int ans;
    REP(i, 0, n)
    {
        int x; cin >> x;

        if (i >= k)
        {
            sum -= q.front();
            q.pop();
        }

        q.push(x);
        sum += x;

        if (q.size() == k)
        {
            if (sum < minw)
            {
                ans = i - k + 2;
                minw = sum;
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; // cin >> t;
    while (t--)
        solve();

    return 0;
}
