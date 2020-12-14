#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int ans(int digitSum, int count)
{
    if (digitSum < 10)
        return count;
    else
    {
        int temp = 0;

        while (digitSum > 0)
        {
            temp += (digitSum % 10);
            digitSum /= 10;
        }

        return ans(temp, count + 1);
    }
}

void solve()
{
    string s; cin >> s;

    if (s.length() == 1)
    {
        cout << 0 << "\n";
        return;
    }

    int digitSum = 0;
    for (auto c: s)
        digitSum += c - '0';

    cout << ans(digitSum, 1) << "\n";
}   

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; // cin >> t
    while (t--)
        solve();
    
    return 0;
}