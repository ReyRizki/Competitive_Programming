#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    string s, t; cin >> s >> t;

    if (t.length() > s.length())
        swap(s, t);

    int more0 = s.length() - t.length();

    REP(i, 0, more0)
        t.push_back('0');

    // cout << s << " " << t << "\n";

    vector<int> ans;
    int n = s.length();
    int carry = 0;
    REP(i, 0, n)
    {
        int sum = (s[i] - '0') + (t[i] - '0') + carry;

        ans.push_back(sum % 10);
        carry = sum / 10;
    }

    if (carry != 0)
        ans.push_back(carry);

    int i = 0;
    while (ans[i] == 0)
        i++;

    while (i < ans.size())
        cout << ans[i++];
    cout << "\n";

    // for (auto x : ans)
    //     cout << x;
    // cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int t = 1; cin >> t;
    while (t--)
        solve();

    return 0;
}
