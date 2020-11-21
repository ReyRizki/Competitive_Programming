#include <bits/stdc++.h>

#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    srand(time(0));
    REP(i, 0, 2)
    {
        REP(j, 0, 250)
        {
            cout << rand() % 10;
        }

        cout << "\n";
    }    
}   

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    freopen("in.txt", "w", stdout);

    // int t = 1; // cin >> t;
    solve();

    return 0;
}

