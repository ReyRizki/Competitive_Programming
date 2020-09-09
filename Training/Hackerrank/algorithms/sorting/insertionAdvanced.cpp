#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void printVector(vector<int> v)
{
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << "\n";
}

int getSum(vector<int> v, int i)
{
    int sum = 0;

    while (i > 0)
    {
        sum += v[i];

        i -= i & -i;
    }

    return sum;
}

void updateBITree(vector<int> &v, int n, int i, int val)
{
    while (i <= n)
    {
        v[i] += val;

        i += i & - i;
    }
}

void convert(vector<int> &v, int n)
{
    vector<int> temp = v;

    sort(temp.begin(), temp.end());
    
    for (auto it = v.begin(); it != v.end(); ++it)
        *it = find(temp.begin(), temp.end(), *it) - temp.begin() + 1;
}
  
void solve()
{
    int n; cin >> n;
    vector<int> v(n);

    REP(i, 0, n)
        cin >> v[i];

    convert(v, n);

    vector<int> BITree(n + 1, 0);

    int result = 0;
    REPR(i, n, 0)
    {
        result += getSum(BITree, v[i] - 1);

        updateBITree(BITree, n, v[i], 1);
    }

    cout << result << "\n";
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
