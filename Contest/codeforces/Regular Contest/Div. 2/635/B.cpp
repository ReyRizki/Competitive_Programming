#include <iostream>
#include <cmath>

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
        int x, n, m;
        cin >> x >> n >> m;

        while (x > 0 and n > 0)
        {
            x = x - ((x / 2) + 10);
            n--;
        }

        while (x > 0 and m > 0)
        {
            x -= 10;
            m--;
        }
        
        cout << (x <= 0 ? "YES" : "NO") << "\n";
    }
}