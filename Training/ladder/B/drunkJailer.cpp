#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    vector<bool> v(101, 0);
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; (i * j) <= 100; j++)
        {
            if (i == 1)
                v[i * j] = 1;
            else if (i == 2)
                v[i * j] = 0;
            else
                v[i * j] = not v[i * j];
        }
    }

    vector<int> ans(101, 0);
    ans[0] = 0;
    for (int i = 0; i <= 100; i++)
        ans[i] = ans[i - 1] + v[i];

    int t = 1; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        
        cout << ans[n] << "\n";
    }

    return 0;
}
