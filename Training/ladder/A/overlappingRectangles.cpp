#include <bits/stdc++.h>

#define ull unsigned long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

typedef struct {
    int llx, lly, urx, ury;
} Rectangle;

bool isOverlapping(Rectangle r1, Rectangle r2)
{
    if ((r1.urx <= r2.llx) or (r2.urx <= r1.llx))
        return false;

    if ((r1.lly >= r2.ury) or (r2.lly >= r1.ury))
        return false;

    return true;
}

void solve(int t)
{
    Rectangle r1, r2;
    cin >> r1.llx >> r1.lly >> r1.urx >> r1.ury;
    cin >> r2.llx >> r2.lly >> r2.urx >> r2.ury;

    // cout << r1.llx << " " << r1.lly << " " << r1.urx << " " << r1.ury << "\n";
    // cout << r2.llx << " " << r2.lly << " " << r2.urx << " " << r2.ury << "\n";
    if (not isOverlapping(r1, r2))
        cout << "No Overlap";
    else
        cout << max(r1.llx, r2.llx) << " " << max(r1.lly, r2.lly) << " " << min(r1.urx, r2.urx) << " " << min(r1.ury, r2.ury);
    cout << "\n";
    if (t > 0)
        cout << "\n";

    // cout << isOverlapping(r1, r2) << "\n";
    // cout << isOverlapping({0, 0, 5, 8}, {6, 0, 10, 8}) << "\n";
    // cout << isOverlapping({0, 20, 100, 120}, {80, 0, 500, 60}) << "\n";

    // int a, b; cin >> a >> b;
    // cout << a << " " << b << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    while (t--)
        solve(t);

    return 0;
}
