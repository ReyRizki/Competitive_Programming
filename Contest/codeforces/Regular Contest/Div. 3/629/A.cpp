#include <iostream>

#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a - 1); i >= (b); i--)

using namespace std;

int main()
{
    int t;
    int *res;

    cin >> t;

    res = (int *)malloc(t * sizeof(int));

    REP(i, 0, t)
    {
        int a, b;
        cin >> a >> b;

        res[i] = a % b;

        if (res[i] != 0)
            res[i] = b - res[i];
    }

    REP(i, 0, t)
        cout << res[i] << "\n";

    return 0;
}