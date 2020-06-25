#include <iostream>
#include <vector>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    u int n, q;
    cin >> n >> q;

    vector<vector<int>> k(n);

    REP(i, 0, n)
    {
        u int m;
        cin >> m;

        k[i] = vector<int>(m);
        REP(j, 0, m)
        {
            u int e;
            cin >> e;
            k[i][j] = e;
        }
    }

    REP(i, 0, q)
    {
        u int x, y;
        cin >> x >> y;
        cout << k[x][y] << "\n";
    }

    return 0;
}