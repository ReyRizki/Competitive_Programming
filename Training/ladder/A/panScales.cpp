#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; cin >> s;
    string more; cin >> more;

    int pos = s.find('|');
    // cout << pos << "\n";

    string leftSide = s.substr(0, pos), rightSide = s.substr(pos + 1);
    // cout << leftSide << " " << rightSide << "\n";

    bool isSwapped = 0;
    if (leftSide.length() > rightSide.length())
    {
        swap(leftSide, rightSide);
        isSwapped = 1;
    }

    if (leftSide.length() < rightSide.length())
    {
        int diff = rightSide.length() - leftSide.length();
        if (more.length() < diff)
        {
            cout << "Impossible\n";
            return;
        }

        leftSide.append(more, 0, diff);
        more = more.substr(diff);

        if (isSwapped)
            swap(leftSide, rightSide);
    }

    if (leftSide.length() == rightSide.length())
    {
        if (more.length() & 1)
            cout << "Impossible";
        else
        {
            int mid = more.length() / 2;
            cout << leftSide << more.substr(0, mid) << "|" << rightSide << more.substr(mid);
        }
        cout << "\n";
    }

    // cout << leftSide << " " << rightSide << "\n";
    // cout << more << "\n";

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
