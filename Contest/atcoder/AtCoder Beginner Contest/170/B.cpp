#include <iostream>

#define u unsigned
#define s short
#define ll long long
#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

bool solution(u int X, u int Y)
{
    if (Y < 2 * X or Y > 4 * X or (Y & 1))
        return 0;

    for (u int i = 2 * X; i <= 4 * X; i+= 2)
        if (Y == i)
            return 1;
}

int main()
{
    u int X, Y;
    cin >> X >> Y;

    cout << (solution(X, Y) ? "Yes" : "No") << "\n";
}