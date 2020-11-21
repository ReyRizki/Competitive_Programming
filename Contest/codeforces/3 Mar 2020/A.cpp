#include <iostream>
#include <algorithm>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main()
{
    short int t, n;
    short int a[100][100], b[100][100];

    cin >> t;

    REP(i, 0, t)
    {
        cin >> n;

        REP(j, 0, n)
        cin >> a[i][j];

        REP(j, 0, n)
        cin >> b[i][j];
    }

    REP(i, 0, t)
    {
        sort(a[i], a[i] + n);
        sort(b[i], b[i] + n);

        REP(j, 0, n)
        {
            cout << a[i][j];
            j < n - 1 ? cout << " " : cout << "\n";
        }

        REP(j, 0, n)
        {
            cout << b[i][j];
            j < n - 1 ? cout << " " : cout << "\n";
        }
    }
    return 0;
}