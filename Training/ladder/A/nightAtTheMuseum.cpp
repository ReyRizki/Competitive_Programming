#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

int rotateMin(int current, int target)
{
    if (current > target)
        swap(target, current);

    return min(target - current, current - target + 26);
}

void solve()
{
    string s; cin >> s;

    char current = 'a';

    int result = 0;

    for (char c: s)
    {
        result += rotateMin(current - 'a', c - 'a');
        current = c;
    }

    cout << result << "\n";
    // cout << rotateMin('z' - 'a', 'a' - 'a') << "\n";
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

