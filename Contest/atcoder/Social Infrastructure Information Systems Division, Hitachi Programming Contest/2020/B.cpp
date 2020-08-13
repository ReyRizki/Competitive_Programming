#include <iostream>

#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define m 100000

using namespace std;

int main()
{
    int A, B, M;
    int a[m], b[m];
    int minA, minB, minM;
    int ref, mic, disc;


    cin >> A >> B >> M;

    REP(i, 0, A)
    {
        cin >> a[i];
        if (i == 0)
            minA = a[i];
        else
        {
            if (a[i] < minA)
                minA = a[i];
        }
    }

    REP(i, 0, B)
    {
        cin >> b[i];
        if (i == 0)
            minB = b[i];
        else
        {
            if (b[i] < minB)
                minB = b[i];
        }
    }

    minM = minA + minB;

    REP(i, 0, M)
    {
        cin >> ref >> mic >> disc;
        if ((a[ref-1] + b[mic-1] - disc) < minM)
            minM = a[ref-1] + b[mic-1] - disc;
    }

    cout << minM << "\n";

    return 0;
}