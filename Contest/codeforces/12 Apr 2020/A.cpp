#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (u int i = (a); i < (b); i++)
#define REPR(i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

int main()
{
    u int T;
    cin >> T;

    u int N[T];
    REP(i, 0, T)
        cin >> N[i];

    REP(i, 0, T)
        cout << N[i] << "\n";

    return 0;
}