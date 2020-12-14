#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

typedef long double C;
typedef complex<C> P;
#define X real()
#define Y imag()

void solve(vector<P> v)
{
    P a, b, c;

    REP(i, 0, 3)
    {
        REP(j, i + 1, 4)
        {
            if ((v[i].X == v[j].X) and (v[i].Y == v[j].Y))
            {
                b = v[i];

                break;
            }
        }
    }

    vector<P> temp;
    for (auto it = v.begin(); it != v.end(); ++it)
        if ((it->X != b.X) or (it->Y != b.Y))
            temp.push_back({it->X, it->Y});

    a = temp[0];
    c = temp[1];

    cout << fixed << setprecision(3) << a.X + c.X - b.X << " " << a.Y + c.Y - b.Y << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    C x, y;
    while (cin >> x >> y)
    {
        vector<P> v;
        v.push_back({x, y});
        REP(i, 0, 3)
        {
            cin >> x >> y;

            v.push_back({x, y});
        }

        solve(v);
        v.clear();
    }

    return 0;
}
