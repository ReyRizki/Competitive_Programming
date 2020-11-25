#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

// 0 = center
// 1 = right
// 2 = bottom
// 3 = left
// 4 = up
int getDirection(pair<int, int> p)
{
    if ((p.first == 0) and (p.second == 0))
        return 0;
    else if ((p.first != 0) and (p.second == 0))
    {
        if (p.first > 0)
            return 1;
        else
            return 3;
    }
    else if ((p.first == 0) and (p.second != 0))
    {
        if (p.second > 0)
            return 4;
        else
            return 2;
    }

    return 0;
}

bool largerDirection(pair<int, int> p1, pair<int, int> p2, int direction)
{
    switch(direction)
    {
    case 1: return p2.first > p1.first; break;
    case 2: return p2.second < p1.second; break;
    case 3: return p2.first < p1.first; break;
    case 4: return p2.second > p1.second; break;
    default: return 0; break;
    }

    return 0;
}

double getDistance(pair<double, double> p1, pair<double, double> p2)
{
    return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}

void solve()
{
    int n; cin >> n;
    map<int, pair<int, int>> maxDirection;
    bool center = false;

    REP(i, 0, n)
    {
        int x, y; cin >> x >> y;
        int direction = getDirection(make_pair(x, y));

        if (direction == 0)
            center = 1;
        else
        {
            if (maxDirection.find(direction) != maxDirection.end())
            {
                if (largerDirection(maxDirection[direction], make_pair(x, y), direction))
                    maxDirection[direction] = make_pair(x, y);
            }
            else
                maxDirection[direction] = make_pair(x, y);
        }
    }

    double result = 0;
    for (auto i = maxDirection.begin(); i != prev(maxDirection.end(), 1); ++i)
    {
        for (auto j = next(i, 1); j != maxDirection.end(); ++j)
            result = max(result, getDistance(i->second, j->second));
        
        if (center)
            result = max(result, getDistance(i->second, make_pair(0, 0)));
        // result = max()
        // cout << it->first << " " << (it->second).first << " " << (it->second).second << "\n";
    }

    if (center)
        result = max(result, getDistance(prev(maxDirection.end())->second, make_pair(0, 0)));

    cout << fixed << setprecision(6) << result << "\n";

    // cout << getDistance(make_pair(3, 0), make_pair(0, 10)) << "\n";
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