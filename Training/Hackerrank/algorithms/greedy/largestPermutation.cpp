#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int maxIndex(vector<int> v, int start)
{
    int result = start;

    for (int i = start + 1; i < v.size(); i++)
        if (v[i] > v[result])
            result = i;

    return result;
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> v;

    REP(i, 0, n)
    {
        int x; cin >> x;

        v.push_back(x);
    }

    int i = 0;

    while ((i < n - 1) and (k > 0))
    {
        int largerIndex = maxIndex(v, i + 1);

        if (v[largerIndex] > v[i])
        {
            swap(v[largerIndex], v[i]);

            k--;
        }

        i++;
    }

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << "\n";
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
