#include <iostream>

#define u unsigned
#define ll long long
#define ull u ll
#define REP( i, a, b) for (int i = (a); i < (b); i++)
#define REPR( i, a, b) for (int i = (a-1); i >= (b); i--)

using namespace std;

u int solution(u int X);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    u int X;
    cin >> X;

    cout << solution(X) << "\n";

    return 0;
}

u int solution(u int X)
{
    ull int res = (X / 500) * 1000;
    X %= 500;
    res += (X / 5) * 5;

    return res;
}