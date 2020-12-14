#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

typedef long double C;
typedef complex<C> P;
#define X real()
#define Y imag()

typedef struct {
    P a, b, c, d;
} Rectangle;

bool absoluteToleranceCompare(double x, double y)
{
    return fabs(x - y) <= numeric_limits<double>::epsilon();
}

bool onSegment(P p, P q, P r)
{
    return ((q.X <= max(p.X, r.X)) && (q.X >= min(p.X, r.X)) && (q.Y <= max(p.Y, r.Y)) && (q.Y >= min(p.Y, r.Y)));
}

C triangleArea(P a, P b, P c)
{
    return abs((conj(a - c) * (b - c)).Y)/2;
}

bool check(Rectangle r, P p)
{
    return ((p.X > r.a.X) and (p.X < r.b.X) and (p.Y > r.a.Y) and (p.Y < r.c.Y));
    // C A = abs(r.b - r.a) * abs(r.c - r.b);

    // if (onSegment(r.a, r.b, p) or onSegment(r.b, r.c, p) or onSegment(r.c, r.d, p) or onSegment(r.d, r.a, p))
        // return 0;

    // C A1 = triangleArea(r.a, r.b, p);
    // C A2 = triangleArea(r.b, r.c, p);
    // C A3 = triangleArea(r.c, r.d, p);
    // C A4 = triangleArea(r.d, r.a, p);

    // return (A == A1 + A2 + A3 + A4);
}

void solve()
{
    vector<Rectangle> v;
    while (1)
    {
        char c; cin >> c;
        if (c == '*')
            break;

        C p, q, r, s; cin >> p >> q >> r >> s;
        // cout << p << q << r << s << "\n";

        v.push_back({{p, s}, {r, s}, {r, q}, {p, q}});
    }
    // cout << "Yeehaw\n";
    // cout << check(v[0], {17.6, 3.2}) << "\n";
    int n = v.size();
    int i = 1;
    while (1)
    {
        C x, y; cin >> x >> y;

        // cout << absoluteToleranceCompare(x, 9999.9) << "\n";
        // cout << x << " " << y << "\n";
        // cout << (x - 9999.9) << " " << (y - 9999.9) << "\n";
        // cout << (x - 9999.9 == 3.64153e-13) << " " << (y - 9999.9 == 3.64153e-13) << "\n";
        if (absoluteToleranceCompare(x, 9999.9) and absoluteToleranceCompare(y, 9999.9))
        {
            break;
        }
        bool found = 0;
        // cout << "After input\n";
        P p = {x, y};
        REP(j, 0, n)
        {
            // cout << j << "\n";
            if (check(v[j], p))
            {
                cout << "Point " << i << " is contained in figure " << j + 1 << "\n";

                if (not found)
                    found = 1;
            }
        }

        if (not found)
            cout << "Point " << i << " is not contained in any figure\n";

        i++;
    }


    // cout << v[0].a.X << " " << v[0].a.Y << "\n";
    // cout << triangleArea({0, 0}, {4, 0}, {4, 3}) << "\n";
    // P a = {0, 0}, b = {5, 0}, c = {5, 10};
    // cout << (abs(b - a) * abs(c - b)) << "\n";
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
