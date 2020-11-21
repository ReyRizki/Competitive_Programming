#include <iostream>

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

    u int T;
    cin >> T;

    REP(i, 0, T)
    {
        u int a[4];
        REP(j, 0, 4)
            cin >> a[j];

        REP(j, 0, 3)
            cout << (a[j] + a[j + 1]) / 2 << ((j == 2) ? "\n" : " "); 
    }

    return 0;

}