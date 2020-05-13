#include <iostream>
#include <algorithm>

#define REP(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main()
{
    int N;
    cin >> N;

    float q[100000];
    REP(i, 0, N)
        scanf("%f", &q[i]);

    sort(q, q+N);
    // REP(i, 0, N)
    // {
    //     int min = i;
    //     REP(j, i+1, N)
    //         if (q[j] < q[min])
    //             min = j;

    //     float temp = q[i];
    //     q[i] = q[min];
    //     q[min] = temp;
    // }

    float med = (N & 1) ? q[N/2] : (q[(N/2) - 1] + q[N/2]) / 2;

    printf("%.1f\n", med);

    return 0;
}