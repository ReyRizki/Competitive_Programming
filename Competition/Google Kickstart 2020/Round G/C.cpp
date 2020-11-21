#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int minimumSlide(int x, int y, int w)
{
    return (x <= y ? min(y - x, w - y + x) : min(x - y, w + y - x));
}

void solve()
{
    int n, w; cin >> n >> w;

    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    int result = INT32_MAX;

    REP(i, 1, w + 1)
    {
        int slides = 0;

        REP(j, 0, n)
            slides += minimumSlide(v[j], i, w);

        result = min(result, slides);
    }

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    REP(i, 0, t)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
    }

    return 0;
}