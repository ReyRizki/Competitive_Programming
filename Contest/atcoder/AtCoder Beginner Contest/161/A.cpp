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

    u s int x, y, z;

    cin >> x >> y >> z;

    swap(x, y);
    swap(x, z);

    cout << x << " " << y << " " << z << endl;

    return 0;
}