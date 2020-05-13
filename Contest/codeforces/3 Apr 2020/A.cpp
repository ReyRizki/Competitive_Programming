#include <iostream>
#include <algorithm>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    u s int t;
    cin >> t;

    u s result[t];
    REP(i, 0, t)
    {
        u int n, x;
        cin >> n >> x;

        u int a[n];
        REP(j, 0, n)
            cin >> a[j];

        sort(a, a + n);

        u int pivot = 0, k = 0;

        while (((pivot == a[k]) || (pivot == a[k] - 1) || (x > 0)) && (k < n))
        {
            if ((pivot == a[k]) || (pivot == a[k] - 1))
            {
                pivot = a[k];
                k++;
            }
            else if (x > 0)
            {
                pivot++;
                x--;
            }
        }

        if (k == n)
            pivot += x;

        result[i] = pivot;
    }

    REP(i, 0, t)
        cout << result[i] << endl;
}