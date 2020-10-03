#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int getSumDigit(int n)
{
    return n == 0 ? 0 : n % 10 + getSumDigit(n / 10);
}

void solve()
{
    int n; cin >> n;

    pair<int, int> result = make_pair(0, 0);

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int temp = getSumDigit(i);
            if (temp > result.second)
            {
                result.first = i;
                result.second = temp;
            }   
            else if (temp == result.second)
                result.first = max(result.first, i);

            int other = n / i;
            temp = getSumDigit(other);

            if (temp > result.second)
            {
                result.first = other;
                result.second = temp;
            }
            else if (temp == result.second)
                result.first = min(result.first, other);
        }
    }

    cout << result.first << "\n";
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