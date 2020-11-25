#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    string s; getline(cin, s);

    set<char> st;

    for (char c: s)
    {
        // cout << c;
        if ((c >= 'a') and (c <= 'z'))
            st.insert(c);
    }
    // cout << "\n";

    // for (auto it = st.begin(); it != st.end(); ++it)
    //     cout << *it << " ";
    // cout << "\n";

    cout << st.size() << "\n";
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

