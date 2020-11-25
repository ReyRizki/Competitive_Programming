#include <iostream>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

bool validator(int a[], int n, int min)
{
    REP(i, 0, n)
        if ((a[i] - min) % 2 == 1)
            return false;

    return true;
}

int main()
{
    int t, n, a[100], min;
    bool res[100];

    cin >> t;
    REP(i, 0, t)
    {
        cin >> n;
        min = 101;
        REP(j, 0, n)
        {
            cin >> a[j];
            if (a[j] < min)
                min = a[j];
        }

        res[i] = validator(a, n, min);
    }

    REP(i, 0, t)
        res[i] ? cout << "YES\n" : cout << "NO\n";

    return 0;
}