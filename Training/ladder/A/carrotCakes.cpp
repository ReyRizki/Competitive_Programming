#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a - 1); i >= (b); i--)

using namespace std;

void solve()
{
    int n, t, k, d; cin >> n >> t >> k >> d;

    // 1 for without, 2 for with
    int cake1 = 0, cake2 = 0;
    int time1, time2;
    bool finish1 = 0, finish2 = 0;
    for (int i = 1; ; i++)
    {
        if (i % t == 0)
        {
            cake1 += k;
            cake2 += k;
        }

        if ((i > d) and ((i - d) % t == 0))
            cake2 += k;

        if ((cake1 >= n) and (not finish1))
        {
            time1 = i;
            finish1 = 1;
        }

        if ((cake2 >= n) and (not finish2))
        {
            time2 = i;
            finish2 = 1;
        }    

        if ((cake1 >= n) and (cake2 >= n))
            break;
    }
    
    cout << (time1 <= time2 ? "NO" : "YES") << "\n";
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

